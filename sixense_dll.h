/*
 * sixense.dll
 *
 * Generated from sixense.dll by winedump.
 *
 * DO NOT SEND GENERATED DLLS FOR INCLUSION INTO WINE !
 *
 */
#ifndef __WINE_SIXENSE_DLL_H
#define __WINE_SIXENSE_DLL_H

#include <sixense.h>

#include "windef.h"
#include "wine/debug.h"
#include "winbase.h"
#include "winnt.h"


/* double __cdecl SIXENSE_sixenseUtils_getElapsedMilliseconds_1(int arg0); */
/* double __cdecl SIXENSE_sixenseUtils_getTimeInMilliseconds_2(void); */
/* __cdecl SIXENSE_CreateInterface(); */
int __cdecl SIXENSE_sixenseAutoEnableHemisphereTracking(int which_controller);
int __cdecl SIXENSE_sixenseExit(void);
int __cdecl SIXENSE_sixenseGetAllData(int index_back, sixenseAllControllerData * arg1);
int __cdecl SIXENSE_sixenseGetAllNewestData(sixenseAllControllerData * arg0);
int __cdecl SIXENSE_sixenseGetBaseColor(unsigned char * red, unsigned char * green, unsigned char * blue);
/* __cdecl SIXENSE_sixenseGetCalibrationEnabled(); */
int __cdecl SIXENSE_sixenseGetData(int which, int index_back, sixenseControllerData * arg2);
/* __cdecl SIXENSE_sixenseGetDebugParam(); */
int __cdecl SIXENSE_sixenseGetFilterEnabled(int * on_or_off);
int __cdecl SIXENSE_sixenseGetFilterParams(float * near_range, float * near_val, float * far_range, float * far_val);
int __cdecl SIXENSE_sixenseGetHemisphereTrackingMode(int which_controller, int * state);
/* __cdecl SIXENSE_sixenseGetHemisphereVector(); */
int __cdecl SIXENSE_sixenseGetHighPriorityBindingEnabled(int * on_or_off);
int __cdecl SIXENSE_sixenseGetHistorySize(void);
int __cdecl SIXENSE_sixenseGetMaxBases(void);
int __cdecl SIXENSE_sixenseGetMaxControllers(void);
int __cdecl SIXENSE_sixenseGetNewestData(int which, sixenseControllerData * arg1);
int __cdecl SIXENSE_sixenseGetNumActiveControllers(void);
/* __cdecl SIXENSE_sixenseGetRawData(); */
/* __cdecl SIXENSE_sixenseGetRawDataSingle(); */
/* __cdecl SIXENSE_sixenseGetSignalMatrix(); */
/* __cdecl SIXENSE_sixenseGetSignalQuality(); */
/* __cdecl SIXENSE_sixenseGetTestMode(); */
int __cdecl SIXENSE_sixenseInit(void);
int __cdecl SIXENSE_sixenseIsBaseConnected(int i);
int __cdecl SIXENSE_sixenseIsControllerEnabled(int which);
/* __cdecl SIXENSE_sixensePlaybackLogFile(); */
/* __cdecl SIXENSE_sixenseSendTestCommand(); */
int __cdecl SIXENSE_sixenseSetActiveBase(int i);
int __cdecl SIXENSE_sixenseSetBaseColor(unsigned char red, unsigned char green, unsigned char blue);
/* __cdecl SIXENSE_sixenseSetCalibrationEnabled(); */
/* __cdecl SIXENSE_sixenseSetDebugParam(); */
int __cdecl SIXENSE_sixenseSetFilterEnabled(int on_or_off);
int __cdecl SIXENSE_sixenseSetFilterParams(float near_range, float near_val, float far_range, float far_val);
int __cdecl SIXENSE_sixenseSetHemisphereTrackingMode(int which_controller, int state);
/* __cdecl SIXENSE_sixenseSetHemisphereVector(); */
int __cdecl SIXENSE_sixenseSetHighPriorityBindingEnabled(int on_or_off);
/* __cdecl SIXENSE_sixenseSetTestMode(); */
int __cdecl SIXENSE_sixenseTriggerVibration(int controller_id, int duration_100ms, int pattern_id);



#endif	/* __WINE_SIXENSE_DLL_H */
