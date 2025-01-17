//This source code is generated by UI Designer Studio.

#ifndef UIMENUWNDSETUPFORMATCONFIRMRES_H
#define UIMENUWNDSETUPFORMATCONFIRMRES_H

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIDisplayUtil.h"
//------------------------------------------------------------

SHOW_MAP_BEGIN(Skin1)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin1,0,0,319,239)

SHOW_ITEM_RECT(CMD_Rectangle,Rect3,56,52,304,206,272,0,5,15,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin5Rect,0,0,215,37,0,0,15,15,0,0,0)
SHOW_MAP_BEGIN(Skin5)
SHOW_MAP_BODY(Skin5Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin5,0,0,215,37)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text7,0,0,215,37,STRID_NULL,0,0,0,0,2,1,1,0,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal4)
SHOW_MAP_BODY(Skin5)
SHOW_MAP_BODY(Text7)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal4,72,124,287,161)

SHOW_ITEM_IMAGE(CMD_Image,Sel_Bar_Begin10, 0, 0, 31,37, ICON_SEL_BAR_BEGIN,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Sel_Bar_Med11, 32, 0, 63,37, ICON_SEL_BAR_ITEM,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Sel_Bar_Med12, 64, 0, 95,37, ICON_SEL_BAR_ITEM,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Sel_Bar_Med13, 96, 0, 127,37, ICON_SEL_BAR_ITEM,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Sel_Bar_Med14, 128, 0, 159,37, ICON_SEL_BAR_ITEM,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Sel_Bar_Med15, 160, 0, 191,37, ICON_SEL_BAR_ITEM,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Sel_Bar_End16, 183, 0, 214,37, ICON_SEL_BAR_END,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin9Rect,0,0,215,37,0,0,15,15,0,0,0)
SHOW_MAP_BEGIN(Skin9)
SHOW_MAP_BODY(Skin9Rect)
SHOW_MAP_BODY(Sel_Bar_Begin10)
SHOW_MAP_BODY(Sel_Bar_Med11)
SHOW_MAP_BODY(Sel_Bar_Med12)
SHOW_MAP_BODY(Sel_Bar_Med13)
SHOW_MAP_BODY(Sel_Bar_Med14)
SHOW_MAP_BODY(Sel_Bar_Med15)
SHOW_MAP_BODY(Sel_Bar_End16)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin9,0,0,215,37)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text18,0,0,215,37,STRID_NULL,0,0,0,0,2,1,1,0,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused8)
SHOW_MAP_BODY(Skin9)
SHOW_MAP_BODY(Text18)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused8,72,124,287,161)

SHOW_ITEM_RECT(CMD_Rectangle,Skin20Rect,0,0,215,37,0,0,15,15,0,0,0)
SHOW_MAP_BEGIN(Skin20)
SHOW_MAP_BODY(Skin20Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin20,0,0,215,37)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text22,1,5,216,35,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable19)
SHOW_MAP_BODY(Skin20)
SHOW_MAP_BODY(Text22)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable19,72,124,287,161)

SHOW_ITEM_RECT(CMD_Rectangle,Skin24Rect,0,0,215,37,0,0,15,15,0,0,0)
SHOW_MAP_BEGIN(Skin24)
SHOW_MAP_BODY(Skin24Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin24,0,0,215,37)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text26,1,5,216,35,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable23)
SHOW_MAP_BODY(Skin24)
SHOW_MAP_BODY(Text26)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable23,72,124,287,161)

SHOW_ITEM_RECT(CMD_Rectangle,Skin28Rect,0,0,215,37,0,0,15,15,0,0,0)
SHOW_MAP_BEGIN(Skin28)
SHOW_MAP_BODY(Skin28Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin28,0,0,215,37)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text30,1,5,216,35,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Pressed27)
SHOW_MAP_BODY(Skin28)
SHOW_MAP_BODY(Text30)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed27,72,124,287,161)

CREATE_LIST_ITEM_DATA(STRID_CANCEL31,STRID_CANCEL,ICONID_NULL,STATUS_ENABLE) 
CREATE_LIST_ITEM_DATA(STRID_OK32,STRID_OK,ICONID_NULL,STATUS_ENABLE) 
SHOW_MAP_BEGIN(UIMenuWndSetupFormatConfirm_List_Text)
SHOW_MAP_BODY(Normal4)
SHOW_MAP_BODY(Focused8)
SHOW_MAP_BODY(Normal_Disable19)
SHOW_MAP_BODY(Focused_Disable23)
SHOW_MAP_BODY(Pressed27)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupFormatConfirm_List_Text)
LIST_LIST_BEGIN(UIMenuWndSetupFormatConfirm_List_Text)
LIST_LIST_ITEM(STRID_CANCEL31)
LIST_LIST_ITEM(STRID_OK32)
LIST_LIST_END

CREATE_LIST_DATA(UIMenuWndSetupFormatConfirm_List_Text,0,2,MENU_LAYOUT_VERTICAL|MENU_DISABLE_SHOW|MENU_SCROLL_STOP|MENU_SCROLL_NEXT_PAGE|MENU_DISABLE_SKIP|LIST_DRAW_IMAGE,NVTEVT_NULL)

CREATE_LIST_CTRL(UIMenuWndSetupFormatConfirm_List_Text,UIMenuWndSetupFormatConfirm_List_Text,0,72,124,287,161)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin34Rect,0,0,193,54,0,0,15,15,0,0,0)
SHOW_MAP_BEGIN(Skin34)
SHOW_MAP_BODY(Skin34Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin34,0,0,193,54)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text36,6,4,184,45,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal33)
SHOW_MAP_BODY(Skin34)
SHOW_MAP_BODY(Text36)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal33,86,62,279,116)

SHOW_MAP_BEGIN(UIMenuWndSetupFormatConfirm_Static_Text)
SHOW_MAP_BODY(Normal33)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupFormatConfirm_Static_Text)
CREATE_STATIC_DATA(UIMenuWndSetupFormatConfirm_Static_Text,STRID_DELETE_WARNING)
CREATE_STATIC_CTRL(UIMenuWndSetupFormatConfirm_Static_Text,0,86,62,279,116)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndSetupFormatConfirm)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_BODY(Rect3)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupFormatConfirm)
DECLARE_CTRL_LIST(UIMenuWndSetupFormatConfirm)
CREATE_CTRL(UIMenuWndSetupFormatConfirm,UIMenuWndSetupFormatConfirm,CTRL_WND,NULL,0 ,0,0,319,239)
#endif
