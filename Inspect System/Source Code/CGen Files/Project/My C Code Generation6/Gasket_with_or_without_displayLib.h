#ifndef _Gasket_with_or_without_displayLib_h
#define _Gasket_with_or_without_displayLib_h

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

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL Gasketwithorwithoutdisplay(float64 Ctrl1,			/* Input */
		float64 Ctrl2,			/* Input */
		Boolean *Ind3,			/* Output */
		Boolean *Ind4);			/* Output */

#ifdef __cplusplus
} // extern "C"
#endif

