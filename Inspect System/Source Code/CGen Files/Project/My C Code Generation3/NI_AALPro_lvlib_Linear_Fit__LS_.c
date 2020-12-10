/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: NI_AALPro.lvlib:Linear Fit (LS).vi
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\Analysis\6fits.llb\Linear Fit (LS).vi
 *  Generated UI: false
 *  Generated Debug Info: false
 *  Generated Serial Only: true
 *  Generated Stack Variables: false
 *  Generated Guard Code: true
 *  Generated Interrupt Code: false
 *  Generated C Function Calls: true
 *  Generated Integer Only : false
 *  Generated Expression Folding : true
 *  Generated memory model: dynamic
*****************************************************************************************/
#include "LVCGenIncludes.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _NI_AALPro_lvlib_Linear_Fit__LS__heap { 
	float64 n________________intercept;
	float64 n________________slope;
	float64 n________________meanErr;
	int32 l________________;
	PDAArrPtr a_Weight_2;
	PDAArrPtr a_X_2;
	PDAArrPtr a_Y_2;
	PDAArrPtr a________________yH;
} _DATA_SECTION __NI_AALPro_lvlib_Linear_Fit__LS__heap; /* heap */

static struct _NI_AALPro_lvlib_Linear_Fit__LS__heap _DATA_SECTION *heap = &__NI_AALPro_lvlib_Linear_Fit__LS__heap; /* heap */

struct _NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122_init_ NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122_init_));

struct _NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E_init_ NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E_init_));

struct _NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_ NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_));

struct _NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F_init_ NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F_init_));



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LS__CleanupLSRs(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LS__CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LS__AddVIGlobalConstants(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LS__AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LS__InitVIConstantList(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LS__InitVIConstantList(void) {
}


/****** Block diagram code **********/


float64 NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56 = &NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56 = doubleDataType;
float64 NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C = &NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C = doubleDataType;
int32 NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E_init_ = 0 ;
static int32* NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E = &NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E = int32DataType;
float64 NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36 = &NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36 = doubleDataType;
extern eRunStatus NI_AALPro_lvlib_Linear_Fit__LS__Run(
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17, PDAArrPtr*  NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56, float64*  NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C, float64*  NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36, float64*  NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E, int32*  NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17 = (PDAArrPtr)(&NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_);
	PDAArrIncRefCnt(*NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17,1);
	NI_AALPro_lvlib_Linear_Fit__LS__InitVIConstantList();
	{
		if (dtNI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122 == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Y_2, &NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122,1);
		}
		else {
			heap->a_Y_2 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122, &heap->a_Y_2)) {
				CGenErr();
			}
		}
		if (dtNI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_X_2, &NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E,1);
		}
		else {
			heap->a_X_2 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E, &heap->a_X_2)) {
				CGenErr();
			}
		}
		if (dtNI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Weight_2, &NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F,1);
		}
		else {
			heap->a_Weight_2 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F, &heap->a_Weight_2)) {
				CGenErr();
			}
		}
/* Call Library Node */
		{
			int32 	LinFit_head(
			void* ,
			void* ,
			void* ,
			void* ,
			void* ,
			void* );
			int32 arg0;
			void* arg1;
			void* arg2;
			void* arg3;
			double arg4;
			double arg5;
			double arg6;
			arg1 = GetArrayHandle(heap->a_Y_2, doubleDataType, 1);
			if (!arg1) {
				CGenErr();
			}
			arg2 = GetArrayHandle(heap->a_X_2, doubleDataType, 1);
			if (!arg2) {
				CGenErr();
			}
			arg3 = GetArrayHandle(heap->a_Weight_2, doubleDataType, 1);
			if (!arg3) {
				CGenErr();
			}
			arg4 = 0.0;
			arg5 = 0.0;
			arg6 = 0.0;
			arg0 = 
			LinFit_head(
			arg1,
			arg2,
			arg3,
			(void*)&arg4,
			(void*)&arg5,
			(void*)&arg6
			);
			heap->l________________ = arg0;
			heap->a________________yH = PDAArrCreateFromHandle( arg1, doubleDataType, (int32)1 );
			heap->n________________slope = arg4;
			heap->n________________intercept = arg5;
			heap->n________________meanErr = arg6;
			PDAArrFreeDataHandle(arg1, heap->a_Y_2);
	if ((heap->a_Y_2) && ((heap->a_Y_2)->refcnt > 0)) {
				if (((heap->a_Y_2)->refcnt == 1) && ((heap->a_Y_2)->staticArray == false)) {
					(heap->a_Y_2)->refcnt--;
					MemHandleFree( heap->a_Y_2 );
					heap->a_Y_2=NULL;
				}
				else
				 	PDAArrFree(heap->a_Y_2);
			}
			PDAArrFreeDataHandle(arg2, heap->a_X_2);
	if ((heap->a_X_2) && ((heap->a_X_2)->refcnt > 0)) {
				if (((heap->a_X_2)->refcnt == 1) && ((heap->a_X_2)->staticArray == false)) {
					(heap->a_X_2)->refcnt--;
					MemHandleFree( heap->a_X_2 );
					heap->a_X_2=NULL;
				}
				else
				 	PDAArrFree(heap->a_X_2);
			}
			PDAArrFreeDataHandle(arg3, heap->a_Weight_2);
	if ((heap->a_Weight_2) && ((heap->a_Weight_2)->refcnt > 0)) {
				if (((heap->a_Weight_2)->refcnt == 1) && ((heap->a_Weight_2)->staticArray == false)) {
					(heap->a_Weight_2)->refcnt--;
					MemHandleFree( heap->a_Weight_2 );
					heap->a_Weight_2=NULL;
				}
				else
				 	PDAArrFree(heap->a_Weight_2);
			}
		}
		*NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E = heap->l________________;
		PDAArrFree(*NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17);
		if (heap->a________________yH && (heap->a________________yH->datatype == (doubleDataType))) {
			*NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17 = PDAArrCopyOnModify(heap->a________________yH);
		} else 
		{
			*NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17 = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtNI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17), ArrayDataTypeNDims(dtNI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17));
			if (!PDAArrSet(heap->a________________yH,NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17)) {
				CGenErr();
			}
			PDAArrFree(heap->a________________yH);
		}
		*NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56 = heap->n________________slope;
		*NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C = heap->n________________intercept;
		*NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36 = heap->n________________meanErr;
		if (NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122 && ((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122 );
					NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122);
			}
			NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122 = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122 );
					NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122);
			}
		}
		if (NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E && ((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E );
					NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E);
			}
			NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E );
					NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E);
			}
		}
		if (NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F && ((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F );
					NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F);
			}
			NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F );
					NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F);
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


