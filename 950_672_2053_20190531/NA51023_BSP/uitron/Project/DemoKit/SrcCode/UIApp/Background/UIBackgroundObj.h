#ifndef UI_EXECUTE_FUNC_H
#define UI_EXECUTE_FUNC_H

typedef enum {
	NVTEVT_BKW_START = 1,
	NVTEVT_BKW_DELALL = NVTEVT_BKW_START,
	NVTEVT_BKW_COPY2CARD,
	NVTEVT_BKW_COPYCARD1ToCARD2,
	NVTEVT_BKW_COPYCARD2ToCARD1,
	NVTEVT_BKW_FORMAT,
	NVTEVT_BKW_FORMAT_CARD,
	NVTEVT_BKW_FORMAT_NAND,
	NVTEVT_BKW_NUM_RESET,
	NVTEVT_BKW_SETDPOF,
	NVTEVT_BKW_SETPROTECT,
	NVTEVT_BKW_DUMMY_WAIT,//do nothing, just wait for xxx ms then exit
	NVTEVT_BKW_FW_UPDATE,
	NVTEVT_BKW_DZOOM_IN,
	NVTEVT_BKW_DZOOM_OUT,
	NVTEVT_BKW_PIM_PROCESS,//For picture in movie processing
	NVTEVT_BKW_ANR_LENS_ACTION, //Generate Audio NR pattern by noises of zoom, focus and iris
	NVTEVT_BKW_WIFI_ON,
	NVTEVT_BKW_WIFI_CLEARACL,
	NVTEVT_BKW_STOPREC_PROCESS,
	NVTEVT_BKW_END

} NVT_BKW_CMD;

#define PLAYDPOF_SETONE                 0x00000002
#define PLAYDPOF_SETALL                 0x00000004

// Protect file
typedef enum {
	SETUP_PROTECT_ONE =    0x01,
	SETUP_PROTECT_ALL =    0x02,
	SETUP_UNPROTECT_ONE =  0x04,
	SETUP_UNPROTECT_ALL =  0x08
} SETUP_PROTECT_CMD;

#define UI_BACKGND_DUMMY_WAIT_INFINITE  0xFFFFFFFF

typedef enum {
	BKW_DPOF_MODE,    //write only, for NVTEVT_BKW_SETDPOF
	BKW_DPOF_NUM,     //write only, for NVTEVT_BKW_SETDPOF
	BKW_DPOF_DATE,    //write only, for NVTEVT_BKW_SETDPOF
	BKW_PROTECT_TYPE, //write only, for NVTEVT_BKW_SETPROTECT
	BKW_WAIT_TIME,    //write only, for NVTEVT_BKW_DUMMY_WAIT, Unit: ms
	BKW_DZOOM_STOP,   //write only, for stop Dzoom moving, the value is the pointer of UIN32 stopFlag.
	BKW_DATA_MAX
} BKW_DATA_SET;

extern void AppBKW_SetData(BKW_DATA_SET attribute, UINT32 value);
extern BKG_JOB_ENTRY gBackgroundExtFuncTable[];
extern UINT32 BackgroundDummyWait_Stop(void);

#endif

