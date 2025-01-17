//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndPhotoColorRes.c"
#include "UIMenuWndPhotoColor.h"
#include "MenuCommonItem.h"
#include "UISetup.h"
#include "UIFlow.h"

static UINT32 g_uiColorValue = 0; // for Color setting backup

//---------------------UIMenuWndPhotoColorCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPhotoColor)
CTRL_LIST_ITEM(UIMenuWndPhotoColor_Panel)
CTRL_LIST_END

//----------------------UIMenuWndPhotoColorCtrl Event---------------------------
INT32 UIMenuWndPhotoColor_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPhotoColor_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPhotoColor_OnKeyLeft(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPhotoColor_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPhotoColor_OnKeyMode(VControl *, UINT32, UINT32 *);
//INT32 UIMenuWndPhotoColor_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndPhotoColor)
EVENT_ITEM(NVTEVT_OPEN_WINDOW,UIMenuWndPhotoColor_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW,UIMenuWndPhotoColor_OnClose)
EVENT_ITEM(NVTEVT_KEY_LEFT,UIMenuWndPhotoColor_OnKeyLeft)
EVENT_ITEM(NVTEVT_KEY_MENU,UIMenuWndPhotoColor_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE,UIMenuWndPhotoColor_OnKeyMode)
//EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndPhotoColor_OnKeyShutter2)
EVENT_END

INT32 UIMenuWndPhotoColor_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    g_uiColorValue = SysGetFlag(FL_COLOR_EFFECT); // backup Color setting
    UxMenu_SetData(&UIMenuWndPhotoColor_MenuCtrl,MNU_CURITM,g_uiColorValue);
    //Ux_RedrawAllWind();
    Ux_DefaultEvent(pCtrl,NVTEVT_OPEN_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPhotoColor_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&CustomPhotoObjCtrl,NVTEVT_EXE_COLOR,1,g_uiColorValue); // recall Color setting
    Ux_DefaultEvent(pCtrl,NVTEVT_CLOSE_WINDOW,paramNum,paramArray);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPhotoColor_OnKeyLeft(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_CloseWindow(&UIMenuWndPhotoColorCtrl,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPhotoColor_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_CloseWindow(&MenuCommonItemCtrl,0); // close whole tab menu
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPhotoColor_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_EXE_CHANGEDSCMODE,1,DSCMODE_CHGTO_NEXT);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPhotoColor_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    Ux_SendEvent(&UISetupObjCtrl,NVTEVT_FORCETO_LIVEVIEW_MODE,0);
    return NVTEVT_CONSUME;
}
//---------------------UIMenuWndPhotoColor_PanelCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndPhotoColor_Panel)
CTRL_LIST_ITEM(UIMenuWndPhotoColor_Menu)
CTRL_LIST_END

//----------------------UIMenuWndPhotoColor_PanelCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndPhotoColor_Panel)
EVENT_END

//----------------------UIMenuWndPhotoColor_MenuCtrl Event---------------------------
INT32 UIMenuWndPhotoColor_Menu_OnKeyUp(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPhotoColor_Menu_OnKeyDown(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPhotoColor_Menu_OnKeyEnter(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndPhotoColor_Menu_OnKeyShutter2(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndPhotoColor_Menu)
EVENT_ITEM(NVTEVT_KEY_UP,UIMenuWndPhotoColor_Menu_OnKeyUp)
EVENT_ITEM(NVTEVT_KEY_DOWN,UIMenuWndPhotoColor_Menu_OnKeyDown)
EVENT_ITEM(NVTEVT_KEY_ENTER,UIMenuWndPhotoColor_Menu_OnKeyEnter)
EVENT_ITEM(NVTEVT_KEY_SHUTTER2,UIMenuWndPhotoColor_Menu_OnKeyShutter2)
EVENT_END

INT32 UIMenuWndPhotoColor_Menu_OnKeyUp(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    UINT32  value;
    Ux_SendEvent(pCtrl,NVTEVT_PREVIOUS_ITEM,0);
    value = UxMenu_GetData(pCtrl,MNU_CURITM);
    Ux_SendEvent(&CustomPhotoObjCtrl,NVTEVT_EXE_COLOR,1,value);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPhotoColor_Menu_OnKeyDown(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    UINT32  value;
    Ux_SendEvent(pCtrl,NVTEVT_NEXT_ITEM,0);
    value = UxMenu_GetData(pCtrl,MNU_CURITM);
    Ux_SendEvent(&CustomPhotoObjCtrl,NVTEVT_EXE_COLOR,1,value);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPhotoColor_Menu_OnKeyEnter(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    g_uiColorValue = UxMenu_GetData(pCtrl,MNU_CURITM); // change Color setting
    Ux_SendEvent(&CustomPhotoObjCtrl,NVTEVT_EXE_COLOR,1,g_uiColorValue);
    Ux_CloseWindow(&UIMenuWndPhotoColorCtrl,0);
    return NVTEVT_CONSUME;
}
INT32 UIMenuWndPhotoColor_Menu_OnKeyShutter2(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    // the same behavior as ENTER key!
    return UIMenuWndPhotoColor_Menu_OnKeyEnter(pCtrl, paramNum, paramArray);
}
