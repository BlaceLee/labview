#ifndef _IPI_PassorFail_staticLib_h
#define _IPI_PassorFail_staticLib_h

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

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL IPI_PassorFail_static(Char **Pass,			/* Output */
		Char **Fail,			/* Output */
		float64 *Pass,			/* Output */
		float64 *Fail);			/* Output */

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _IPI_PassorFail_staticLib_h */
