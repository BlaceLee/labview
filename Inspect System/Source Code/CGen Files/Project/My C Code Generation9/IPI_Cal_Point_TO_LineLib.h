#ifndef _IPI_Cal_Point_TO_LineLib_h
#define _IPI_Cal_Point_TO_LineLib_h

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
	int32 X;
	int32 Y;
	} TD1;

typedef struct {
	float32 X;
	float32 Y;
	} TD2;

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL IPI_Cal_PointTOLine(float64 *Distpiex,			/* Output */
		Char **Piex,			/* Output */
		TD1 *StartPoint,			/* Input */
		TD2 *Point1PixelsSecond,			/* Input */
		TD2 *Point1PixelsFirst);			/* Input */

#ifdef __cplusplus
} // extern "C"
#endif

