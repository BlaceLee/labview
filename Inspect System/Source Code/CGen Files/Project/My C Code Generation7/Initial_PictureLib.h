#ifndef _Initial_PictureLib_h
#define _Initial_PictureLib_h

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
	float64 CentX;
	float64 CentY;
	float64 Big1R;
	float64 Small1R;
	float64 Big2R;
	float64 Small2R;
	float64 Start_OutSide;
	float64 Start_InSide;
	} TD1;

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL InitialPicture(TD1 *Ctrl1,			/* Input */
		int32 fail,			/* Input */
		int32 Pass,			/* Input */
		Char **fail,			/* Output */
		Char **pass);			/* Output */

#ifdef __cplusplus
} // extern "C"
#endif

