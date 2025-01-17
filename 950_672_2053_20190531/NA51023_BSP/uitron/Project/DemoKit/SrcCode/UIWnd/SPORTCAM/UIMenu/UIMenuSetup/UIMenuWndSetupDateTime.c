//This source code is generated by UI Designer Studio.

#include <stdio.h>
#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndSetupDateTimeRes.c"
#include "UIMenuWndSetupDateTime.h"
#include "MenuCommonItem.h"
//#NT#2010/06/01#Chris Chung -begin
#include "UIFlow.h"
#include "Utility.h"
#include "HwClock.h"
//This source code is generated by UI Designer Studio.

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIMenuWndSetupDateTimeRes.c"
#include "UIMenuWndSetupDateTime.h"
#include "PrjCfg.h"

//---------------------UIMenuWndSetupDateTimeCtrl Debug Definition -----------------------------
#define _UIMENUWNDSETUPDATETIME_ERROR_MSG        1
#define _UIMENUWNDSETUPDATETIME_TRACE_MSG        0

#if (_UIMENUWNDSETUPDATETIME_ERROR_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_ERR))
#define UIMenuWndSetupDateTimeErrMsg(...)            debug_msg ("^R UIMenuWndSetupDateTime: "__VA_ARGS__)
#else
#define UIMenuWndSetupDateTimeErrMsg(...)
#endif

#if (_UIMENUWNDSETUPDATETIME_TRACE_MSG&(PRJ_DBG_LVL>=PRJ_DBG_LVL_TRC))
#define UIMenuWndSetupDateTimeTraceMsg(...)          debug_msg ("^B UIMenuWndSetupDateTime: "__VA_ARGS__)
#else
#define UIMenuWndSetupDateTimeTraceMsg(...)
#endif

//---------------------UIMenuWndSetupDateTimeCtrl Global Variables -----------------------------

//---------------------UIMenuWndSetupDateTimeCtrl Prototype Declaration  -----------------------

//---------------------UIMenuWndSetupDateTimeCtrl Public API  ----------------------------------

//---------------------UIMenuWndSetupDateTimeCtrl Private API  ---------------------------------
#define DATETIME_MAX_YEAR       2050
#define DATETIME_DEFAULT_YEAR   2012
#define DATETIME_DEFAULT_MONTH     1
#define DATETIME_DEFAULT_DAY       1
#define DATETIME_DEFAULT_HOUR      0
#define DATETIME_DEFAULT_MINUTE    0
#define DATETIME_DEFAULT_SECOND    0

/* (57, 53) is the parent's start (x,y). */
#define DATETIME_START_X        57
#define DATETIME_START_Y        53

#define DATETIME_SHIFT_X        20

typedef enum {
	UI_DATETIME_IDX_Y,
	UI_DATETIME_IDX_Y2,
	UI_DATETIME_IDX_Y3,
	UI_DATETIME_IDX_Y4,
	UI_DATETIME_IDX_M,
	UI_DATETIME_IDX_M2,
	UI_DATETIME_IDX_D,
	UI_DATETIME_IDX_D2,
	UI_DATETIME_IDX_HR,
	UI_DATETIME_IDX_HR2,
	UI_DATETIME_IDX_MIN,
	UI_DATETIME_IDX_MIN2,
	UI_DATETIME_IDX_SEC,
	UI_DATETIME_IDX_SWITCH
} _UI_DATETIME_IDX_;
//#NT#2010/06/01#Chris Chung -end

//---------------------UIMenuWndSetupDateTimeCtrl Control List---------------------------
CTRL_LIST_BEGIN(UIMenuWndSetupDateTime)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_Tab)
CTRL_LIST_END

//----------------------UIMenuWndSetupDateTimeCtrl Event---------------------------
INT32 UIMenuWndSetupDateTime_OnOpen(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDateTime_OnClose(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDateTime_OnKeyMenu(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDateTime_OnKeyMode(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupDateTime)
EVENT_ITEM(NVTEVT_OPEN_WINDOW, UIMenuWndSetupDateTime_OnOpen)
EVENT_ITEM(NVTEVT_CLOSE_WINDOW, UIMenuWndSetupDateTime_OnClose)
EVENT_ITEM(NVTEVT_KEY_MENU, UIMenuWndSetupDateTime_OnKeyMenu)
EVENT_ITEM(NVTEVT_KEY_MODE, UIMenuWndSetupDateTime_OnKeyMode)
EVENT_END

//#NT#2010/06/01#Chris Chung -begin
static UINT32 g_year = DATETIME_DEFAULT_YEAR, g_month = DATETIME_DEFAULT_MONTH, g_day = DATETIME_DEFAULT_DAY;
static UINT32 g_hour = DATETIME_DEFAULT_HOUR, g_min = DATETIME_DEFAULT_MINUTE, g_second = DATETIME_DEFAULT_SECOND;
static char   itemY_Buf[32] = "0";
static char   itemY2_Buf[32] = "0";
static char   itemY3_Buf[32] = "0";
static char   itemY4_Buf[32] = "0";
static char   itemM_Buf[32] = "0";
static char   itemM2_Buf[32] = "0";
static char   itemD_Buf[32] = "0";
static char   itemD2_Buf[32] = "0";
static char   itemHR_Buf[32] = "0";
static char   itemHR2_Buf[32] = "0";
static char   itemMIN_Buf[32] = "0";
static char   itemMIN2_Buf[32] = "0";
static char   itemSEC_Buf[32] = "0";
static char   itemOther0_Buf[32] = "/";
static char   itemOther2_Buf[32] = ":";

_ALIGNED(4) static const UINT8 DayOfMonth[2][12] = {
	// Not leap year
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	// Leap year
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};


static void UIMenuWndSetupDateTime_UpdateInfo(void)
{
#if 0
	/* rect1_x: YYYY MM DD position */
	Ux_RECT rect1_1_1 = { 96 - DATETIME_START_X,  61 - DATETIME_START_Y, 163 - DATETIME_START_X, 117 - DATETIME_START_Y};
	Ux_RECT rect1_1_2 = {116 - DATETIME_START_X,  61 - DATETIME_START_Y, 163 - DATETIME_START_X, 117 - DATETIME_START_Y};
	Ux_RECT rect1_2   = {173 - DATETIME_START_X,  61 - DATETIME_START_Y, 212 - DATETIME_START_X, 117 - DATETIME_START_Y};
	Ux_RECT rect1_3   = {229 - DATETIME_START_X,  61 - DATETIME_START_Y, 268 - DATETIME_START_X, 117 - DATETIME_START_Y};
#endif

	if (g_day > DayOfMonth[TimeUtil_isLeapYear(g_year)][g_month - 1]) {
		g_day = DayOfMonth[TimeUtil_isLeapYear(g_year)][g_month - 1];
	}

	snprintf(itemY_Buf, 32, "%1ld", g_year / 1000);
	snprintf(itemY2_Buf, 32, "%01ld", (g_year / 100) % 10);
	snprintf(itemY3_Buf, 32, "%01ld", (g_year / 10) % 10);
	snprintf(itemY4_Buf, 32, "%ld", g_year % 10);
	snprintf(itemM_Buf, 32, "%01ld", g_month / 10);
	snprintf(itemM2_Buf, 32, "%ld", g_month % 10);
	snprintf(itemD_Buf, 32, "%01ld", g_day / 10);
	snprintf(itemD2_Buf, 32, "%ld", g_day % 10);
	snprintf(itemHR_Buf, 32, "%01ld", g_hour / 10);
	snprintf(itemHR2_Buf, 32, "%ld", g_hour % 10);
	snprintf(itemMIN_Buf, 32, "%01ld", g_min / 10);
	snprintf(itemMIN2_Buf, 32, "%ld", g_min % 10);
	snprintf(itemSEC_Buf, 32, "%02ld", g_second);

	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_YCtrl, 0, BTNITM_STRID, Txt_Pointer(itemY_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_Y2Ctrl, 0, BTNITM_STRID, Txt_Pointer(itemY2_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_Y3Ctrl, 0, BTNITM_STRID, Txt_Pointer(itemY3_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_Y4Ctrl, 0, BTNITM_STRID, Txt_Pointer(itemY4_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_MCtrl, 0, BTNITM_STRID, Txt_Pointer(itemM_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_M2Ctrl, 0, BTNITM_STRID, Txt_Pointer(itemM2_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_DCtrl, 0, BTNITM_STRID, Txt_Pointer(itemD_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_D2Ctrl, 0, BTNITM_STRID, Txt_Pointer(itemD2_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_HRCtrl, 0, BTNITM_STRID, Txt_Pointer(itemHR_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_HR2Ctrl, 0, BTNITM_STRID, Txt_Pointer(itemHR2_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_MINCtrl, 0, BTNITM_STRID, Txt_Pointer(itemMIN_Buf));
	UxButton_SetItemData(&UIMenuWndSetupDateTime_YMD_MIN2Ctrl, 0, BTNITM_STRID, Txt_Pointer(itemMIN2_Buf));

	UxStatic_SetData(&UIMenuWndSetupDateTime_YMD_VALUE_Other0Ctrl, STATIC_VALUE, Txt_Pointer(itemOther0_Buf));
	UxStatic_SetData(&UIMenuWndSetupDateTime_YMD_VALUE_Other1Ctrl, STATIC_VALUE, Txt_Pointer(itemOther0_Buf));
	UxStatic_SetData(&UIMenuWndSetupDateTime_YMD_VALUE_Other2Ctrl, STATIC_VALUE, Txt_Pointer(itemOther2_Buf));
	UxCtrl_SetDirty(&UIMenuWndSetupDateTime_TabCtrl, TRUE);
}
//#NT#2010/06/01#Chris Chung -end

INT32 UIMenuWndSetupDateTime_OnOpen(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	//#NT#2010/06/01#Chris Chung -begin
    struct tm Curr_DateTime;
    Curr_DateTime = HwClock_GetTime(TIME_ID_CURRENT);

    g_year = Curr_DateTime.tm_year;
	g_month = Curr_DateTime.tm_mon;
	g_day = Curr_DateTime.tm_mday;
	g_hour = Curr_DateTime.tm_hour;
	g_min = Curr_DateTime.tm_min;
	g_second = Curr_DateTime.tm_sec;

    UxTab_SetData(&UIMenuWndSetupDateTime_TabCtrl, TAB_FOCUS, UI_DATETIME_IDX_Y3);
	Input_SetKeyMask(KEY_RELEASE, FLGKEY_KEY_MASK_NULL);
	UIMenuWndSetupDateTime_UpdateInfo();
	//#NT#2010/06/01#Chris Chung -end
	Ux_DefaultEvent(pCtrl, NVTEVT_OPEN_WINDOW, paramNum, paramArray);
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDateTime_OnClose(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    struct tm Curr_DateTime ={0};

	Curr_DateTime.tm_year = g_year ;
	Curr_DateTime.tm_mon = g_month ;
	Curr_DateTime.tm_mday = g_day ;
	Curr_DateTime.tm_hour = g_hour ;
	Curr_DateTime.tm_min = g_min ;
	Curr_DateTime.tm_sec = g_second ;

    HwClock_SetTime(TIME_ID_CURRENT, Curr_DateTime, 0);

	Ux_DefaultEvent(pCtrl, NVTEVT_CLOSE_WINDOW, paramNum, paramArray);
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDateTime_OnKeyMenu(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    struct tm Curr_DateTime = {0};

	Curr_DateTime.tm_year = g_year ;
	Curr_DateTime.tm_mon = g_month ;
	Curr_DateTime.tm_mday = g_day ;
	Curr_DateTime.tm_hour = g_hour ;
	Curr_DateTime.tm_min = g_min ;
	Curr_DateTime.tm_sec = g_second ;

    HwClock_SetTime(TIME_ID_CURRENT, Curr_DateTime, 0);
	Ux_CloseWindow(&MenuCommonItemCtrl, 0); // close whole tab menu
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDateTime_OnKeyMode(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
    struct tm Curr_DateTime = {0};

	Curr_DateTime.tm_year = g_year ;
	Curr_DateTime.tm_mon = g_month ;
	Curr_DateTime.tm_mday = g_day ;
	Curr_DateTime.tm_hour = g_hour ;
	Curr_DateTime.tm_min = g_min ;
	Curr_DateTime.tm_sec = g_second ;

    HwClock_SetTime(TIME_ID_CURRENT, Curr_DateTime, 0);

	Ux_SendEvent(&UISetupObjCtrl, NVTEVT_EXE_CHANGEDSCMODE, 1, DSCMODE_CHGTO_NEXT);
	return NVTEVT_CONSUME;
}

//----------------------UIMenuWndSetupDateTime_TabCtrl Event---------------------------
INT32 UIMenuWndSetupDateTime_Tab_OnKeySelect(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDateTime_Tab_OnKeyPrev(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDateTime_Tab_OnKeyNext(VControl *, UINT32, UINT32 *);
INT32 UIMenuWndSetupDateTime_Tab_OnKeyExit(VControl *, UINT32, UINT32 *);
EVENT_BEGIN(UIMenuWndSetupDateTime_Tab)
EVENT_ITEM(NVTEVT_KEY_NEXT, UIMenuWndSetupDateTime_Tab_OnKeyNext)
EVENT_ITEM(NVTEVT_KEY_PREV, UIMenuWndSetupDateTime_Tab_OnKeyPrev)
EVENT_ITEM(NVTEVT_KEY_SELECT, UIMenuWndSetupDateTime_Tab_OnKeySelect)
EVENT_ITEM(NVTEVT_KEY_SHUTTER2, UIMenuWndSetupDateTime_Tab_OnKeyExit)

EVENT_END

INT32 UIMenuWndSetupDateTime_Tab_OnKeySelect(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	//#NT#2010/05/19#Chris Chung -begin
	switch (UxTab_GetData(&UIMenuWndSetupDateTime_TabCtrl, TAB_FOCUS)) {
	case UI_DATETIME_IDX_Y3:
		if (g_year >= DATETIME_MAX_YEAR / 10 * 10) {
			g_year = g_year % 10;
		} else {
			g_year = g_year + 10;
			if (g_year > DATETIME_MAX_YEAR) {
				g_year = (g_year / 10) * 10;
			}
		}

		if (g_year < DATETIME_DEFAULT_YEAR) {
			g_year = DATETIME_DEFAULT_YEAR;
		}
		break;
	case UI_DATETIME_IDX_Y4:
		if (g_year % 10 == 9) {
			g_year = (g_year / 10) * 10;
		} else {
			g_year++;
			if (g_year > DATETIME_MAX_YEAR) {
				g_year = (g_year / 10) * 10;
			}
		}

		if (g_year < DATETIME_DEFAULT_YEAR) {
			g_year = DATETIME_DEFAULT_YEAR;
		}

		break;
	case UI_DATETIME_IDX_M:
		if (g_month >= 10) {
			g_month = g_month % 10;
		} else {
			g_month = g_month + 10;
			if (g_month > 12) {
				g_month = (g_month / 10) * 10;
			}
		}
		if (g_month < 1) {
			g_month = 1;
		}
		break;
	case UI_DATETIME_IDX_M2:
		if (g_month % 10 == 9) {
			g_month = (g_month / 10) * 10;
		} else {
			g_month++;
			if (g_month > 12) {
				g_month = (g_month / 10) * 10;
			}
		}
		if (g_month < 1) {
			g_month = 1;
		}

		break;
	case UI_DATETIME_IDX_D:
		DBGD(((DayOfMonth[TimeUtil_isLeapYear(g_year)][g_month - 1] / 10) * 10));
		if (g_day >= ((DayOfMonth[TimeUtil_isLeapYear(g_year)][g_month - 1] / 10) * 10)) {
			g_day = g_day % 10;
		} else {
			g_day = g_day + 10;
			if (g_day > DayOfMonth[TimeUtil_isLeapYear(g_year)][g_month - 1]) {
				g_day = (g_day / 10) * 10;
			}
		}
		if (g_day < 1) {
			g_day = 1;
		}
		break;
	case UI_DATETIME_IDX_D2:
		if (g_day % 10 == 9) {
			g_day = (g_day / 10) * 10;
		} else {
			g_day++;
			if (g_day > DayOfMonth[TimeUtil_isLeapYear(g_year)][g_month - 1]) {
				g_day = (g_day / 10) * 10;
			}
		}
		if (g_day < 1) {
			g_day = 1;
		}
		break;
	case UI_DATETIME_IDX_HR:
		if (g_hour >= 20) {
			g_hour = g_hour % 10;
		} else {
			g_hour = g_hour + 10;
			if (g_hour > 23) {
				g_hour = (g_hour / 10) * 10;
			}
		}
		break;
	case UI_DATETIME_IDX_HR2:
		if (g_hour % 10 == 9) {
			g_hour = (g_hour / 10) * 10;
		} else {
			g_hour++;
			if (g_hour > 23) {
				g_hour = (g_hour / 10) * 10;
			}
		}
		break;
	case UI_DATETIME_IDX_MIN:
		if (g_min >= 50) {
			g_min = g_min % 10;
		} else {
			g_min = g_min + 10;
			if (g_min > 59) {
				g_min = (g_min / 10) * 10;
			}
		}
		break;
	case UI_DATETIME_IDX_MIN2:
		if (g_min % 10 == 9) {
			g_min = (g_min / 10) * 10;
		} else {
			g_min++;
			if (g_min > 59) {
				g_min = (g_min / 10) * 10;
			}
		}
		break;
	}

	UIMenuWndSetupDateTime_UpdateInfo();
	//#NT#2010/05/19#Chris Chung -end
	return NVTEVT_CONSUME;
}

INT32 UIMenuWndSetupDateTime_Tab_OnKeyNext(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	if (UxTab_GetData(&UIMenuWndSetupDateTime_TabCtrl, TAB_FOCUS) == UI_DATETIME_IDX_MIN2) {
		Ux_CloseWindow(&UIMenuWndSetupDateTimeCtrl, 0);
	} else {
		Ux_SendEvent(pCtrl, NVTEVT_NEXT_ITEM, 0);
	}

	UIMenuWndSetupDateTime_UpdateInfo();
	return NVTEVT_CONSUME;
}

INT32 UIMenuWndSetupDateTime_Tab_OnKeyPrev(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	if (UxTab_GetData(&UIMenuWndSetupDateTime_TabCtrl, TAB_FOCUS) == UI_DATETIME_IDX_Y) {
		Ux_CloseWindow(&UIMenuWndSetupDateTimeCtrl, 0);
	} else {
		Ux_SendEvent(pCtrl, NVTEVT_PREVIOUS_ITEM, 0);
	}

	UIMenuWndSetupDateTime_UpdateInfo();
	return NVTEVT_CONSUME;
}
INT32 UIMenuWndSetupDateTime_Tab_OnKeyExit(VControl *pCtrl, UINT32 paramNum, UINT32 *paramArray)
{
	Ux_CloseWindow(&MenuCommonItemCtrl, 0);
	return NVTEVT_CONSUME;
}

//----------------------UIMenuWndSetupDateTime_YMD_YCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_Y)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_Y2Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_Y2)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_Y3Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_Y3)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_Y4Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_Y4)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_MCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_M)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_M2Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_M2)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_DCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_D)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_D2Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_D2)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_HRCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_HR)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_HR2Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_HR2)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_MINCtrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_MIN)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_MIN2Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_MIN2)
EVENT_END

//----------------------UIMenuWndSetupDateTime_Tab_YMD_VALUECtrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_VALUE_Other0Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_VALUE_Other1Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
EVENT_END

//----------------------UIMenuWndSetupDateTime_YMD_VALUE_Other2Ctrl Event---------------------------
EVENT_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
EVENT_END

