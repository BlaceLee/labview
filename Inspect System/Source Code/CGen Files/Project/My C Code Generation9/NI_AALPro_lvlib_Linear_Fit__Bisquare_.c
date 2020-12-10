/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: NI_AALPro.lvlib:Linear Fit (Bisquare).vi
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\Analysis\6fits.llb\Linear Fit (Bisquare).vi
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
struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__heap { 
	float64 n________________slope_2;
	float64 n_tol_1;
	float64 n________________intercept_2;
	float64 n________________meanErr_2;
	int32 l_________________2;
	int32 l_Constant_3;
	int32 l_Constant_2;
	PDAArrPtr a________________yH_2;
	PDAArrPtr a_Weight_4;
	PDAArrPtr a_X_4;
	PDAArrPtr a_Y_4;
} _DATA_SECTION __NI_AALPro_lvlib_Linear_Fit__Bisquare__heap; /* heap */

static struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__heap _DATA_SECTION *heap = &__NI_AALPro_lvlib_Linear_Fit__Bisquare__heap; /* heap */

struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170_init_ NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170_init_));

struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21_init_ NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21_init_));

struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A_init_ NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A_init_));

struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_ NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_));



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__Bisquare__CleanupLSRs(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__Bisquare__CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__Bisquare__AddVIGlobalConstants(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__Bisquare__AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__Bisquare__InitVIConstantList(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__Bisquare__InitVIConstantList(void) {
}


/****** Block diagram code **********/


float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50 = &NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50 = doubleDataType;
float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B = &NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B = doubleDataType;
int32 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66_init_ = 0 ;
static int32* NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66 = &NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66 = int32DataType;
float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F = &NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F = doubleDataType;
float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__in_3_tol_BD_init_ = 1.0000000000000000000E-4 ;
static DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_3_tol_BD = doubleDataType;
extern eRunStatus NI_AALPro_lvlib_Linear_Fit__Bisquare__Run(
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_3_tol_BD, float64* NI_AALPro_lvlib_Linear_Fit__Bisquare__in_3_tol_BD,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD, PDAArrPtr*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50, float64*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B, float64*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F, float64*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66, int32*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD = (PDAArrPtr)(&NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_);
	PDAArrIncRefCnt(*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD,1);
	NI_AALPro_lvlib_Linear_Fit__Bisquare__InitVIConstantList();
	{
		heap->l_Constant_3 = 50;
		heap->l_Constant_2 = 0;
		if (dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170 == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Y_4, &NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170,1);
		}
		else {
			heap->a_Y_4 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170, &heap->a_Y_4)) {
				CGenErr();
			}
		}
		if (dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21 == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_X_4, &NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21,1);
		}
		else {
			heap->a_X_4 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21, &heap->a_X_4)) {
				CGenErr();
			}
		}
		if (dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Weight_4, &NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A,1);
		}
		else {
			heap->a_Weight_4 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A, &heap->a_Weight_4)) {
				CGenErr();
			}
		}
		heap->n_tol_1 = *NI_AALPro_lvlib_Linear_Fit__Bisquare__in_3_tol_BD;
/* Call Library Node */
		{
			int32 	BiLinearFit_head(
			void* ,
			void* ,
			void* ,
			double ,
			void* ,
			void* ,
			void* ,
			void* ,
			int32 );
			int32 arg0;
			void* arg1;
			void* arg2;
			void* arg3;
			double arg4;
			double arg5;
			double arg6;
			double arg7;
			int32 arg8;
			int32 arg9;
			arg1 = GetArrayHandle(heap->a_Y_4, doubleDataType, 1);
			if (!arg1) {
				CGenErr();
			}
			arg2 = GetArrayHandle(heap->a_X_4, doubleDataType, 1);
			if (!arg2) {
				CGenErr();
			}
			arg3 = GetArrayHandle(heap->a_Weight_4, doubleDataType, 1);
			if (!arg3) {
				CGenErr();
			}
			arg4 = heap->n_tol_1;
			arg5 = 0.0;
			arg6 = 0.0;
			arg7 = 0.0;
			arg8 = heap->l_Constant_3;
			arg9 = heap->l_Constant_2;
			arg0 = 
			BiLinearFit_head(
			arg1,
			arg2,
			arg3,
			arg4,
			(void*)&arg5,
			(void*)&arg6,
			(void*)&arg7,
			(void*)&arg8,
			arg9
			);
			heap->l_________________2 = arg0;
			heap->a________________yH_2 = PDAArrCreateFromHandle( arg1, doubleDataType, (int32)1 );
			heap->n________________slope_2 = arg5;
			heap->n________________intercept_2 = arg6;
			heap->n________________meanErr_2 = arg7;
			PDAArrFreeDataHandle(arg1, heap->a_Y_4);
	if ((heap->a_Y_4) && ((heap->a_Y_4)->refcnt > 0)) {
				if (((heap->a_Y_4)->refcnt == 1) && ((heap->a_Y_4)->staticArray == false)) {
					(heap->a_Y_4)->refcnt--;
					MemHandleFree( heap->a_Y_4 );
					heap->a_Y_4=NULL;
				}
				else
				 	PDAArrFree(heap->a_Y_4);
			}
			PDAArrFreeDataHandle(arg2, heap->a_X_4);
	if ((heap->a_X_4) && ((heap->a_X_4)->refcnt > 0)) {
				if (((heap->a_X_4)->refcnt == 1) && ((heap->a_X_4)->staticArray == false)) {
					(heap->a_X_4)->refcnt--;
					MemHandleFree( heap->a_X_4 );
					heap->a_X_4=NULL;
				}
				else
				 	PDAArrFree(heap->a_X_4);
			}
			PDAArrFreeDataHandle(arg3, heap->a_Weight_4);
	if ((heap->a_Weight_4) && ((heap->a_Weight_4)->refcnt > 0)) {
				if (((heap->a_Weight_4)->refcnt == 1) && ((heap->a_Weight_4)->staticArray == false)) {
					(heap->a_Weight_4)->refcnt--;
					MemHandleFree( heap->a_Weight_4 );
					heap->a_Weight_4=NULL;
				}
				else
				 	PDAArrFree(heap->a_Weight_4);
			}
		}
		*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66 = heap->l_________________2;
		PDAArrFree(*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD);
		if (heap->a________________yH_2 && (heap->a________________yH_2->datatype == (doubleDataType))) {
			*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD = PDAArrCopyOnModify(heap->a________________yH_2);
		} else 
		{
			*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD), ArrayDataTypeNDims(dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD));
			if (!PDAArrSet(heap->a________________yH_2,NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD)) {
				CGenErr();
			}
			PDAArrFree(heap->a________________yH_2);
		}
		*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50 = heap->n________________slope_2;
		*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B = heap->n________________intercept_2;
		*NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F = heap->n________________meanErr_2;
		if (NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170 && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170 );
					NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170);
			}
			NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170 = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170 );
					NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170);
			}
		}
		if (NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21 && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21 );
					NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21);
			}
			NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21 = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21 );
					NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21);
			}
		}
		if (NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A );
					NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A);
			}
			NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A );
					NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A);
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


