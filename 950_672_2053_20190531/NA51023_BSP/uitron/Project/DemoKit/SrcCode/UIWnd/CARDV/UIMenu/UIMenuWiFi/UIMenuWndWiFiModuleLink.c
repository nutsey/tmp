//This source code is generated by UI Designer Studio.
#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "NVTToolCommand.h"
#include "UIMenuWndWiFiModuleLinkRes.c"
#include "UIFlow.h"
#include "UIAppNetwork.h"
//#include "ImageApp_NetMovie.h"
#include "WifiAppCmd.h"
#include "UIFlowWndWiFiMovie.h"
#include "UIFlowMovieIcons.h"
//#include "UIAppWiFiCmdMovie.h"


//---------------------UIMenuWndWiFiModuleLinkCtrl Debug Definition -----------------------------
#define _UIMENUWNDWIFIMODULELINK_ERROR_MSG        1
#define _UIMENUWNDWIFIMODULELINK_TRACE_MSG        0

#if (_UIMENUWNDWIFIMODULELINK_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIMenuWndWiFiModuleLinkErrMsg(...)            debug_msg ("^R UIMenuWndWiFiModuleLink: "__VA_ARGS__)
#else
#define UIMenuWndWiFiModuleLinkErrMsg(...)
#endif

#if (_UIMENUWNDWIFIMODULELINK_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIMenuWndWiFiModuleLinkTraceMsg(...)          debug_msg ("^B UIMenuWndWiFiModuleLink: "__VA_ARGS__)
#else
#define UIMenuWndWiFiModuleLinkTraceMsg(...)
#endif

extern void FlowMovieWifi_IconDrawRecTime(VControl *pCtrl);


//---------------------UIMenuWndWiFiModuleLinkCtrl Global Variables -----------------------------
//---------------------UIMenuWndWiFiModuleLinkCtrl Prototype Declaration  -----------------------

//---------------------UIMenuWndWiFiModuleLinkCtrl Public API  ----------------------------------

//---------------------UIMenuWndWiFiModuleLinkCtrl Private API  ---------------------------------
void UIMenuWndWiFiModuleLink_UpdateData(void);

//---------------------UIMenuWndWiFiModuleLinkCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndWiFiModuleLink)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_StaticICN_WiFi)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_StatusTXT_WiFiMode)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_StaticTXT_SSID)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_StaticTXT_Key)
CTRL_LIST_ITEM(UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff)

CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_StaticIcon_PIMC)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_Panel)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_Static_time)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_Static_maxtime)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_Status_LOCK)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_YMD_Static)
CTRL_LIST_ITEM(UIMenuWndWiFiModuleLink_HMS_Static)

CTRL_LIST_END

//----------------------UIMenuWndWiFiModuleLinkCtrl Event---------------------------
INT32 UIMenuWndWiFiModuleLink_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnChildClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnBattery(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnTimer(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnMovieFull(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnMovieWrError(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnStorageSlow(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnWiFiState(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnStorageInit(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnStorageChange(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiMobileLink_OnMovieOneSec(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModuleLink_OnKeyEnter(VControl *, UINT32, UINT32 *);

EVENT_BEGIN(UIMenuWndWiFiModuleLink)
EVENT_ITEM(NVTEVT_OPEN_WINDOW, UIMenuWndWiFiModuleLink_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW, UIMenuWndWiFiModuleLink_OnClose)
EVENT_ITEM(NVTEVT_CHILD_CLOSE, UIMenuWndWiFiModuleLink_OnChildClose)
EVENT_ITEM(NVTEVT_BATTERY, UIMenuWndWiFiModuleLink_OnBattery)
EVENT_ITEM(NVTEVT_TIMER, UIMenuWndWiFiModuleLink_OnTimer)
EVENT_ITEM(NVTEVT_CB_MOVIE_OVERTIME, UIMenuWndWiFiModuleLink_OnMovieFull) // the same handling as storage full (may need to show special message)
EVENT_ITEM(NVTEVT_CB_MOVIE_FULL, UIMenuWndWiFiModuleLink_OnMovieFull)
EVENT_ITEM(NVTEVT_CB_MOVIE_LOOPREC_FULL, UIMenuWndWiFiModuleLink_OnMovieFull)
EVENT_ITEM(NVTEVT_CB_MOVIE_WR_ERROR, UIMenuWndWiFiModuleLink_OnMovieWrError)
EVENT_ITEM(NVTEVT_CB_MOVIE_SLOW, UIMenuWndWiFiModuleLink_OnStorageSlow)
EVENT_ITEM(NVTEVT_WIFI_STATE, UIMenuWndWiFiModuleLink_OnWiFiState)
EVENT_ITEM(NVTEVT_STORAGE_INIT, UIMenuWndWiFiModuleLink_OnStorageInit)
EVENT_ITEM(NVTEVT_STORAGE_CHANGE, UIMenuWndWiFiModuleLink_OnStorageChange)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIMenuWndWiFiModuleLink_OnKeyEnter)
EVENT_ITEM(NVTEVT_CB_MOVIE_REC_ONE_SEC,UIMenuWndWiFiMobileLink_OnMovieOneSec)
EVENT_END
static UINT32  gUIMenuWndWiFiDataTimerID = NULL_TIMER;
extern void LED_RED_TurnOn(void);
extern void LED_RED_TurnOff(void);
extern void LED_BLUE_TurnOn(void);
extern void LED_BLUE_TurnOff(void);
INT32 UIMenuWndWiFiMobileLink_OnMovieOneSec(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{

	FlowMovie_Icon_WIFILink_DrawDateTime();//update datetime
	if (System_GetState(SYS_STATE_CARD)  != CARD_REMOVED)
	{
		if (WiFiCmd_GetStatus()==WIFI_MOV_ST_RECORD && paramNum)
		{
			UxCtrl_SetShow(&UIMenuWndWiFiModuleLink_PanelCtrl,!UxCtrl_IsShow(&UIMenuWndWiFiModuleLink_PanelCtrl));
			FlowMovieWifi_IconHideMaxRecTime(&UIMenuWndWiFiModuleLink_Static_maxtimeCtrl);
			FlowMovieWifi_IconDrawRecTime(&UIMenuWndWiFiModuleLink_Static_timeCtrl);
		}
		else
		{

			UxCtrl_SetShow(&UIMenuWndWiFiModuleLink_PanelCtrl,0);
			FlowMovieWifi_IconDrawMaxRecTime(&UIMenuWndWiFiModuleLink_Static_maxtimeCtrl);
		}
		if (UxCtrl_IsShow(&UIMenuWndWiFiModuleLink_StaticIcon_PIMCCtrl))
		{
		FlowMovie_Icon_WIFILink_DrawPIM(FALSE);
		}
	return WiFiCmd_OnMovieOneSec(pCtrl, paramNum, paramArray);
  }
   return NVTEVT_CONSUME;
}

INT32 UIMenuWndWiFiModuleLink_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
	{
		UINT32 uiNotifyAPPStatus = 0;
		UINT32 result = WIFIAPP_RET_OK;
		UINT32 curStatus = 0;
	UINT32  uiKeyAct;

	uiKeyAct = paramArray[0];
    CHKPNT;
	switch (uiKeyAct)
        {
	case NVTEVT_KEY_PRESS:
		if (System_GetState(SYS_STATE_CURRMODE) != PRIMARY_MODE_MOVIE)
		{
			WifiCmd_Done(WIFIFLAG_RECORD_DONE,WIFIAPP_RET_STATE_ERR);
			//UIFlowWndWiFiMovieErrMsg("not movie mode\r\n");
			return NVTEVT_CONSUME;
		}
		if (!GxStrg_GetDeviceCtrl(0, CARD_INSERT)) // card insert
		{
            UISound_Play(DEMOSOUND_SOUND_CHECK_CARD_TONE);
			Ux_OpenWindow(&UIFlowWndWrnMsgCtrl,2,UIFlowWndWrnMsg_StatusTXT_Msg_STRID_PLEASE_INSERT_SD,FLOWWRNMSG_TIMER_2SEC);
			return NVTEVT_CONSUME;
		}

		curStatus = WiFiCmd_GetStatus();


		if (curStatus == WIFI_MOV_ST_LVIEW)
		{
			UINT32 MaxTime = MovieExe_GetFreeRecSec();
			if((MaxTime<=3) && (SysGetFlag(FL_MOVIE_CYCLIC_REC) == MOVIE_CYCLICREC_OFF))
			{
                UISound_Play(DEMOSOUND_SOUND_CARD_FULL_TONE);
				result = WIFIAPP_RET_STORAGE_FULL;
				//UIFlowWndWiFiMovieErrMsg("recTime<3 sec\r\n");
			}
			else
			{
				// Reset Current record time
				FlowMovie_SetRecCurrTime(0);

				// Send socket to notify APP movie recording is started.
				if(uiNotifyAPPStatus)
				{
					WifiApp_SendCmd(WIFIAPP_CMD_NOTIFY_STATUS, WIFIAPP_RET_RECORD_STARTED);
				}
				else
				{
                    UISound_Play(DEMOSOUND_SOUND_REC_TONE);
			        //UISound_Play(DEMOSOUND_SOUND_RECORDING_TONE);
					FlowWiFiMovie_StartRec();
					debug_msg("================ UIMenuWndWiFiModuleLink   start REC!!!!! =================\r\n");

					// start USB detect timer again
					SxTimer_SetFuncActive(SX_TIMER_DET_USB_ID, TRUE);
				}
			}
		}
		else if(curStatus == WIFI_MOV_ST_IDLE)
		{
			result = WIFIAPP_RET_FAIL;
			//UIFlowWndWiFiMovieErrMsg("idle state,cannot record\r\n");
		}
		else
		{
			debug_msg("=================== startRec == FALSE!!!!!! =====================");
			UINT32 recordTime = FlowMovie_GetRecCurrTime();
			if ((curStatus == WIFI_MOV_ST_RECORD) && ((recordTime >= 2) || (SysGetFlag(FL_MOVIE_TIMELAPSE_REC) != MOVIE_TIMELAPSEREC_OFF)))
			{	UISound_Play(DEMOSOUND_SOUND_STOP_TONE);

				FlowWiFiMovie_StopRec();
                LED_BLUE_TurnOn();
				//hide lock icon
				//FlowMovie_IconDrawLock(&UIFlowWndMovie_Status_LOCKCtrl, FALSE);
				//FlowMovie_IconDrawLock(&UIMenuWndWiFiModuleLink_Status_LOCKCtrl, FALSE);
				UxCtrl_SetShow(&UIMenuWndWiFiModuleLink_PanelCtrl,0);

				// Notify Maximum Record Time
				UI_SetData(FL_WIFI_MOVIE_MAXRECTIME, MovieExe_GetMaxRecSec());
			}
			else if ((curStatus == WIFI_MOV_ST_RECORD) &&(recordTime < 1))
			{
				result = WIFIAPP_RET_FAIL;
				//UIFlowWndWiFiMovieErrMsg("recTime<1 sec %d sts %d\r\n",recordTime,UIFlowWndWiFiMovie_GetStatus());
			}
			else if(curStatus == WIFI_MOV_ST_IDLE)
			{
				result = WIFIAPP_RET_FAIL;
				//UIFlowWndWiFiMovieErrMsg("idle state,cannot stop\r\n");
			}
			FlowMovie_IconHideMaxRecTime(&UIMenuWndWiFiModuleLink_Static_timeCtrl);
				FlowMovieWifi_IconDrawMaxRecTime(&UIMenuWndWiFiModuleLink_Static_maxtimeCtrl);
			 debug_err(("====UIFlowWndWiFiMovie_STOPREC============\r\n"));
		}
		// Notify Done
		//RTSP start OK should wait video read,so not return done
		//HTTP return done directly

#if 0
		if(!((ImageApp_NetMovie_GetConfig(NETMOVIE_CFG_MODE)==NETMOVIE_TYPE_RTSP)
			&&(result==WIFIAPP_RET_OK)))
#endif
		{
			WifiCmd_Done(WIFIFLAG_RECORD_DONE,result);
		}
        }

		return NVTEVT_CONSUME;
	}

void UIMenuWndWiFiModuleLink_UpdateData(void)
{
	static char buf1[32], buf2[32];
	char *pMacAddr;
	UIMenuStoreInfo *ptMenuStoreInfo = UI_GetMenuInfo();

	if (UI_GetData(FL_WIFI_LINK) == WIFI_LINK_OK) {
		if (UI_GetData(FL_NetWorkMode) == NET_AP_MODE || UI_GetData(FL_NetWorkMode) == NET_WPS_AP_PBC_MODE || UI_GetData(FL_NetWorkMode) == NET_STATION_MODE) {
			if (ptMenuStoreInfo->strSSID[0] == 0) {
#if (MAC_APPEN_SSID==ENABLE)
				pMacAddr = (char *)UINet_GetMAC();
				snprintf(buf1, sizeof(buf1), "SSID:%s%02x%02x", UINet_GetSSID(), pMacAddr[4], pMacAddr[5]);
#else
CHKPNT;
				snprintf(buf1, sizeof(buf1), "SSID:%s", UINet_GetSSID());
#endif
			} else {
				snprintf(buf1, sizeof(buf1), "SSID:%s", UINet_GetSSID());
			}


			snprintf(buf2, sizeof(buf2), "PWA2:%s", UINet_GetPASSPHRASE());
			UxStatic_SetData(&UIMenuWndWiFiModuleLink_StaticTXT_SSIDCtrl, STATIC_VALUE, Txt_Pointer(buf1));
			UxStatic_SetData(&UIMenuWndWiFiModuleLink_StaticTXT_KeyCtrl, STATIC_VALUE, Txt_Pointer(buf2));
		}
	} else {
		snprintf(buf1, sizeof(buf1), "%s:Fail", "Conntecting");
		UxStatic_SetData(&UIMenuWndWiFiModuleLink_StaticTXT_SSIDCtrl, STATIC_VALUE, Txt_Pointer(buf1));
		UxStatic_SetData(&UIMenuWndWiFiModuleLink_StaticTXT_KeyCtrl, STATIC_VALUE, STRID_NULL);
	}
}
extern BOOL IsWifiOpen;
BOOL OpenSSID = FALSE;
extern BOOL First_Vedio_Rec;

INT32 UIMenuWndWiFiModuleLink_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	First_Vedio_Rec = TRUE;
    UIMenuWndWiFiModuleLink_UpdateData();
	UxCtrl_SetShow(&UIMenuWndWiFiModuleLink_PanelCtrl,0);
	FlowMovieWifi_IconDrawMaxRecTime(&UIMenuWndWiFiModuleLink_Static_maxtimeCtrl);
	if (UxCtrl_IsShow(&UIMenuWndWiFiModuleLink_StaticIcon_PIMCCtrl))
	FlowMovie_Icon_WIFILink_DrawPIM(FALSE);

    //after enter link wnd ,set wifi sub mode,avoid wifi on change normal movie mode
	System_ChangeSubMode(SYS_SUBMODE_WIFI);
	UIMenuWndWiFiModuleLink_UpdateData();
	UxTab_SetData(&UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOffCtrl, TAB_FOCUS, 0);
	Ux_DefaultEvent(pCtrl, NVTEVT_OPEN_WINDOW, paramNum, paramArray);
#if defined(_NVT_ETHERNET_EQOS_) || defined(_CPU2_LINUX_)
	//#NT#2016/03/17#YongChang Qui -begin
	//#NT#This flow was for testing purpose and should be removed once cardv linux is added
#if (NETWORK_4G_MODULE == ENABLE)
	Ux_PostEvent(NVTEVT_WIFI_AUTHORIZED_OK, 1, 0);
#endif
	//#NT#2016/03/17#YongChang Qui -end
#endif
	IsWifiOpen = TRUE;
	//auto rec
    if(System_GetState(SYS_STATE_POWERON) == SYSTEM_POWERON_SAFE)
    {

        if(UIStorageCheck(STORAGE_CHECK_ERROR, NULL) == TRUE)
        {
            debug_msg("******STORAGE_CHECK_ERROR in LINK\r\n" );
			UISound_Play(DEMOSOUND_SOUND_CHECK_CARD_TONE);
           //Ux_OpenWindow(&UIFlowWndWrnMsgCtrl,2,UIFlowWndWrnMsg_StatusTXT_Msg_STRID_PLEASE_INSERT_SD, FLOWWRNMSG_TIMER_KEEP);
        }
    }

	if (gUIMenuWndWiFiDataTimerID==NULL_TIMER)
    {
         gUIMenuWndWiFiDataTimerID= GxTimer_StartTimer(TIMER_ONE_SEC, NVTEVT_01SEC_TIMER, CONTINUE);
    }

	OpenSSID = TRUE;

	LED_BLUE_TurnOn();
	LED_RED_TurnOff();
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndWiFiModuleLink_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	Ux_DefaultEvent(pCtrl, NVTEVT_CLOSE_WINDOW, paramNum, paramArray);
	IsWifiOpen = FALSE;
        if (gUIMenuWndWiFiDataTimerID != NULL_TIMER)
    {
        CHKPNT;
        GxTimer_StopTimer(&gUIMenuWndWiFiDataTimerID);
    }

	return NVTEVT_CONSUME;
}
INT32 UIMenuWndWiFiModuleLink_OnChildClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	UIMenuWndWiFiModuleLink_UpdateData();
	Ux_DefaultEvent(pCtrl, NVTEVT_CHILD_CLOSE, paramNum, paramArray);
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndWiFiModuleLink_OnBattery(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndWiFiModuleLink_OnTimer(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	UINT32  uiEvent;

    uiEvent = paramNum ? paramArray[0] : 0;

    switch(uiEvent)
    {
    case NVTEVT_01SEC_TIMER:
		FlowMovie_OnTimer1SecIndex();

    }
    Ux_DefaultEvent(pCtrl,NVTEVT_TIMER,paramNum,paramArray);
    return NVTEVT_CONSUME;
}

INT32 UIMenuWndWiFiModuleLink_OnWiFiState(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	if (paramNum == 2) {
		if (UI_GetData(FL_NetWorkMode) == NET_AP_MODE || UI_GetData(FL_NetWorkMode) == NET_WPS_AP_PBC_MODE) {
			UIMenuWndWiFiModuleLinkTraceMsg("ap  state %d result %d\r\n", paramArray[0], paramArray[1]);
			UINT32 state = paramArray[0];
			INT32 result = paramArray[1];
			// wifi phase status
			if (state == NET_STATE_WIFI_CB) {
				if (result == NVT_WIFI_AP_READY) {
					UIMenuWndWiFiModuleLinkTraceMsg("ap mode OK\r\n");
				} else { //if(result == NVT_WIFI_STA_STATUS_PORT_AUTHORIZED)
					UIMenuWndWiFiModuleLinkTraceMsg("ap state %d result %d\r\n", paramArray[0], paramArray[1]);
				}

			}
		} else { // station mode
			UIMenuWndWiFiModuleLinkTraceMsg("sta  state %d result %d\r\n", paramArray[0], paramArray[1]);
			UINT32 state = paramArray[0];
			INT32 result = paramArray[1];

			if (state == NET_STATE_DHCP_START) {
				if (result == 0) {
					UIMenuWndWiFiModuleLinkTraceMsg("station mode OK\r\n");
				} else {
					UIMenuWndWiFiModuleLinkTraceMsg("DHCP fail or wifi module failed\r\n");
				}
			} else if (state == NET_STATE_WIFI_CB) {
				if (result == NVT_WIFI_LINK_STATUS_CONNECTED) {

				} else {

				}
			} else if (state == NET_STATE_WIFI_CONNECTING) {
				if (result == NET_CONNECTING_TIMEOUT) {
					UIMenuWndWiFiModuleLinkTraceMsg("wifi module failed\r\n");
				}
			}
		}
	} else {
		UIMenuWndWiFiModuleLinkErrMsg("err paramNum %d\r\n", paramNum);
	}
	return NVTEVT_CONSUME;
}

INT32 UIMenuWndWiFiModuleLink_OnStorageInit(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
#if (SDHOTPLUG_FUNCTION == ENABLE)
	if (UIStorageCheck(STORAGE_CHECK_ERROR, NULL) == TRUE) {
		UIMenuWndWiFiModuleLinkErrMsg("card err,removed\r\n");
	}
    else{
		UISound_Play(DEMOSOUND_SOUND_CHECK_CARD_TONE);
		UIMenuWndWiFiModuleLinkErrMsg("card insert\r\n");
	}
#endif
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndWiFiModuleLink_OnStorageChange(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
#if (SDHOTPLUG_FUNCTION == ENABLE)
	UIMenuWndWiFiModuleLinkErrMsg("card remove\r\n");
#endif
	return NVTEVT_CONSUME;
}


//----------------------UIMenuWndWiFiModuleLink_StaticICN_WiFiCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_StaticICN_WiFi)
EVENT_END

//----------------------UIMenuWndWiFiModuleLink_StatusTXT_WiFiModeCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_StatusTXT_WiFiMode)
EVENT_END

//----------------------UIMenuWndWiFiModuleLink_StaticTXT_SSIDCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_StaticTXT_SSID)
EVENT_END

//----------------------UIMenuWndWiFiModuleLink_StaticTXT_KeyCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_StaticTXT_Key)
EVENT_END
	//---------------------UIFlowWndMovie_PanelCtrl Control List---------------------------
	CTRL_LIST_BEGIN(UIMenuWndWiFiModuleLink_Panel)
	CTRL_LIST_END
//----------------------UIFlowWndMovie_PanelCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_Panel)
EVENT_END
//----------------------UIFlowWndMovie_Static_timeCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_Static_time)
EVENT_END

//----------------------UIFlowWndMovie_Static_maxtimeCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_Static_maxtime)
EVENT_END

//----------------------UIFlowWndMovie_Status_LOCKCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_Status_LOCK)//UIMenuWndWiFiModuleLink_Status_LOCK
EVENT_END

//----------------------UIFlowWndMovie_Static_timeCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_YMD_Static)
EVENT_END

//----------------------UIFlowWndMovie_Static_timeCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndWiFiModuleLink_HMS_Static)
EVENT_END



//----------------------UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOffCtrl Event---------------------------
INT32 UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_OnKeyRight(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_OnKeyEnter(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModeLink_Tab_Authorized_OK(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModeLink_Tab_REC_RAWENC(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndWiFiModeLink_Tab_MENU(VControl *, UINT32, UINT32 *);

EVENT_BEGIN(UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff)
//EVENT_ITEM(NVTEVT_KEY_DOWN, UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_OnKeyRight)//950-down
//EVENT_ITEM(NVTEVT_KEY_MENU, UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_OnKeyEnter)//950-enter
EVENT_ITEM(NVTEVT_WIFI_AUTHORIZED_OK, UIMenuWndWiFiModeLink_Tab_Authorized_OK)
EVENT_ITEM(NVTEVT_KEY_SELECT, UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_OnKeyEnter)
EVENT_ITEM(NVTEVT_KEY_DOWN, UIMenuWndWiFiModeLink_Tab_REC_RAWENC)
EVENT_ITEM(NVTEVT_KEY_MENU, UIMenuWndWiFiModeLink_Tab_MENU)
EVENT_END


INT32 UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_OnKeyRight(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	UINT32  uiKeyAct;
	uiKeyAct = paramArray[0];
	switch (uiKeyAct) {
	case NVTEVT_KEY_PRESS:
		Ux_SendEvent(pCtrl, NVTEVT_NEXT_ITEM, 0);
		Delay_DelayMs(100 );
		Ux_PostEvent(NVTEVT_KEY_MENU, 1, NVTEVT_KEY_PRESS);
		break;
	}

	return NVTEVT_CONSUME;
}

INT32 UIMenuWndWiFiModeLink_Tab_REC_RAWENC(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    UINT32  uiKeyAct;
	UINT32 curStatus = 0;
	curStatus = WiFiCmd_GetStatus();
    uiKeyAct = paramArray[0];
    switch (uiKeyAct)
    {
      case NVTEVT_KEY_PRESS:

        if(curStatus == WIFI_MOV_ST_RECORD)
        {
			if (SysGetFlag(FL_MOVIE_PIM) == MOVIE_PIM_ON) {
				//FlowMovie_DrawPIM(TRUE);
				Ux_SendEvent(&CustomMovieObjCtrl, NVTEVT_EXE_MOVIE_REC_RAWENC, 0);
               // UISound_Play(DEMOSOUND_SOUND_SHUTTER_TONE);
			}
		}
		else{
            /*
                if (gUIMenuWndWiFiDataTimerID != NULL_TIMER)
    			{
    			    GxTimer_StopTimer(&gUIMenuWndWiFiDataTimerID);
    			}

    			if (WiFiCmd_GetStatus()==WIFI_MOV_ST_LVIEW)
    			{
    			    // Set Tab menu to Movie menu
    			    TM_SetMenu(&gMovieMenu);
    			    // Open common mix (Item + Option) menu
    			    Ux_OpenWindow((VControl *)(&MenuCommonItemCtrl), 0);
    			   //gMovData.State = MOV_ST_MENU;
    			}
			*/
		}
    }
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndWiFiModeLink_Tab_MENU(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    UINT32  uiKeyAct;
	UINT32 curStatus = 0;
	curStatus = WiFiCmd_GetStatus();
    uiKeyAct = paramArray[0];
    switch (uiKeyAct)
    {
      case NVTEVT_KEY_PRESS:

        if (gUIMenuWndWiFiDataTimerID != NULL_TIMER)
		{
		    GxTimer_StopTimer(&gUIMenuWndWiFiDataTimerID);
		}

		if (WiFiCmd_GetStatus()==WIFI_MOV_ST_LVIEW)
		{
		    // Set Tab menu to Movie menu
		    TM_SetMenu(&gMovieMenu);
		    // Open common mix (Item + Option) menu
		    Ux_OpenWindow((VControl *)(&MenuCommonItemCtrl), 0);
		   //gMovData.State = MOV_ST_MENU;
		}
    }
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	UINT32  uiKeyAct;

	uiKeyAct = paramArray[0];
	switch (uiKeyAct) {
	case NVTEVT_KEY_PRESS:
		switch (UxTab_GetData(&UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOffCtrl, TAB_FOCUS)) {
		case UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_Button_Refresh:
			break;
		case UIMenuWndWiFiModeLink_Tab_RefreshAndWiFiOff_Button_WiFiOff:
			if (UI_GetData(FL_WIFI_LINK) == WIFI_LINK_OK) {
			//#NT#2016/03/08#Niven Cho -begin
			//#NT#because it is long time closing the linux-wifi, we don't change mode to movie video ahead.
			//#NT#use Ux_SendEvent(0,NVTEVT_EXE_WIFI_STOP, 0),not post event
#if (WIFI_FUNC == ENABLE)
				INT32 curMode = System_GetState(SYS_STATE_CURRMODE);
				if ( curMode!= PRIMARY_MODE_MOVIE) {
			    	Ux_SendEvent(0,NVTEVT_EXE_WIFI_STOP, 0);
					Ux_CloseWindow(&UIFlowWndMovieCtrl,0);
			    	Ux_PostEvent(NVTEVT_SYSTEM_MODE, 2, curMode,SYS_SUBMODE_NORMAL);
				} else {
					VControl *pWnd =0 ;
					Ux_GetWindowByIndex(&pWnd, 1);

					Ux_SendEvent(0,NVTEVT_EXE_WIFI_STOP, 0);
					System_ChangeSubMode(SYS_SUBMODE_NORMAL);
					Ux_CloseWindow(pWnd, 0);
                    LED_BLUE_TurnOff();
	       	     LED_RED_TurnOn();
				}
#endif
			//#NT#2016/03/08#Niven Cho -end
				//#NT#2016/03/08#Niven Cho -end
			} else {
			     LED_BLUE_TurnOff();
	       	     LED_RED_TurnOn();
				Ux_CloseWindow(&UIMenuWndWiFiModuleLinkCtrl, 0);
			}
				UISound_Play(DEMOSOUND_SOUND_WIFI_OFF_TONE);

			break;
		}
		break;
	}

	return NVTEVT_CONSUME;
}

INT32 UIMenuWndWiFiModeLink_Tab_Authorized_OK(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	Ux_OpenWindow(&UIMenuWndWiFiMobileLinkOKCtrl, 0);

	return NVTEVT_CONSUME;
}

//----------------------Button_RefreshCtrl Event---------------------------
EVENT_BEGIN(Button_Refresh)
EVENT_END

//----------------------Button_WiFiOffCtrl Event---------------------------
EVENT_BEGIN(Button_WiFiOff)
EVENT_END
EVENT_BEGIN(UIMenuWndWiFiModuleLink_StaticIcon_PIMC)//xiao160927
EVENT_END

INT32 UIMenuWndWiFiModuleLink_OnMovieFull(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	return WiFiCmd_OnMovieFull(pCtrl, paramNum, paramArray);
}
INT32 UIMenuWndWiFiModuleLink_OnMovieWrError(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	return WiFiCmd_OnMovieWrError(pCtrl, paramNum, paramArray);
}
INT32 UIMenuWndWiFiModuleLink_OnStorageSlow(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	return WiFiCmd_OnStorageSlow(pCtrl, paramNum, paramArray);
}

