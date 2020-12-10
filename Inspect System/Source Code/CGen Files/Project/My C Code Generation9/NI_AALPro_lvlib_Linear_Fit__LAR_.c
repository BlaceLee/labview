/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: NI_AALPro.lvlib:Linear Fit (LAR).vi
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\Analysis\6fits.llb\Linear Fit (LAR).vi
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
struct _NI_AALPro_lvlib_Linear_Fit__LAR__heap { 
	float64 n_absTol;
	float64 n________________meanErr_1;
	float64 n_tol;
	float64 n________________slope_1;
	float64 n________________intercept_1;
	int32 l_Constant;
	int32 l_Constant_1;
	int32 l_________________1;
	PDAArrPtr a________________yH_1;
	PDAArrPtr a_Weight_3;
	PDAArrPtr a_X_3;
	PDAArrPtr a_Y_3;
} _DATA_SECTION __NI_AALPro_lvlib_Linear_Fit__LAR__heap; /* heap */

static struct _NI_AALPro_lvlib_Linear_Fit__LAR__heap _DATA_SECTION *heap = &__NI_AALPro_lvlib_Linear_Fit__LAR__heap; /* heap */

struct _NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D_init_ NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D_init_));

struct _NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E_init_ NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E_init_));

struct _NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_ NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_));

struct _NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA_init_ NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA_init_));



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LAR__CleanupLSRs(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LAR__CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LAR__AddVIGlobalConstants(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LAR__AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LAR__InitVIConstantList(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit__LAR__InitVIConstantList(void) {
}


/****** Block diagram code **********/


float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56 = &NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56 = doubleDataType;
float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C = &NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C = doubleDataType;
int32 NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E_init_ = 0 ;
static int32* NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E = &NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E = int32DataType;
float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36 = &NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36 = doubleDataType;
float64 NI_AALPro_lvlib_Linear_Fit__LAR__in_3_tol_A7_init_ = 1.0000000000000000000E-4 ;
static DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_3_tol_A7 = doubleDataType;
extern eRunStatus NI_AALPro_lvlib_Linear_Fit__LAR__Run(
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_3_tol_A7, float64* NI_AALPro_lvlib_Linear_Fit__LAR__in_3_tol_A7,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17, PDAArrPtr*  NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56, float64*  NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C, float64*  NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36, float64*  NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E, int32*  NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17 = (PDAArrPtr)(&NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_);
	PDAArrIncRefCnt(*NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17,1);
	NI_AALPro_lvlib_Linear_Fit__LAR__InitVIConstantList();
	{
		heap->l_Constant_1 = 50;
		heap->n_absTol = 9.9999999999999998000E-13;
		heap->l_Constant = 0;
		if (dtNI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Y_3, &NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D,1);
		}
		else {
			heap->a_Y_3 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D, &heap->a_Y_3)) {
				CGenErr();
			}
		}
		if (dtNI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_X_3, &NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E,1);
		}
		else {
			heap->a_X_3 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E, &heap->a_X_3)) {
				CGenErr();
			}
		}
		if (dtNI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Weight_3, &NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA,1);
		}
		else {
			heap->a_Weight_3 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA, &heap->a_Weight_3)) {
				CGenErr();
			}
		}
		heap->n_tol = *NI_AALPro_lvlib_Linear_Fit__LAR__in_3_tol_A7;
/* Call Library Node */
		{
			int32 	LARLinearFit_head(
			void* ,
			void* ,
			void* ,
			double ,
			void* ,
			void* ,
			void* ,
			void* ,
			double ,
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
			double arg9;
			int32 arg10;
			arg1 = GetArrayHandle(heap->a_Y_3, doubleDataType, 1);
			if (!arg1) {
				CGenErr();
			}
			arg2 = GetArrayHandle(heap->a_X_3, doubleDataType, 1);
			if (!arg2) {
				CGenErr();
			}
			arg3 = GetArrayHandle(heap->a_Weight_3, doubleDataType, 1);
			if (!arg3) {
				CGenErr();
			}
			arg4 = heap->n_tol;
			arg5 = 0.0;
			arg6 = 0.0;
			arg7 = 0.0;
			arg8 = heap->l_Constant_1;
			arg9 = heap->n_absTol;
			arg10 = heap->l_Constant;
			arg0 = 
			LARLinearFit_head(
			arg1,
			arg2,
			arg3,
			arg4,
			(void*)&arg5,
			(void*)&arg6,
			(void*)&arg7,
			(void*)&arg8,
			arg9,
			arg10
			);
			heap->l_________________1 = arg0;
			heap->a________________yH_1 = PDAArrCreateFromHandle( arg1, doubleDataType, (int32)1 );
			heap->n________________slope_1 = arg5;
			heap->n________________intercept_1 = arg6;
			heap->n________________meanErr_1 = arg7;
			PDAArrFreeDataHandle(arg1, heap->a_Y_3);
	if ((heap->a_Y_3) && ((heap->a_Y_3)->refcnt > 0)) {
				if (((heap->a_Y_3)->refcnt == 1) && ((heap->a_Y_3)->staticArray == false)) {
					(heap->a_Y_3)->refcnt--;
					MemHandleFree( heap->a_Y_3 );
					heap->a_Y_3=NULL;
				}
				else
				 	PDAArrFree(heap->a_Y_3);
			}
			PDAArrFreeDataHandle(arg2, heap->a_X_3);
	if ((heap->a_X_3) && ((heap->a_X_3)->refcnt > 0)) {
				if (((heap->a_X_3)->refcnt == 1) && ((heap->a_X_3)->staticArray == false)) {
					(heap->a_X_3)->refcnt--;
					MemHandleFree( heap->a_X_3 );
					heap->a_X_3=NULL;
				}
				else
				 	PDAArrFree(heap->a_X_3);
			}
			PDAArrFreeDataHandle(arg3, heap->a_Weight_3);
	if ((heap->a_Weight_3) && ((heap->a_Weight_3)->refcnt > 0)) {
				if (((heap->a_Weight_3)->refcnt == 1) && ((heap->a_Weight_3)->staticArray == false)) {
					(heap->a_Weight_3)->refcnt--;
					MemHandleFree( heap->a_Weight_3 );
					heap->a_Weight_3=NULL;
				}
				else
				 	PDAArrFree(heap->a_Weight_3);
			}
		}
		*NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E = heap->l_________________1;
		PDAArrFree(*NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17);
		if (heap->a________________yH_1 && (heap->a________________yH_1->datatype == (doubleDataType))) {
			*NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17 = PDAArrCopyOnModify(heap->a________________yH_1);
		} else 
		{
			*NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17 = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtNI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17), ArrayDataTypeNDims(dtNI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17));
			if (!PDAArrSet(heap->a________________yH_1,NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17)) {
				CGenErr();
			}
			PDAArrFree(heap->a________________yH_1);
		}
		*NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56 = heap->n________________slope_1;
		*NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C = heap->n________________intercept_1;
		*NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36 = heap->n________________meanErr_1;
		if (NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D );
					NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D);
			}
			NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D );
					NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D);
			}
		}
		if (NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E );
					NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E);
			}
			NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E );
					NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E);
			}
		}
		if (NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA );
					NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA);
			}
			NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA );
					NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA);
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


