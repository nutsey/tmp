//This source code is generated by UI Designer Studio.

#ifndef UIMENUWNDUSBRES_H
#define UIMENUWNDUSBRES_H

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIDisplayUtil.h"
//------------------------------------------------------------

SHOW_ITEM_RECT(CMD_Rectangle,Skin1Rect,0,0,319,239,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin1)
SHOW_MAP_BODY(Skin1Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin1,0,0,319,239)

SHOW_ITEM_RECT(CMD_Rectangle,Skin2Rect,0,0,295,165,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin2)
SHOW_MAP_BODY(Skin2Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin2,0,0,295,165)

SHOW_MAP_BEGIN(UIMenuWndUSB_Background)
SHOW_MAP_BODY(Skin2)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndUSB_Background)
DECLARE_CTRL_LIST(UIMenuWndUSB_Background)
CREATE_CTRL(UIMenuWndUSB_Background,UIMenuWndUSB_Background,CTRL_WND,NULL,0 ,12,44,307,209)
SHOW_ITEM_IMAGE(CMD_Image,Image4, 0, 0, 55,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image5, 56, 0, 111,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image6, 112, 0, 167,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image7, 168, 0, 223,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image8, 224, 0, 279,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image9, 240, 0, 295,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image10, 0, 0, 55,39, ICON_MENU_SETUP_ON,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin3)
SHOW_MAP_BODY(Image4)
SHOW_MAP_BODY(Image5)
SHOW_MAP_BODY(Image6)
SHOW_MAP_BODY(Image7)
SHOW_MAP_BODY(Image8)
SHOW_MAP_BODY(Image9)
SHOW_MAP_BODY(Image10)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin3,0,0,295,39)

SHOW_ITEM_IMAGE(CMD_Image,Image13, 0, 0, 55,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image14, 56, 0, 111,39, ICON_TITLE_BAR,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin12)
SHOW_MAP_BODY(Image13)
SHOW_MAP_BODY(Image14)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin12,0,0,111,39)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text16,4,0,105,39,STRID_NULL,0,0,0,0,2,1,1,0,0,18,0,0,0,0)
SHOW_MAP_BEGIN(Normal11)
SHOW_MAP_BODY(Skin12)
SHOW_MAP_BODY(Text16)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal11,196,5,307,44)

CREATE_STATE_ITEM_DATA(STRID_USB17,STRID_USB,ICONID_NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndUSB_TitleName)
SHOW_MAP_BODY(Normal11)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndUSB_TitleName)
STATE_LIST_BEGIN(UIMenuWndUSB_TitleName)
STATE_LIST_ITEM(STRID_USB17)
STATE_LIST_END

CREATE_STATE_DATA(UIMenuWndUSB_TitleName,0)
CREATE_STATE_CTRL(UIMenuWndUSB_TitleName,0,184,0,295,39)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndUSB_TitleBar)
SHOW_MAP_BODY(Skin3)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndUSB_TitleBar)
DECLARE_CTRL_LIST(UIMenuWndUSB_TitleBar)
CREATE_CTRL(UIMenuWndUSB_TitleBar,UIMenuWndUSB_TitleBar,CTRL_WND,NULL,0 ,12,5,307,44)
SHOW_ITEM_IMAGE(CMD_Image,Image19, 0, 0, 27,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image20, 28, 0, 55,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image21, 56, 0, 83,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image22, 84, 0, 111,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image23, 112, 0, 139,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image24, 140, 0, 167,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image25, 168, 0, 195,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image26, 196, 0, 223,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image27, 224, 0, 251,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image28, 252, 0, 279,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image29, 268, 0, 295,27, ICON_HINT_BAR,0,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin18)
SHOW_MAP_BODY(Image19)
SHOW_MAP_BODY(Image20)
SHOW_MAP_BODY(Image21)
SHOW_MAP_BODY(Image22)
SHOW_MAP_BODY(Image23)
SHOW_MAP_BODY(Image24)
SHOW_MAP_BODY(Image25)
SHOW_MAP_BODY(Image26)
SHOW_MAP_BODY(Image27)
SHOW_MAP_BODY(Image28)
SHOW_MAP_BODY(Image29)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin18,0,0,295,27)

SHOW_ITEM_IMAGE(CMD_Image,Image31, 4, 0, 31,27, ICON_DIR_UP,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image32, 32, 0, 59,27, ICON_DIR_DOWN,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_IMAGE(CMD_Image,Image33, 68, 0, 95,27, ICON_OK,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin30)
SHOW_MAP_BODY(Image31)
SHOW_MAP_BODY(Image32)
SHOW_MAP_BODY(Image33)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin30,0,0,110,27)

SHOW_MAP_BEGIN(UIMenuWndUSB_UDOKTips)
SHOW_MAP_BODY(Skin30)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndUSB_UDOKTips)
DECLARE_CTRL_LIST(UIMenuWndUSB_UDOKTips)
CREATE_CTRL(UIMenuWndUSB_UDOKTips,UIMenuWndUSB_UDOKTips,CTRL_WND,NULL,0 ,148,0,258,27)
SHOW_MAP_BEGIN(UIMenuWndUSB_TipsBar)
SHOW_MAP_BODY(Skin18)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndUSB_TipsBar)
DECLARE_CTRL_LIST(UIMenuWndUSB_TipsBar)
CREATE_CTRL(UIMenuWndUSB_TipsBar,UIMenuWndUSB_TipsBar,CTRL_WND,NULL,0 ,12,209,307,236)
SHOW_ITEM_RECT(CMD_Rectangle,Skin35Rect,0,0,284,40,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin35)
SHOW_MAP_BODY(Skin35Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin35,0,0,284,40)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon36, 6, 0, 33,40, ICONID_NULL,83886080,0,0,3,0,0,17,0)
SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text38,40,0,283,40,STRID_NULL,0,0,0,0,2,1,0,0,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Normal34)
SHOW_MAP_BODY(Skin35)
SHOW_MAP_BODY(Icon36)
SHOW_MAP_BODY(Text38)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal34,18,52,302,92)

SHOW_ITEM_IMAGE(CMD_Image,Image41, 0, 0, 31,40, ICON_SEL_BAR_BEGIN,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image42, 32, 0, 63,40, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image43, 64, 0, 95,40, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image44, 96, 0, 127,40, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image45, 126, 0, 157,40, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image46, 157, 0, 188,40, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image47, 189, 0, 220,40, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image48, 220, 0, 251,40, ICON_SEL_BAR_ITEM,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image49, 252, 0, 283,40, ICON_SEL_BAR_END,83886080,0,0,0,0,0,17,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin40Rect,0,0,284,40,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin40)
SHOW_MAP_BODY(Skin40Rect)
SHOW_MAP_BODY(Image41)
SHOW_MAP_BODY(Image42)
SHOW_MAP_BODY(Image43)
SHOW_MAP_BODY(Image44)
SHOW_MAP_BODY(Image45)
SHOW_MAP_BODY(Image46)
SHOW_MAP_BODY(Image47)
SHOW_MAP_BODY(Image48)
SHOW_MAP_BODY(Image49)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin40,0,0,284,40)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon50, 6, 0, 33,40, ICONID_NULL,83886080,0,0,1,0,0,17,0)
SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text52,40,0,283,40,STRID_NULL,0,0,0,0,14,5,0,256,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Focused39)
SHOW_MAP_BODY(Skin40)
SHOW_MAP_BODY(Icon50)
SHOW_MAP_BODY(Text52)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused39,18,52,302,92)

SHOW_ITEM_RECT(CMD_Rectangle,Skin54Rect,0,0,284,40,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin54)
SHOW_MAP_BODY(Skin54Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin54,0,0,284,40)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon55, 6, 5, 33,32, ICONID_NULL,83886080,0,0,3,0,0,0,0)
SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text57,40,7,284,31,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable53)
SHOW_MAP_BODY(Skin54)
SHOW_MAP_BODY(Icon55)
SHOW_MAP_BODY(Text57)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable53,18,52,302,92)

SHOW_ITEM_RECT(CMD_Rectangle,Skin59Rect,0,0,284,40,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin59)
SHOW_MAP_BODY(Skin59Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin59,0,0,284,40)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon60, 6, 5, 33,32, ICONID_NULL,83886080,0,0,3,0,0,0,0)
SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text62,40,7,284,31,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable58)
SHOW_MAP_BODY(Skin59)
SHOW_MAP_BODY(Icon60)
SHOW_MAP_BODY(Text62)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable58,18,52,302,92)

SHOW_MAP_BEGIN(Skin64)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin64,0,0,284,40)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon65, 6, 5, 34,32, ICONID_NULL,83886080,0,0,0,0,0,0,0)
SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text67,40,7,284,31,STRID_NULL,0,0,0,0,1,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Pressed63)
SHOW_MAP_BODY(Skin64)
SHOW_MAP_BODY(Icon65)
SHOW_MAP_BODY(Text67)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed63,18,52,302,92)

CREATE_MENU_ITEM_DATA(STRID_MSDC68,STRID_MSDC,ICONID_NULL,STATUS_ENABLE,NULL,NULL) 
CREATE_MENU_ITEM_DATA(STRID_PCC69,STRID_PCC,ICONID_NULL,STATUS_ENABLE,NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndUSB_Item)
SHOW_MAP_BODY(Normal34)
SHOW_MAP_BODY(Focused39)
SHOW_MAP_BODY(Normal_Disable53)
SHOW_MAP_BODY(Focused_Disable58)
SHOW_MAP_BODY(Pressed63)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndUSB_Item)
MENU_LIST_BEGIN(UIMenuWndUSB_Item)
MENU_LIST_ITEM(STRID_MSDC68)
MENU_LIST_ITEM(STRID_PCC69)
MENU_LIST_END

CREATE_MENU_DATA(UIMenuWndUSB_Item,0,2,MENU_LAYOUT_VERTICAL|MENU_DISABLE_SHOW|MENU_SCROLL_CYCLE|MENU_SCROLL_NEXT_PAGE|MENU_DISABLE_NORMAL|MENU_DRAW_IMAGE)

CREATE_MENU_CTRL(UIMenuWndUSB_Item,UIMenuWndUSB_Item,0,18,52,302,92)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_IMAGE(CMD_Image,Image71, 0, 0, 31,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image72, 32, 0, 63,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image73, 64, 0, 95,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image74, 96, 0, 127,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image75, 128, 0, 159,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image76, 160, 0, 191,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image77, 192, 0, 223,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image78, 224, 0, 255,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image79, 256, 0, 287,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_ITEM_IMAGE(CMD_Image,Image80, 264, 0, 295,3, ICON_MENU_UNDERBAR,0,0,0,0,0,0,17,0)
SHOW_MAP_BEGIN(Skin70)
SHOW_MAP_BODY(Image71)
SHOW_MAP_BODY(Image72)
SHOW_MAP_BODY(Image73)
SHOW_MAP_BODY(Image74)
SHOW_MAP_BODY(Image75)
SHOW_MAP_BODY(Image76)
SHOW_MAP_BODY(Image77)
SHOW_MAP_BODY(Image78)
SHOW_MAP_BODY(Image79)
SHOW_MAP_BODY(Image80)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin70,0,0,295,3)

SHOW_MAP_BEGIN(UIMenuWndUSB_TabBar)
SHOW_MAP_BODY(Skin70)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndUSB_TabBar)
DECLARE_CTRL_LIST(UIMenuWndUSB_TabBar)
CREATE_CTRL(UIMenuWndUSB_TabBar,UIMenuWndUSB_TabBar,CTRL_WND,NULL,0 ,12,45,307,48)
SHOW_MAP_BEGIN(UIMenuWndUSB)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndUSB)
DECLARE_CTRL_LIST(UIMenuWndUSB)
CREATE_CTRL(UIMenuWndUSB,UIMenuWndUSB,CTRL_WND,NULL,0 ,0,0,319,239)
#endif
