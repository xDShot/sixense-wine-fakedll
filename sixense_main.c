/*
 * sixense.dll
 *
 * Generated from ../sixense.dll by winedump.
 *
 * DO NOT SUBMIT GENERATED DLLS FOR INCLUSION INTO WINE!
 *
 */

//#include "config.h"

#define WINESRC
#define __WINESRC__

#include <stdarg.h>

#include "windef.h"
#include "winbase.h"
#include "sixense_dll.h"
#include "wine/debug.h"

WINE_DEFAULT_DEBUG_CHANNEL(sixense);

BOOL WINAPI DllMain(HINSTANCE instance, DWORD reason, void *reserved)
{
    TRACE("(%p, %u, %p)\n", instance, reason, reserved);

    switch (reason)
    {
        case DLL_WINE_PREATTACH:
            return FALSE;    /* prefer native version */
        case DLL_PROCESS_ATTACH:
            DisableThreadLibraryCalls(instance);
            break;
    }

    return TRUE;
}
/******************************************************************
 *		?getElapsedMilliseconds@sixenseUtils@@YANH@Z (SIXENSE.1)
 *
 *
 */
double __cdecl SIXENSE_sixenseUtils_getElapsedMilliseconds_1(int arg0)
{
	FIXME(":stub\n");
	return (double) 0;
}
/******************************************************************
 *		?getTimeInMilliseconds@sixenseUtils@@YANXZ (SIXENSE.2)
 *
 *
 */
double __cdecl SIXENSE_sixenseUtils_getTimeInMilliseconds_2(void)
{
	FIXME(":stub\n");
	return (double) 0;
}
/******************************************************************
 *		CreateInterface (SIXENSE.3)
 *
 *
 */
int __cdecl SIXENSE_CreateInterface()
{
	FIXME(":stub\n");
	return sixenseInit();
}
/******************************************************************
 *		sixenseAutoEnableHemisphereTracking (SIXENSE.4)
 *
 *
 */
int __cdecl SIXENSE_sixenseAutoEnableHemisphereTracking(int which_controller)
{
	return sixenseAutoEnableHemisphereTracking(which_controller);
}
/******************************************************************
 *		sixenseExit (SIXENSE.5)
 *
 *
 */
int __cdecl SIXENSE_sixenseExit(void)
{
	return sixenseExit();
}
/******************************************************************
 *		sixenseGetAllData (SIXENSE.6)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetAllData(int index_back, sixenseAllControllerData * arg1)
{
	return sixenseGetAllData(index_back, arg1);
}
/******************************************************************
 *		sixenseGetAllNewestData (SIXENSE.7)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetAllNewestData(sixenseAllControllerData * arg0)
{
	return sixenseGetAllNewestData(arg0);
}
/******************************************************************
 *		sixenseGetBaseColor (SIXENSE.8)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetBaseColor(unsigned char * red, unsigned char * green, unsigned char * blue)
{
	return sixenseGetBaseColor(red, green, blue);
}
/******************************************************************
 *		sixenseGetCalibrationEnabled (SIXENSE.9)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetCalibrationEnabled()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseGetData (SIXENSE.10)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetData(int which, int index_back, sixenseControllerData * arg2)
{
	return sixenseGetData(which, index_back, arg2);
}
/******************************************************************
 *		sixenseGetDebugParam (SIXENSE.11)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetDebugParam(const char *param_name, float *val)
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseGetFilterEnabled (SIXENSE.12)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetFilterEnabled(int * on_or_off)
{
	return sixenseGetFilterEnabled(on_or_off);
}
/******************************************************************
 *		sixenseGetFilterParams (SIXENSE.13)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetFilterParams(float * near_range, float * near_val, float * far_range, float * far_val)
{
	return sixenseGetFilterParams(near_range, near_val, far_range, far_val);
}
/******************************************************************
 *		sixenseGetHemisphereTrackingMode (SIXENSE.14)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetHemisphereTrackingMode(int which_controller, int * state)
{
	return sixenseGetHemisphereTrackingMode(which_controller, state);
}
/******************************************************************
 *		sixenseGetHemisphereVector (SIXENSE.15)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetHemisphereVector()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseGetHighPriorityBindingEnabled (SIXENSE.16)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetHighPriorityBindingEnabled(int * on_or_off)
{
	return sixenseGetHighPriorityBindingEnabled(on_or_off);
}
/******************************************************************
 *		sixenseGetHistorySize (SIXENSE.17)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetHistorySize(void)
{
	return sixenseGetHistorySize();
}
/******************************************************************
 *		sixenseGetMaxBases (SIXENSE.18)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetMaxBases(void)
{
	return sixenseGetMaxBases();
}
/******************************************************************
 *		sixenseGetMaxControllers (SIXENSE.19)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetMaxControllers(void)
{
	return sixenseGetMaxControllers();
}
/******************************************************************
 *		sixenseGetNewestData (SIXENSE.20)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetNewestData(int which, sixenseControllerData * arg1)
{
	return sixenseGetNewestData(which, arg1);
}
/******************************************************************
 *		sixenseGetNumActiveControllers (SIXENSE.21)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetNumActiveControllers(void)
{
	return sixenseGetNumActiveControllers();
}
/******************************************************************
 *		sixenseGetRawData (SIXENSE.22)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetRawData()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseGetRawDataSingle (SIXENSE.23)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetRawDataSingle()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseGetSignalMatrix (SIXENSE.24)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetSignalMatrix()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseGetSignalQuality (SIXENSE.25)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetSignalQuality()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseGetTestMode (SIXENSE.26)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetTestMode()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseInit (SIXENSE.27)
 *
 *
 */
int __cdecl SIXENSE_sixenseInit(void)
{
	return sixenseInit();
}
/******************************************************************
 *		sixenseIsBaseConnected (SIXENSE.28)
 *
 *
 */
int __cdecl SIXENSE_sixenseIsBaseConnected(int i)
{
	return sixenseIsBaseConnected(i);
}
/******************************************************************
 *		sixenseIsControllerEnabled (SIXENSE.29)
 *
 *
 */
int __cdecl SIXENSE_sixenseIsControllerEnabled(int which)
{
	return sixenseIsControllerEnabled(which);
}
/******************************************************************
 *		sixensePlaybackLogFile (SIXENSE.30)
 *
 *
 */
int __cdecl SIXENSE_sixensePlaybackLogFile()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseSendTestCommand (SIXENSE.31)
 *
 *
 */
int __cdecl SIXENSE_sixenseSendTestCommand()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseSetActiveBase (SIXENSE.32)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetActiveBase(int i)
{
	return sixenseSetActiveBase(i);
}
/******************************************************************
 *		sixenseSetBaseColor (SIXENSE.33)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetBaseColor(unsigned char red, unsigned char green, unsigned char blue)
{
	return sixenseSetBaseColor(red, green, blue);
}
/******************************************************************
 *		sixenseSetCalibrationEnabled (SIXENSE.34)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetCalibrationEnabled()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseSetDebugParam (SIXENSE.35)
 *
 *
 */
int SIXENSE_sixenseSetDebugParam(const char *param_name, float val)
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseSetFilterEnabled (SIXENSE.36)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetFilterEnabled(int on_or_off)
{
	return sixenseSetFilterEnabled(on_or_off);
}
/******************************************************************
 *		sixenseSetFilterParams (SIXENSE.37)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetFilterParams(float near_range, float near_val, float far_range, float far_val)
{
	return sixenseSetFilterParams(near_range, near_val, far_range, far_val);
}
/******************************************************************
 *		sixenseSetHemisphereTrackingMode (SIXENSE.38)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetHemisphereTrackingMode(int which_controller, int state)
{
	return sixenseSetHemisphereTrackingMode(which_controller, state);
}
/******************************************************************
 *		sixenseSetHemisphereVector (SIXENSE.39)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetHemisphereVector()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseSetHighPriorityBindingEnabled (SIXENSE.40)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetHighPriorityBindingEnabled(int on_or_off)
{
	return sixenseSetHighPriorityBindingEnabled(on_or_off);
}
/******************************************************************
 *		sixenseSetTestMode (SIXENSE.41)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetTestMode()
{
	FIXME(":stub\n");
	return 1;
}
/******************************************************************
 *		sixenseTriggerVibration (SIXENSE.42)
 *
 *
 */
int __cdecl SIXENSE_sixenseTriggerVibration(int controller_id, int duration_100ms, int pattern_id)
{
	return sixenseTriggerVibration( controller_id, duration_100ms, pattern_id );
}
