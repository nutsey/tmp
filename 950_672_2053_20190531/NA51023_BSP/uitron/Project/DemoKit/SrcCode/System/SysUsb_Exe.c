/*
    System Usb Callback

    System Callback for USb Module.

    @file       SysUsb_Exe.c
    @ingroup    mIPRJSYS

    @note

    Copyright   Novatek Microelectronics Corp. 2010.  All rights reserved.
*/

////////////////////////////////////////////////////////////////////////////////
#include "SysCommon.h"
#include "AppCommon.h"
////////////////////////////////////////////////////////////////////////////////
#include "UIFrameworkExt.h"
#include "UICommon.h"
#include "AppLib.h"
#include "MsdcNvtCb.h"
#include "UIAppUsbDisk.h"
#include "UsbDevDef.h"
#include "usb.h"
#include "interrupt.h"
#if (LINUX_MSDC == ENABLE)
#include "usbipc_api.h"
#endif

//global debug level: PRJ_DBG_LVL
#include "PrjCfg.h"
//local debug level: THIS_DBGLVL
#define THIS_DBGLVL         2 // 0=FATAL, 1=ERR, 2=WRN, 3=UNIT, 4=FUNC, 5=IND, 6=MSG, 7=VALUE, 8=USER
///////////////////////////////////////////////////////////////////////////////
#define __MODULE__          SysUsbExe
#define __DBGLVL__          ((THIS_DBGLVL>=PRJ_DBG_LVL)?THIS_DBGLVL:PRJ_DBG_LVL)
#define __DBGFLT__          "*" //*=All, [mark]=CustomClass
#include "DebugModule.h"
///////////////////////////////////////////////////////////////////////////////

#if (USB_MODE == ENABLE)

//Using USB Plug-In + DOWN Key to enter to Msdc Vendor Spy Mode
#if (MSDCVENDOR_UPDFW==ENABLE)
static BOOL m_bForceMsdcNvt = TRUE;
#else
static BOOL m_bForceMsdcNvt = FALSE;
#endif

int SX_TIMER_DET_USB_ID = -1;
#if (USB_MODE==ENABLE)
static BOOL m_bVendorConnected = FALSE;
#endif
UINT32 gUsbSrc = USB_SRC_NONE;

void USB_CB(UINT32 event, UINT32 param1, UINT32 param2);
void UI_DetUSB(void);

#if (USBINSERT_FUNCTION == ENABLE)
SX_TIMER_ITEM(USB_Det, UI_DetUSB, 5, FALSE)
#endif

BOOL ACIsPlug = FALSE;
extern BOOL PWRON_SRC_PWR_KEY;
extern BOOL PWRON_SRC_PWR_GSENSOR;

void System_OnUsbPreInit(void)
{
	if (GxSystem_GetPowerOnSource() == GX_PWRON_SRC_PWR_VBUS) {
		//#NT#2016/12/20#Niven Cho -begin
		//#NT# fix usb1=host, system shutdown automatically when power cord first plug-in.
#if defined(_USB1_HOST_)
		DBG_ERR("nonsense, power source cannont be VBUS with USB1 is host.\r\n");
		//force it to FALSE
		GxUSB_Init((UINT32)Dx_GetObject(DX_CLASS_USB_EXT), FALSE);
#else
		GxUSB_Init((UINT32)Dx_GetObject(DX_CLASS_USB_EXT), TRUE);
#endif
		//#NT#2016/12/20#Niven Cho -end
	} else {
		GxUSB_Init((UINT32)Dx_GetObject(DX_CLASS_USB_EXT), FALSE);
	}
	//Charger type setting should be invoked once prior to GxUSB_GetIsUSBPlug() which
	//has been called in System_OnPowerPreInit() at the earliest time.
	GxUSB_SetChargerType(FALSE);
}

void System_OnUsbInit(void)
{
	TM_BOOT_BEGIN("usb", "init");
	//PHASE-1 : Init & Open Drv or DrvExt
	{
		//init GxUSB module
		GxUSB_RegCB(USB_CB);         //Register CB function of GxUSB
#if (USBINSERT_FUNCTION == ENABLE)
		SX_TIMER_DET_USB_ID = SxTimer_AddItem(&Timer_USB_Det);
#endif
	}
	//PHASE-2 : Init & Open Lib or LibExt
	{
#if (USBINSERT_FUNCTION == ENABLE)
		SxTimer_SetFuncActive(SX_TIMER_DET_USB_ID, TRUE);
#endif

#if (LINUX_MSDC == ENABLE)
		USBIPC_OPEN open;
		open.sharedMemAddr = OS_GetMempoolAddr(POOL_ID_USBIPC);
		open.sharedMemSize = POOL_SIZE_USBIPC;
		usbipc_open(&open);
#endif
	}

	//force check USB connect type
	if (GxUSB_GetIsUSBPlug()) {
		GxUSB_UpdateConnectType();
	}
	TM_BOOT_END("usb", "init");
}

void System_OnUsbExit(void)
{
	//PHASE-2 : Close Lib or LibExt
	{
#if (LINUX_MSDC == ENABLE)
		usbipc_close();
#endif
	}
	//PHASE-1 : Close Drv or DrvExt
	{
	}
}

/////////////////////////////////////////////////////////////////////////////
void UI_DetUSB(void)
{
	if (!UI_IsForceLock()) {
		GxUSB_DetConnect();
	}
}
//---------------------SysUSB Public API  ----------------------------------
void USB_UpdateSource(void)
{
#if (USB_CHARGE_FUNCTION == ENABLE)
	UINT32 ctype = GxUSB_GetConnectType();
	if (ctype == USB_CONNECT_NONE) { //沒插USB
		DBG_MSG("  USB Src = (None)\r\n");
		gUsbSrc = USB_SRC_NONE;
	} else if (ctype == USB_CONNECT_PC) { //USB插著PC
		DBG_MSG("  USB Src = PC\r\n");
		gUsbSrc = USB_SRC_USB_PC;
	} else if (ctype == USB_CONNECT_CHARGER) { //USB插著充電器
		DBG_MSG("  USB Src = Adapter\r\n");
		gUsbSrc = USB_SRC_USB_ADAPTER;
	} else if (ctype == USB_CONNECT_CHARGING_PC) { //USB插著有大電流port的PC
		DBG_MSG("  USB Src = Charging PC\r\n");
		gUsbSrc = USB_SRC_USB_CHARGING_PC;
	} else { //USB插著未知 (已經拔除無法判斷)
		DBG_ERR("  USB Src = Unknown?\r\n");
		gUsbSrc = USB_SRC_UNKNOWN;
	}
#else
	BOOL bInsert = GxUSB_GetIsUSBPlug();
	if (!bInsert) { //沒插USB
		DBG_MSG("  USB Src = (None)\r\n");
		gUsbSrc = USB_SRC_NONE;
	} else { //USB插著PC
		DBG_MSG("  USB Src = PC\r\n");
		gUsbSrc = USB_SRC_USB_PC;
	}
#endif
}
UINT32 USB_GetSource(void)
{
	return gUsbSrc;
}
///////////////////////////////////////////////////////////////////////
//Device flow event
#if (USB_MODE==ENABLE)
static BOOL m_bACPlug = FALSE;
#endif
INT32 System_OnUsbInsert(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	//usb plug in
	DBG_IND("USB plug - begin\r\n");
	USB_UpdateSource();
	Ux_PostEvent(NVTEVT_BATTERY, 0, 0);
	debug_msg("ACC is Insert!!!!!!!! \r\n");
	ACIsPlug = TRUE;
    PWRON_SRC_PWR_KEY = FALSE;
    PWRON_SRC_PWR_GSENSOR= FALSE;

#if (USB_MODE==ENABLE)
	if (!USB_GetIsMsdcNvt()) {
		debug_msg("USBConnectType=%d\r\n", GxUSB_GetConnectType());
		if ((GxUSB_GetConnectType() == USB_CONNECT_PC) || (GxUSB_GetConnectType() == USB_CONNECT_CHARGING_PC)) {
#if (MOVIE_UVAC_FUNC == ENABLE)
			// temporarily do nothing for Movie + UVC
#else

#if 0 //temporally support MSDC only
			Ux_SendEvent(0, NVTEVT_SYSTEM_MODE, 1, PRIMARY_MODE_USBMSDC);
#else
			Ux_SendEvent(0, NVTEVT_SYSTEM_MODE, 1, PRIMARY_MODE_USBMENU);
#endif
			USB_PlugInSetFunc();
#endif
		} else if (GxUSB_GetConnectType() == USB_CONNECT_CHARGER) {
			if (System_GetState(SYS_STATE_CURRMODE) == PRIMARY_MODE_MOVIE) {
				m_bACPlug = TRUE;
				Ux_PostEvent(NVTEVT_AC_Plug, 0, 0);
			}
		}
		m_bVendorConnected = FALSE;
	} else {
#if (MSDCVENDOR_NVT == ENABLE)
		MSDCNVTCB_OPEN Open = {0};
#if defined(_BSP_NA51000_)
		int_setConfig(INT_CONFIG_ID_USB3_GIC_DESTINATION, CC_CORE_CA53_CORE1);
#endif
		Open.fpUSBMakerInit = USBMakerInit_UMSD;
		MsdcNvtCb_Open(&Open);
		m_bVendorConnected = TRUE;
#endif
	}
#elif (IPCAM_UVC_FUNC==ENABLE)
	//do nothing
#else
	{
#if (MSDCVENDOR_NVT == ENABLE)
		MSDCNVTCB_OPEN Open = {0};
#if defined(_BSP_NA51000_)
		int_setConfig(INT_CONFIG_ID_USB3_GIC_DESTINATION, CC_CORE_CA53_CORE1);
#endif
		Open.fpUSBMakerInit = NULL;
		MsdcNvtCb_Open(&Open);
#endif
	}
#endif
	DBG_IND("USB plug - end\r\n");
	return NVTEVT_CONSUME;
}

INT32 System_OnUsbRemove(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	//usb unplug

	DBG_IND("USB unplug - begin\r\n");
	debug_msg("ACC is remove!!!!!!!! \r\n");
	ACIsPlug = FALSE;
#if (USB_MODE==ENABLE)

	if (m_bVendorConnected == FALSE) {
		if (System_GetState(SYS_STATE_CURRMODE) == PRIMARY_MODE_MOVIE) {
			if (m_bACPlug == TRUE) {
				m_bACPlug = FALSE;
				Ux_PostEvent(NVTEVT_AC_UnPlug, 0, 0);
			}
		}
		FlowMode_OnUsbUnplug();
	} else {
#if (MSDCVENDOR_NVT == ENABLE)
		MsdcNvtCb_Close();
		#if (LINUX_MSDC == ENABLE)
		int_setConfig(INT_CONFIG_ID_USB3_GIC_DESTINATION, CC_CORE_CA53_CORE2);
		#endif
#endif
		m_bVendorConnected = FALSE;
	}
#elif (IPCAM_UVC_FUNC==ENABLE)
	//do nothing
#else
	{
#if (MSDCVENDOR_NVT == ENABLE)
		MsdcNvtCb_Close();
		#if (LINUX_MSDC == ENABLE)
		int_setConfig(INT_CONFIG_ID_USB3_GIC_DESTINATION, CC_CORE_CA53_CORE2);
		#endif
#endif
	}
#endif
	USB_UpdateSource();
	Ux_PostEvent(NVTEVT_BATTERY, 0, 0);
	DBG_IND("USB unplug - end\r\n");
	return NVTEVT_CONSUME;
}

INT32 System_OnUsbChargeCurrent(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	UINT32 uiChargeCurrent;
	DBG_IND("USB charging current(%d)\r\n", paramArray[0]);
	uiChargeCurrent = paramArray[0];
	switch (uiChargeCurrent) {
	case USB_CHARGE_CURRENT_2P5MA:
#if (USB_CHARGE_FUNCTION == ENABLE)
		Power_StopUSBCharge();
#endif
		break;
	case USB_CHARGE_CURRENT_100MA:
		break;
	case USB_CHARGE_CURRENT_500MA:
	case USB_CHARGE_CURRENT_1500MA:
#if (USB_CHARGE_FUNCTION == ENABLE)
		Power_StartUSBCharge();
#endif
		break;
	default:
		break;
	}

	return NVTEVT_CONSUME;
}

void USB_PlugInSetFunc(void)
{
	GxPower_SetControl(GXPWR_CTRL_AUTOPOWEROFF_RESET, 0);
	GxPower_SetControl(GXPWR_CTRL_SLEEP_RESET, 0);
	SxTimer_SetFuncActive(SX_TIMER_DET_SLEEP_ID, FALSE);
	SxTimer_SetFuncActive(SX_TIMER_DET_AUTOPOWEROFF_ID, FALSE);
	SxTimer_SetFuncActive(SX_TIMER_DET_MODE_ID, FALSE);
}

void USB_SetForceMsdcNvt(BOOL bEn)
{
	m_bForceMsdcNvt = bEn;
}

BOOL USB_GetIsMsdcNvt(void)
{
	//#NT#2016/06/03#Niven Cho -begin
	//#NT#open MsdcNvt with detecting specific file
#if defined(MSDCVENDOR_IDENTITY_FILE)
	BOOL bMsdcNvt = FALSE;
	if (System_GetState(SYS_STATE_CARD)  == CARD_INSERTED) {
		FST_FILE filehdl = FileSys_OpenFile(MSDCVENDOR_IDENTITY_FILE, FST_OPEN_READ);
		if (filehdl != NULL) {
			FileSys_CloseFile(filehdl);
			bMsdcNvt = TRUE;
		}
	}
	return (m_bForceMsdcNvt || GxKey_GetData(GXKEY_NORMAL_KEY) == FLGKEY_DOWN || bMsdcNvt);
#else
	return (m_bForceMsdcNvt || GxKey_GetData(GXKEY_NORMAL_KEY) == FLGKEY_DOWN);
#endif
	//#NT#2016/06/03#Niven Cho -end
}

#endif
