#ifndef _calLib_h
#define _calLib_h

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
	float32 X;
	float32 Y;
	} TD1;

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL cal(float64 *Ind1,			/* Output */
		float64 **X,			/* Output */
		float64 **Y,			/* Output */
		float64 *Ind2,			/* Output */
		TD1 *Point2Pixels,			/* Input */
		float64 AngleRealWorld,			/* Input */
		TD1 *Point1Pixels,			/* Input */
		float64 Ctrl3,			/* Input */
		float64 y,			/* Input */
		float64 x,			/* Input */
		int32 *len,			/* Length for X*/
		int32 *len2);			/* Length for Y*/

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _calLib_h */
