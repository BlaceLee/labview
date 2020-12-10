#ifndef _IPI_DrawLineLib_h
#define _IPI_DrawLineLib_h

#include "LVDefs_plat.h"

#ifndef CGEN_LIBFUNC_PREFIX 
#define CGEN_LIBFUNC_PREFIX 
#endif 
#ifndef  CGEN_LIBFUNC_CALL 
#define  CGEN_LIBFUNC_CALL 
#endif

#ifdef __cplusplus 
extern "C" { 
#endif

typedef struct {
	float64 X;
	float64 Y;
	} TD1;

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL IPI_DrawLine(TD1 *StartPoint,			/* Input */
		Char DistancePiex[],			/* Input */
		float64 Roi[],			/* Input */
		int32 len);			/* Length for Roi*/

#ifdef __cplusplus
} // extern "C"
#endif

