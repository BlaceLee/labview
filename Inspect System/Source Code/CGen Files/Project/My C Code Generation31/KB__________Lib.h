#ifndef _KB__________Lib_h
#define _KB__________Lib_h

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
	int32 _;
	int32 _2;
	int32 _3;
	} TD1;

CGEN_LIBFUNC_PREFIX void CGEN_LIBFUNC_CALL KB(TD1 *Ind1);			/* Output */

#ifdef __cplusplus
} // extern "C"
#endif

