#ifndef _IPI_StringChangeOptionLib_h
#define _IPI_StringChangeOptionLib_h

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

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL IPI_StringChangeOption(Char InputString[]);			/* Input */

#ifdef __cplusplus
} // extern "C"
#endif

#endif /* _IPI_StringChangeOptionLib_h */
