#ifndef _CS_Set_the_inner_circle_parametersLib_h
#define _CS_Set_the_inner_circle_parametersLib_h

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

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL CSSettheinnercircleparameters(Boolean ShowResult,			/* Input */
		Boolean ShowEdgesFound,			/* Input */
		Boolean ShowSearchLines,			/* Input */
		Boolean ShowSearchArea);			/* Input */

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _CS_Set_the_inner_circle_parametersLib_h */
