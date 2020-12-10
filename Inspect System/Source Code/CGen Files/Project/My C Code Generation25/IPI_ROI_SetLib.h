#ifndef _IPI_ROI_SetLib_h
#define _IPI_ROI_SetLib_h

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

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL IPI_ROI_Set(TD1 *XYCenter,			/* Input */
		int32 X,			/* Input */
		int32 Y,			/* Input */
		int32 Ctrl1);			/* Input */

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _IPI_ROI_SetLib_h */
