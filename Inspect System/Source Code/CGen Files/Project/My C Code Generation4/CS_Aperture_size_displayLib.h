#ifndef _CS_Aperture_size_displayLib_h
#define _CS_Aperture_size_displayLib_h

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

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL CSAperturesizedisplay(float64 Ctrl1,			/* Input */
		Boolean *OKNG,			/* Output */
		Boolean *Ind2);			/* Output */

#ifdef __cplusplus
} // extern "C"
#endif

