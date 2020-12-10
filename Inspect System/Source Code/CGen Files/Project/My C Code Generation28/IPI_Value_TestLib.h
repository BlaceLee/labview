#ifndef _IPI_Value_TestLib_h
#define _IPI_Value_TestLib_h

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

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL IPI_ValueTest(float64 input,			/* Input */
		float64 Ctrl1,			/* Input */
		float64 Ctrl2,			/* Input */
		float64 Stand,			/* Input */
		float64 *outputvalue);			/* Output */

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _IPI_Value_TestLib_h */
