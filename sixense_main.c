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
#if 0
__cdecl SIXENSE_CreateInterface()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseAutoEnableHemisphereTracking (SIXENSE.4)
 *
 *
 */
int __cdecl SIXENSE_sixenseAutoEnableHemisphereTracking(int which_controller)
{
	/*FIXME(":stub\n");*/
	return sixenseAutoEnableHemisphereTracking(which_controller);
}
/******************************************************************
 *		sixenseExit (SIXENSE.5)
 *
 *
 */
int __cdecl SIXENSE_sixenseExit(void)
{
	/*FIXME(":stub\n");*/
	return sixenseExit();
}
/******************************************************************
 *		sixenseGetAllData (SIXENSE.6)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetAllData(int index_back, sixenseAllControllerData * arg1)
{
	/*FIXME(":stub\n");*/
	return sixenseGetAllData(index_back, arg1);
}
/******************************************************************
 *		sixenseGetAllNewestData (SIXENSE.7)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetAllNewestData(sixenseAllControllerData * arg0)
{
	/*FIXME(":stub\n");*/
	return sixenseGetAllNewestData(arg0);
}
/******************************************************************
 *		sixenseGetBaseColor (SIXENSE.8)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetBaseColor(unsigned char * red, unsigned char * green, unsigned char * blue)
{
	/*FIXME(":stub\n");*/
	return sixenseGetBaseColor(red, green, blue);
}
/******************************************************************
 *		sixenseGetCalibrationEnabled (SIXENSE.9)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseGetCalibrationEnabled()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseGetData (SIXENSE.10)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetData(int which, int index_back, sixenseControllerData * arg2)
{
	/*FIXME(":stub\n");*/
	return sixenseGetData(which, index_back, arg2);
}
/******************************************************************
 *		sixenseGetDebugParam (SIXENSE.11)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseGetDebugParam()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseGetFilterEnabled (SIXENSE.12)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetFilterEnabled(int * on_or_off)
{
	/*FIXME(":stub\n");*/
	return sixenseGetFilterEnabled(on_or_off);
}
/******************************************************************
 *		sixenseGetFilterParams (SIXENSE.13)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetFilterParams(float * near_range, float * near_val, float * far_range, float * far_val)
{
	/*FIXME(":stub\n");*/
	return sixenseGetFilterParams(near_range, near_val, far_range, far_val);
}
/******************************************************************
 *		sixenseGetHemisphereTrackingMode (SIXENSE.14)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetHemisphereTrackingMode(int which_controller, int * state)
{
	/*FIXME(":stub\n");*/
	return sixenseGetHemisphereTrackingMode(which_controller, state);
}
/******************************************************************
 *		sixenseGetHemisphereVector (SIXENSE.15)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseGetHemisphereVector()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseGetHighPriorityBindingEnabled (SIXENSE.16)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetHighPriorityBindingEnabled(int * on_or_off)
{
	/*FIXME(":stub\n");*/
	return sixenseGetHighPriorityBindingEnabled(on_or_off);
}
/******************************************************************
 *		sixenseGetHistorySize (SIXENSE.17)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetHistorySize(void)
{
	/*FIXME(":stub\n");*/
	return sixenseGetHistorySize();
}
/******************************************************************
 *		sixenseGetMaxBases (SIXENSE.18)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetMaxBases(void)
{
	/*FIXME(":stub\n");*/
	return sixenseGetMaxBases();
}
/******************************************************************
 *		sixenseGetMaxControllers (SIXENSE.19)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetMaxControllers(void)
{
	/*FIXME(":stub\n");*/
	return sixenseGetMaxControllers();
}
/******************************************************************
 *		sixenseGetNewestData (SIXENSE.20)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetNewestData(int which, sixenseControllerData * arg1)
{
	/*FIXME(":stub\n");*/
	return sixenseGetNewestData(which, arg1);
}
/******************************************************************
 *		sixenseGetNumActiveControllers (SIXENSE.21)
 *
 *
 */
int __cdecl SIXENSE_sixenseGetNumActiveControllers(void)
{
	/*FIXME(":stub\n");*/
	return sixenseGetNumActiveControllers();
}
/******************************************************************
 *		sixenseGetRawData (SIXENSE.22)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseGetRawData()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseGetRawDataSingle (SIXENSE.23)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseGetRawDataSingle()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseGetSignalMatrix (SIXENSE.24)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseGetSignalMatrix()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseGetSignalQuality (SIXENSE.25)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseGetSignalQuality()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseGetTestMode (SIXENSE.26)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseGetTestMode()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseInit (SIXENSE.27)
 *
 *
 */
int __cdecl SIXENSE_sixenseInit(void)
{
	/*FIXME(":stub\n");*/
	return sixenseInit();
}
/******************************************************************
 *		sixenseIsBaseConnected (SIXENSE.28)
 *
 *
 */
int __cdecl SIXENSE_sixenseIsBaseConnected(int i)
{
	/*FIXME(":stub\n");*/
	return sixenseIsBaseConnected(i);
}
/******************************************************************
 *		sixenseIsControllerEnabled (SIXENSE.29)
 *
 *
 */
int __cdecl SIXENSE_sixenseIsControllerEnabled(int which)
{
	/*FIXME(":stub\n");*/
	return sixenseIsControllerEnabled(which);
}
/******************************************************************
 *		sixensePlaybackLogFile (SIXENSE.30)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixensePlaybackLogFile()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseSendTestCommand (SIXENSE.31)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseSendTestCommand()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseSetActiveBase (SIXENSE.32)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetActiveBase(int i)
{
	/*FIXME(":stub\n");*/
	return sixenseSetActiveBase(i);
}
/******************************************************************
 *		sixenseSetBaseColor (SIXENSE.33)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetBaseColor(unsigned char red, unsigned char green, unsigned char blue)
{
	/*FIXME(":stub\n");*/
	return sixenseSetBaseColor(red, green, blue);
}
/******************************************************************
 *		sixenseSetCalibrationEnabled (SIXENSE.34)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseSetCalibrationEnabled()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseSetDebugParam (SIXENSE.35)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseSetDebugParam()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseSetFilterEnabled (SIXENSE.36)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetFilterEnabled(int on_or_off)
{
	/*FIXME(":stub\n");*/
	return sixenseSetFilterEnabled(on_or_off);
}
/******************************************************************
 *		sixenseSetFilterParams (SIXENSE.37)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetFilterParams(float near_range, float near_val, float far_range, float far_val)
{
	/*FIXME(":stub\n");*/
	return sixenseSetFilterParams(near_range, near_val, far_range, far_val);
}
/******************************************************************
 *		sixenseSetHemisphereTrackingMode (SIXENSE.38)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetHemisphereTrackingMode(int which_controller, int state)
{
	/*FIXME(":stub\n");*/
	return sixenseSetHemisphereTrackingMode(which_controller, state);
}
/******************************************************************
 *		sixenseSetHemisphereVector (SIXENSE.39)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseSetHemisphereVector()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseSetHighPriorityBindingEnabled (SIXENSE.40)
 *
 *
 */
int __cdecl SIXENSE_sixenseSetHighPriorityBindingEnabled(int on_or_off)
{
	/*FIXME(":stub\n");*/
	return sixenseSetHighPriorityBindingEnabled(on_or_off);
}
/******************************************************************
 *		sixenseSetTestMode (SIXENSE.41)
 *
 *
 */
#if 0
__cdecl SIXENSE_sixenseSetTestMode()
{
	/* @stub in .spec */
}
#endif
/******************************************************************
 *		sixenseTriggerVibration (SIXENSE.42)
 *
 *
 */
int __cdecl SIXENSE_sixenseTriggerVibration(int controller_id, int duration_100ms, int pattern_id)
{
	/*FIXME(":stub\n");*/
	return sixenseTriggerVibration( controller_id, duration_100ms, pattern_id );
}
