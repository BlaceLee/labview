#ifndef _IPI_CCD_Write_ResultLib_h
#define _IPI_CCD_Write_ResultLib_h

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

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL IPI_CCD_Write_Result(Char Result[],			/* Input */
		TD1 *Origin);			/* Input */

#ifdef __cplusplus
} // extern "C"
#endif

