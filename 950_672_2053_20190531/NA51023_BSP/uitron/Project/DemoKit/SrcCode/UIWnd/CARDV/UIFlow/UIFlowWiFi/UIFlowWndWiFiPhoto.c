//This source code is generated by UI Designer Studio.
#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIFlowWndWiFiPhotoRes.c"
#include "UIFlowWndWiFiPhoto.h"
#include "UIFlowPhotoFuncs.h"
#include "SysCommon.h"
#include "AppCommon.h"
#include "PrjCfg.h"
#include "WifiAppCmd.h"
//#include "UIInfoData.h"
#include "UIAppPhoto.h"
#include "UIDisplay.h"
#include "UIFlow.h"
//---------------------UIFlowWndWiFiPhotoCtrl Debug Definition -----------------------------
#define _UIFLOWWNDWIFIPHOTO_ERROR_MSG        1
#define _UIFLOWWNDWIFIPHOTO_TRACE_MSG        0

#if (_UIFLOWWNDWIFIPHOTO_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIFlowWndWiFiPhotoErrMsg(...)            debug_msg ("^R UIFlowWndWiFiPhoto: "__VA_ARGS__)
#else
#define UIFlowWndWiFiPhotoErrMsg(...)
#endif

#if (_UIFLOWWNDWIFIPHOTO_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIFlowWndWiFiPhotoTraceMsg(...)          debug_msg ("^B UIFlowWndWiFiPhoto: "__VA_ARGS__)
#else
#define UIFlowWndWiFiPhotoTraceMsg(...)
#endif

//---------------------UIFlowWndWiFiPhotoCtrl Global Variables -----------------------------

//---------------------UIFlowWndWiFiPhotoCtrl Prototype Declaration  -----------------------

//---------------------UIFlowWndWiFiPhotoCtrl Public API  ----------------------------------

//---------------------UIFlowWndWiFiPhotoCtrl Private API  ---------------------------------

//---------------------UIFlowWndWiFiPhotoCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIFlowWndWiFiPhoto)
CTRL_LIST_END

//----------------------UIFlowWndWiFiPhotoCtrl Event---------------------------
INT32 UIFlowWndWiFiPhoto_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWiFiPhoto_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWiFiPhoto_OnExePhotoCapture(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWiFiPhoto_OnUpdateInfo(VControl *, UINT32, UINT32 *);
INT32 UIFlowWndWiFiPhoto_OnExeSetPhotoSize(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIFlowWndWiFiPhoto)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIFlowWndWiFiPhoto_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIFlowWndWiFiPhoto_OnClose)
EVENT_ITEM(NVTEVT_WIFI_EXE_PHOTO_CAPTURE,UIFlowWndWiFiPhoto_OnExePhotoCapture)
EVENT_ITEM(NVTEVT_UPDATE_INFO,UIFlowWndWiFiPhoto_OnUpdateInfo)
EVENT_ITEM(NVTEVT_WIFI_EXE_PHOTO_SIZE,UIFlowWndWiFiPhoto_OnExeSetPhotoSize)
EVENT_END

INT32 UIFlowWndWiFiPhoto_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWiFiPhoto_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWiFiPhoto_OnExePhotoCapture(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    if (System_GetState(SYS_STATE_CURRMODE) != PRIMARY_MODE_PHOTO)
    {

        WifiCmd_Done(WIFIFLAG_CAPTURE_DONE,WIFIAPP_RET_FAIL);

        return NVTEVT_CONSUME;
    }
    FlowPhoto_DoCapture();

    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWiFiPhoto_OnUpdateInfo(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    switch (pPhotoExeInfo->CallBackEvent)
    {
    case UIAPPPHOTO_CB_QVSTART:
        //UIFlowWndPhoto_OnQVStart();
        break;

    case UIAPPPHOTO_CB_JPGOK:
        break;

    case UIAPPPHOTO_CB_FSTOK:
        {
            #if(WIFI_AP_FUNC==ENABLE)
            // Notify Photo capture OK
            SysCmdWifi_CmdSend(WIFI_CMDSEND_NOTIFY_STATUS, WIFI_DV_STA_OK);

            // Notify Free Picutre Number
            UI_SetData(FL_WIFI_PHOTO_FREEPICNUM, PhotoExe_GetFreePicNum());
            SysCmdWifi_CmdSend(WIFI_CMDSEND_NOTIFY_FREPICNUM, UI_GetData(FL_WIFI_PHOTO_FREEPICNUM));
            #endif
        }
        break;

    case UIAPPPHOTO_CB_CAPTUREEND:
        // Enable preview after capture ending.
        {
            /* set FD/SD feature */
            FlowPhoto_SetFdSdProc(FALSE);

            /* Set to preview mode */
            UI_Show(UI_SHOW_PREVIEW, TRUE);

            /* close quick view image */
            UI_Show(UI_SHOW_QUICKVIEW, FALSE);

            Ux_FlushEventByRange(NVTEVT_KEY_EVT_START,NVTEVT_KEY_EVT_END);
        }

        // unlock AE/AWB
        Ux_SendEvent(&CustomPhotoObjCtrl, NVTEVT_EXE_START_FUNC, 2, UIAPP_PHOTO_AE|UIAPP_PHOTO_AWB, UIAPP_PHOTO_NOWAITIDLE);
        break;

    case UIAPPPHOTO_CB_FDEND:
        break;

    case UIAPPPHOTO_CB_SDEND:
        break;
    }

    return NVTEVT_CONSUME;
}
INT32 UIFlowWndWiFiPhoto_OnExeSetPhotoSize(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    UINT32 Data;

    Data = paramNum ? paramArray[0] : 0;

    if (System_GetState(SYS_STATE_CURRMODE) != PRIMARY_MODE_PHOTO)
    {
        //only set photo size
        Ux_SendEvent(&CustomPhotoObjCtrl,NVTEVT_EXE_CAPTURE_SIZE, 1, Data);
        return NVTEVT_CONSUME;
    }
#if(HTTP_LIVEVIEW_FUNC==ENABLE)
    //PhotoExe_CloseHttpLiveView();

    Ux_SendEvent(0,NVTEVT_EXE_CAPTURE_SIZE, 1, Data);
    Ux_SendEvent(0,NVTEVT_EXE_IMAGE_RATIO,1,GetPhotoSizeRatio(UI_GetData(FL_PHOTO_SIZE)));
    //PhotoExe_OpenHttpLiveView();
#endif
#if(WIFI_AP_FUNC==ENABLE)
    SysCmdWifi_CmdSend(WIFI_CMDSEND_NOTIFY_STATUS, WIFI_DV_STA_OK);
#endif
    return NVTEVT_CONSUME;
}
