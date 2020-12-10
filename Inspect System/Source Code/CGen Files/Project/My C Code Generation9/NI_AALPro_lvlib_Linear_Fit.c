/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: NI_AALPro.lvlib:Linear Fit.vi
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\Analysis\6fits.llb\Linear Fit.vi
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
struct _NI_AALPro_lvlib_Linear_Fit_heap { 
	float64 n__________CT_17;
	float64 n_Constant;
	float64 n_Constant_1;
	float64 n__________CT_18;
	float64 n__________CT_19;
	float64 n_Constant_2;
	float64 n_Constant_3;
	float64 n__________CT_8;
	float64 n__________CT_9;
	float64 n__________CT_10;
	float64 n_tolerance_1;
	float64 n__________CT_25;
	float64 n__________CT_11;
	float64 n__________CT_12;
	float64 n__________CT_13;
	float64 n__________CT_24;
	float64 n__________CT_23;
	float64 n________________slope_min;
	float64 n________________intercept_min;
	float64 n________________slope_max;
	float64 n________________intercept_max;
	int32 l__________CT_7;
	int32 l__________CT_2;
	int32 l_maxIter;
	int32 l__________CT_5;
	int32 l_maxIter_1;
	int32 l__________CT_3;
	cl_E0000* c_parameter_bounds_2;
	cl_E0000* c_parameter_bounds_CT;
	cl_E0000* c_parameter_bounds;
	VoidHand Args7F_1;  
	PDAArrPtr a________x___y_;
	PDAArrPtr a_X_1;
	PDAArrPtr a_____________________2;
	PDAArrPtr a_____________________3;
	PDAArrPtr a_X_CT_4;
	PDAArrPtr a_Y_CT_4;
	PDAArrPtr a________x___y__1;
	PDAArrPtr a__________CT_7;
	PDAArrPtr a__________CT_5;
	PDAArrPtr a__________CT_3;
	PDAArrPtr a__________CT_2;
	PDAArrPtr a________x___y__2;
	PDAArrPtr a_Weight_1;
	PDAArrPtr a_______________________________1;
	PDAArrPtr a______________________________;
	PDAArrPtr a________x___y__3;
	PDAArrPtr a_Y_1;
	uInt16 n_method_1;
	uInt16 n_method_CS_1;
	Boolean b_______________________3;
	Boolean b_______________________4;
	Boolean b_______________2;
	Boolean b_______________________5;
	Boolean b________x___y_;
	Boolean b________x___y__CS;
	Boolean b_______________________2;
	Boolean b_______________________1;
	Boolean b______________________;
	Boolean b_______________CS;
	Boolean b_______________1;
	Boolean b______________;
} _DATA_SECTION __NI_AALPro_lvlib_Linear_Fit_heap; /* heap */

static struct _NI_AALPro_lvlib_Linear_Fit_heap _DATA_SECTION *heap = &__NI_AALPro_lvlib_Linear_Fit_heap; /* heap */

struct _tNI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeap {
	uInt8	refCnt;
	cl_E0000*	i47F;
} _DATA_SECTION __NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeap;
static struct _tNI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeap _DATA_SECTION *NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr = &__NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeap;

struct _NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_ NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_));

struct _NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB_init_ NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit_in_1_X_1BB_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB_init_));

struct _NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E_init_ NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit_in_0_Y_21E_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E_init_));

struct _NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_ NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_));

_DATA_SECTION  cl_E0000 NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_ = 
{1, 1, 0.0, 0.0, 0.0, 0.0};

_DATA_SECTION static  cl_E0000 g_cluster_2 = 
{1, 1, 0.0, 0.0, 0.0, 0.0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit_CleanupLSRs(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit_AddVIGlobalConstants(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit_AddVIGlobalConstants(void) {
	MemSet(NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr,sizeof(*(NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit_CleanupVIGlobalConstants(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit_CleanupVIGlobalConstants(void) {
	(NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit_InitVIConstantList(void);
void _TEXT_SECTION NI_AALPro_lvlib_Linear_Fit_InitVIConstantList(void) {
	(NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


float64 NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F = &NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F = doubleDataType;
float64 NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F = &NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit_out_1_slope_13F = doubleDataType;
float64 NI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F_init_ = 1.0000000000000000000E-4 ;
static DataType dtNI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F = doubleDataType;
uInt16 NI_AALPro_lvlib_Linear_Fit_in_4_method_36B = 0 ;
static DataType dtNI_AALPro_lvlib_Linear_Fit_in_4_method_36B = uInt16DataType;
int32 NI_AALPro_lvlib_Linear_Fit_out_4_error_B5_init_ = 0 ;
static int32* NI_AALPro_lvlib_Linear_Fit_out_4_error_B5 = &NI_AALPro_lvlib_Linear_Fit_out_4_error_B5_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit_out_4_error_B5 = int32DataType;
float64 NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3 = &NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3_init_;
static DataType dtNI_AALPro_lvlib_Linear_Fit_out_3_residue_D3 = doubleDataType;
extern eRunStatus NI_AALPro_lvlib_Linear_Fit_Run(
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_0_Y_21E, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_1_X_1BB, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_2_Weight_283, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F, float64* NI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_4_method_36B, uInt16  NI_AALPro_lvlib_Linear_Fit_in_4_method_36B,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3, cl_E0000*  NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A, PDAArrPtr*  NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_1_slope_13F, float64*  NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F, float64*  NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_3_residue_D3, float64*  NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_4_error_B5, int32*  NI_AALPro_lvlib_Linear_Fit_out_4_error_B5	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	{
		NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_.el_0 = -dInf.d;
		NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_.el_1 = dInf.d;
		NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_.el_2 = -dInf.d;
		NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_.el_3 = dInf.d;
		g_cluster_2.el_0 = -dInf.d;
		g_cluster_2.el_1 = dInf.d;
		g_cluster_2.el_2 = -dInf.d;
		g_cluster_2.el_3 = dInf.d;
	}
	*NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A = (PDAArrPtr)(&NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_);
	PDAArrIncRefCnt(*NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A,1);
	NI_AALPro_lvlib_Linear_Fit_InitVIConstantList();
	{
		if ( !NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr->i47F ) {
			{
				NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr->i47F = (cl_E0000*)&g_cluster_2;
			}
		}
		PDAClusterIncRefCnt(&NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr->i47F,0xE0000 | BigClusterDataType,1);
		heap->c_parameter_bounds_2 = NI_AALPro_lvlib_Linear_Fit_GlobalConstantsHeapPtr->i47F;
		/* Cluster Inc Ref Count:  BDConst - alloc type*/
		if(heap->c_parameter_bounds_2) heap->c_parameter_bounds_2->refcnt += 1;
		heap->n_Constant_3 = Inf;
		heap->n_Constant_2 = -Inf;
		heap->n_Constant = Inf;
		heap->n_Constant_1 = -Inf;
		heap->c_parameter_bounds = (cl_E0000*)NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3;
		PDAClusterIncRefCnt(&NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3,0xE0000 | BigClusterDataType,1);
		/* Cluster Inc Ref Count:  FPTerm*/
		if(heap->c_parameter_bounds) heap->c_parameter_bounds->refcnt += 1;
		/**/
		/* 等于？ */
		/**/
		{
			int32 lOut;
			if (!PDAClusterBinopAccum( &(heap->c_parameter_bounds), 0xE0000 | BigClusterDataType, &(heap->c_parameter_bounds_2), 0xE0000 | BigClusterDataType, opEq, &lOut, NULL, NULL, NULL)){
				CGenErr();
			}
			heap->b________x___y_ = (Boolean)lOut;
		}
	/* Free Cluster heap->c_parameter_bounds_2*/
		PDAClusterFree( &heap->c_parameter_bounds_2, 0xE0000 | BigClusterDataType );
	/* Free Cluster heap->c_parameter_bounds*/
		PDAClusterFree( &heap->c_parameter_bounds, 0xE0000 | BigClusterDataType );
		if (dtNI_AALPro_lvlib_Linear_Fit_in_0_Y_21E == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Y_1, &NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E,1);
		}
		else {
			heap->a_Y_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E, &heap->a_Y_1)) {
				CGenErr();
			}
		}
		PDAArrIncRefCnt(heap->a_Y_1, (uInt16)3); /* FPTerm */
		/**/
		/* 等于？ */
		/**/
		{
			Boolean bNullInput1=false,bNullInput2=false;
			if(!heap->a_Y_1) {
				heap->a_Y_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
				bNullInput2=true;
			}
			if (!PDAArrBinop( &(heap->n_Constant_2), doubleDataType, &(heap->a_Y_1), 0x40000 | ArrayDataType, opEq, &(heap->a________x___y__2), 0x100000 | ArrayDataType, NULL)){
				CGenErr();
			}
	if ((heap->a_Y_1) && ((heap->a_Y_1)->refcnt > 0)) {
				if (((heap->a_Y_1)->refcnt == 1) && ((heap->a_Y_1)->staticArray == false)) {
					(heap->a_Y_1)->refcnt--;
					MemHandleFree( heap->a_Y_1 );
					heap->a_Y_1=NULL;
				}
				else
				 	PDAArrFree(heap->a_Y_1);
			}
			if (bNullInput2) {
				heap->a_Y_1 = NULL;
			}
		}
		/**/
		/* 数组元素或操作 */
		/**/
		heap->b_______________________4 = PDAArrOrElts(heap->a________x___y__2);
		/**/
		/* 等于？ */
		/**/
		{
			Boolean bNullInput1=false,bNullInput2=false;
			if(!heap->a_Y_1) {
				heap->a_Y_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
				bNullInput2=true;
			}
			if (!PDAArrBinop( &(heap->n_Constant_3), doubleDataType, &(heap->a_Y_1), 0x40000 | ArrayDataType, opEq, &(heap->a________x___y__3), 0x100000 | ArrayDataType, NULL)){
				CGenErr();
			}
	if ((heap->a_Y_1) && ((heap->a_Y_1)->refcnt > 0)) {
				if (((heap->a_Y_1)->refcnt == 1) && ((heap->a_Y_1)->staticArray == false)) {
					(heap->a_Y_1)->refcnt--;
					MemHandleFree( heap->a_Y_1 );
					heap->a_Y_1=NULL;
				}
				else
				 	PDAArrFree(heap->a_Y_1);
			}
			if (bNullInput2) {
				heap->a_Y_1 = NULL;
			}
		}
		/**/
		/* 数组元素或操作 */
		/**/
		heap->b_______________________5 = PDAArrOrElts(heap->a________x___y__3);
		/**/
		/* 非法数字/路径/引用句柄？ */
		/**/
		if (!(PDAArrUnop( heap->a_Y_1, 0x40000 | ArrayDataType, opIsNan, &(heap->a_______________________________1), 0x100000 | ArrayDataType, NULL))){
			CGenErr();
		}
	if ((heap->a_Y_1) && ((heap->a_Y_1)->refcnt > 0)) {
			if (((heap->a_Y_1)->refcnt == 1) && ((heap->a_Y_1)->staticArray == false)) {
				(heap->a_Y_1)->refcnt--;
				MemHandleFree( heap->a_Y_1 );
				heap->a_Y_1=NULL;
			}
			else
			 	PDAArrFree(heap->a_Y_1);
		}
		/**/
		/* 数组元素或操作 */
		/**/
		heap->b_______________________3 = PDAArrOrElts(heap->a_______________________________1);
		/* Begin CpdArith */
		heap->b______________ = heap->b_______________________3 | heap->b_______________________5;
		heap->b______________ = heap->b______________ | heap->b_______________________4;
		/* End CpdArith */
		if (dtNI_AALPro_lvlib_Linear_Fit_in_1_X_1BB == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_X_1, &NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB,1);
		}
		else {
			heap->a_X_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB, &heap->a_X_1)) {
				CGenErr();
			}
		}
		PDAArrIncRefCnt(heap->a_X_1, (uInt16)3); /* FPTerm */
		/**/
		/* 等于？ */
		/**/
		{
			Boolean bNullInput1=false,bNullInput2=false;
			if(!heap->a_X_1) {
				heap->a_X_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
				bNullInput2=true;
			}
			if (!PDAArrBinop( &(heap->n_Constant_1), doubleDataType, &(heap->a_X_1), 0x40000 | ArrayDataType, opEq, &(heap->a________x___y__1), 0x100000 | ArrayDataType, NULL)){
				CGenErr();
			}
	if ((heap->a_X_1) && ((heap->a_X_1)->refcnt > 0)) {
				if (((heap->a_X_1)->refcnt == 1) && ((heap->a_X_1)->staticArray == false)) {
					(heap->a_X_1)->refcnt--;
					MemHandleFree( heap->a_X_1 );
					heap->a_X_1=NULL;
				}
				else
				 	PDAArrFree(heap->a_X_1);
			}
			if (bNullInput2) {
				heap->a_X_1 = NULL;
			}
		}
		/**/
		/* 数组元素或操作 */
		/**/
		heap->b_______________________1 = PDAArrOrElts(heap->a________x___y__1);
		/**/
		/* 等于？ */
		/**/
		{
			Boolean bNullInput1=false,bNullInput2=false;
			if(!heap->a_X_1) {
				heap->a_X_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
				bNullInput2=true;
			}
			if (!PDAArrBinop( &(heap->n_Constant), doubleDataType, &(heap->a_X_1), 0x40000 | ArrayDataType, opEq, &(heap->a________x___y_), 0x100000 | ArrayDataType, NULL)){
				CGenErr();
			}
	if ((heap->a_X_1) && ((heap->a_X_1)->refcnt > 0)) {
				if (((heap->a_X_1)->refcnt == 1) && ((heap->a_X_1)->staticArray == false)) {
					(heap->a_X_1)->refcnt--;
					MemHandleFree( heap->a_X_1 );
					heap->a_X_1=NULL;
				}
				else
				 	PDAArrFree(heap->a_X_1);
			}
			if (bNullInput2) {
				heap->a_X_1 = NULL;
			}
		}
		/**/
		/* 数组元素或操作 */
		/**/
		heap->b_______________________2 = PDAArrOrElts(heap->a________x___y_);
		/**/
		/* 非法数字/路径/引用句柄？ */
		/**/
		if (!(PDAArrUnop( heap->a_X_1, 0x40000 | ArrayDataType, opIsNan, &(heap->a______________________________), 0x100000 | ArrayDataType, NULL))){
			CGenErr();
		}
	if ((heap->a_X_1) && ((heap->a_X_1)->refcnt > 0)) {
			if (((heap->a_X_1)->refcnt == 1) && ((heap->a_X_1)->staticArray == false)) {
				(heap->a_X_1)->refcnt--;
				MemHandleFree( heap->a_X_1 );
				heap->a_X_1=NULL;
			}
			else
			 	PDAArrFree(heap->a_X_1);
		}
		/**/
		/* 数组元素或操作 */
		/**/
		heap->b______________________ = PDAArrOrElts(heap->a______________________________);
		/* Begin CpdArith */
		heap->b_______________1 = heap->b______________________ | heap->b_______________________2;
		heap->b_______________1 = heap->b_______________1 | heap->b_______________________1;
		/* End CpdArith */
		/* Begin CpdArith */
		heap->b_______________2 = heap->b_______________1 | heap->b______________;
		/* End CpdArith */
		heap->n_tolerance_1 = *NI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F;
		heap->n_method_1 =NI_AALPro_lvlib_Linear_Fit_in_4_method_36B;
		if (dtNI_AALPro_lvlib_Linear_Fit_in_2_Weight_283 == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Weight_1, &NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283,1);
		}
		else {
			heap->a_Weight_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283, &heap->a_Weight_1)) {
				CGenErr();
			}
		}
		{ /* Select */
			heap->b_______________CS = heap->b_______________2;
			heap->c_parameter_bounds_CT = heap->c_parameter_bounds;
			heap->a_Y_CT_4 = heap->a_Y_1;
			heap->a_X_CT_4 = heap->a_X_1;
			/* begin case */
			if ( heap->b_______________CS ) {
				{
					heap->n__________CT_10 = NaN;
					/* Free unwired input select tunnel. */
	/* Free Cluster heap->c_parameter_bounds_CT*/
					PDAClusterFree( &heap->c_parameter_bounds_CT, 0xE0000 | BigClusterDataType );
					/* Free unwired input select tunnel. */
	if ((heap->a_Y_CT_4) && ((heap->a_Y_CT_4)->refcnt > 0)) {
						if (((heap->a_Y_CT_4)->refcnt == 1) && ((heap->a_Y_CT_4)->staticArray == false)) {
							(heap->a_Y_CT_4)->refcnt--;
							MemHandleFree( heap->a_Y_CT_4 );
							heap->a_Y_CT_4=NULL;
						}
						else
						 	PDAArrFree(heap->a_Y_CT_4);
					}
					/* Free unwired input select tunnel. */
	if ((heap->a_X_CT_4) && ((heap->a_X_CT_4)->refcnt > 0)) {
						if (((heap->a_X_CT_4)->refcnt == 1) && ((heap->a_X_CT_4)->staticArray == false)) {
							(heap->a_X_CT_4)->refcnt--;
							MemHandleFree( heap->a_X_CT_4 );
							heap->a_X_CT_4=NULL;
						}
						else
						 	PDAArrFree(heap->a_X_CT_4);
					}
					/* Free unwired input select tunnel. */
	if ((heap->a_Weight_1) && ((heap->a_Weight_1)->refcnt > 0)) {
						if (((heap->a_Weight_1)->refcnt == 1) && ((heap->a_Weight_1)->staticArray == false)) {
							(heap->a_Weight_1)->refcnt--;
							MemHandleFree( heap->a_Weight_1 );
							heap->a_Weight_1=NULL;
						}
						else
						 	PDAArrFree(heap->a_Weight_1);
					}
					heap->l__________CT_2 = -20068;
					heap->n__________CT_9 = heap->n__________CT_10;
					heap->n__________CT_8 = heap->n__________CT_10;
					heap->a__________CT_2 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
				}
			} /* end case */
			/* begin case */
			else {
				{
					{ /* Select */
						heap->b________x___y__CS = heap->b________x___y_;
						/* begin case */
						if ( heap->b________x___y__CS ) {
							{
								/* Free unwired input select tunnel. */
	/* Free Cluster heap->c_parameter_bounds_CT*/
								PDAClusterFree( &heap->c_parameter_bounds_CT, 0xE0000 | BigClusterDataType );
								{
									PDAArrPtr inputParam0 = NULL;
									PDAArrPtr inputParam1 = NULL;
									PDAArrPtr inputParam2 = NULL;
									extern PDAArrPtr pNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_;
									PDAArrPtr NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_ = pNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_;
									extern float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56_init_;
									float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56 = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56_init_;
									extern float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C_init_;
									float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C_init_;
									extern float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36_init_;
									float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36 = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36_init_;
									extern int32 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E_init_;
									int32 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E_init_;
									inputParam0 = PDAVHCopyOnModify(heap->a_Y_CT_4,ArrayDataType);
									inputParam1 = PDAVHCopyOnModify(heap->a_X_CT_4,ArrayDataType);
									inputParam2 = PDAVHCopyOnModify(heap->a_Weight_1,ArrayDataType);
									heap->a__________CT_2 = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_;
									heap->n__________CT_10 = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56_init_;
									heap->n__________CT_9 = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C_init_;
									heap->n__________CT_8 = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36_init_;
									heap->l__________CT_2 = NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E_init_;
									if ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_Run( 	0x40000 | ArrayDataType, inputParam0,
									0x40000 | ArrayDataType, inputParam1,
									0x40000 | ArrayDataType, inputParam2,
									doubleDataType, &heap->n_tolerance_1,
									uInt16DataType, heap->n_method_1,
									0x40000 | ArrayDataType, &heap->a__________CT_2,
									doubleDataType, &heap->n__________CT_10,
									doubleDataType, &heap->n__________CT_9,
									doubleDataType, &heap->n__________CT_8,
									int32DataType, &heap->l__________CT_2	)) == eFail) CGenErr();
								}
							}
						} /* end case */
						/* begin case */
						else {
							{
/* Unbundle by name */
								{
									cl_E0000* cl_007;
									if (!heap->c_parameter_bounds_CT) heap->c_parameter_bounds_CT = PDAClusterNewEmpty( 0xE0000 | BigClusterDataType );
									cl_007 = (cl_E0000*)heap->c_parameter_bounds_CT;
									heap->n________________slope_min = cl_007->el_0;
									heap->n________________intercept_min = cl_007->el_2;
									heap->n________________slope_max = cl_007->el_1;
									heap->n________________intercept_max = cl_007->el_3;
	/* Free Cluster heap->c_parameter_bounds_CT*/
									PDAClusterFree( &heap->c_parameter_bounds_CT, 0xE0000 | BigClusterDataType );
								}
/* Build array */
								{
									ArrDimSize i;
									ArrDimSize dimSize=0;
									heap->a_____________________2 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
									if (!heap->a_____________________2){
										CGenErr();
									}
									dimSize += 1;
									dimSize += 1;
									PDAArrSetDim(heap->a_____________________2, (ArrDimSize)0, dimSize);
									if (!PDAArrAllocData(&heap->a_____________________2)){
										CGenErr();
									}
									i=0;
									if (!PDAArrSetData(heap->a_____________________2, i, &heap->n________________slope_max, doubleDataType)) {
										CGenErr();
									}
									i++;
									if (!PDAArrSetData(heap->a_____________________2, i, &heap->n________________intercept_max, doubleDataType)) {
										CGenErr();
									}
									i++;
								}
/* Build array */
								{
									ArrDimSize i;
									ArrDimSize dimSize=0;
									heap->a_____________________3 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
									if (!heap->a_____________________3){
										CGenErr();
									}
									dimSize += 1;
									dimSize += 1;
									PDAArrSetDim(heap->a_____________________3, (ArrDimSize)0, dimSize);
									if (!PDAArrAllocData(&heap->a_____________________3)){
										CGenErr();
									}
									i=0;
									if (!PDAArrSetData(heap->a_____________________3, i, &heap->n________________slope_min, doubleDataType)) {
										CGenErr();
									}
									i++;
									if (!PDAArrSetData(heap->a_____________________3, i, &heap->n________________intercept_min, doubleDataType)) {
										CGenErr();
									}
									i++;
								}
								{ /* Select */
									heap->n_method_CS_1 = heap->n_method_1;
									switch ( heap->n_method_CS_1 ) {
										/* begin case */
										case 1 : {
											{
												heap->l_maxIter = 50;
/* Call Library Node */
												{
													int32 	BoundLinearFitLAR_head(
													void* ,
													void* ,
													void* ,
													double ,
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
													int32 arg5;
													void* arg6;
													void* arg7;
													double arg8;
													double arg9;
													double arg10;
													arg1 = GetArrayHandle(heap->a_Y_CT_4, doubleDataType, 1);
													if (!arg1) {
														CGenErr();
													}
													arg2 = GetArrayHandle(heap->a_X_CT_4, doubleDataType, 1);
													if (!arg2) {
														CGenErr();
													}
													arg3 = GetArrayHandle(heap->a_Weight_1, doubleDataType, 1);
													if (!arg3) {
														CGenErr();
													}
													arg4 = heap->n_tolerance_1;
													arg5 = heap->l_maxIter;
													arg6 = GetArrayHandle(heap->a_____________________3, doubleDataType, 1);
													if (!arg6) {
														CGenErr();
													}
													arg7 = GetArrayHandle(heap->a_____________________2, doubleDataType, 1);
													if (!arg7) {
														CGenErr();
													}
													arg8 = 0.0;
													arg9 = 0.0;
													arg10 = 0.0;
													arg0 = 
													BoundLinearFitLAR_head(
													arg1,
													arg2,
													arg3,
													arg4,
													(void*)&arg5,
													arg6,
													arg7,
													(void*)&arg8,
													(void*)&arg9,
													(void*)&arg10
													);
													heap->l__________CT_2 = arg0;
													heap->a__________CT_2 = PDAArrCreateFromHandle( arg1, doubleDataType, (int32)1 );
													heap->n__________CT_10 = arg8;
													heap->n__________CT_9 = arg9;
													heap->n__________CT_8 = arg10;
													PDAArrFreeDataHandle(arg1, heap->a_Y_CT_4);
	if ((heap->a_Y_CT_4) && ((heap->a_Y_CT_4)->refcnt > 0)) {
														if (((heap->a_Y_CT_4)->refcnt == 1) && ((heap->a_Y_CT_4)->staticArray == false)) {
															(heap->a_Y_CT_4)->refcnt--;
															MemHandleFree( heap->a_Y_CT_4 );
															heap->a_Y_CT_4=NULL;
														}
														else
														 	PDAArrFree(heap->a_Y_CT_4);
													}
													PDAArrFreeDataHandle(arg2, heap->a_X_CT_4);
	if ((heap->a_X_CT_4) && ((heap->a_X_CT_4)->refcnt > 0)) {
														if (((heap->a_X_CT_4)->refcnt == 1) && ((heap->a_X_CT_4)->staticArray == false)) {
															(heap->a_X_CT_4)->refcnt--;
															MemHandleFree( heap->a_X_CT_4 );
															heap->a_X_CT_4=NULL;
														}
														else
														 	PDAArrFree(heap->a_X_CT_4);
													}
													PDAArrFreeDataHandle(arg3, heap->a_Weight_1);
	if ((heap->a_Weight_1) && ((heap->a_Weight_1)->refcnt > 0)) {
														if (((heap->a_Weight_1)->refcnt == 1) && ((heap->a_Weight_1)->staticArray == false)) {
															(heap->a_Weight_1)->refcnt--;
															MemHandleFree( heap->a_Weight_1 );
															heap->a_Weight_1=NULL;
														}
														else
														 	PDAArrFree(heap->a_Weight_1);
													}
													PDAArrFreeDataHandle(arg6, heap->a_____________________3);
	if ((heap->a_____________________3) && ((heap->a_____________________3)->refcnt > 0)) {
														if (((heap->a_____________________3)->refcnt == 1) && ((heap->a_____________________3)->staticArray == false)) {
															(heap->a_____________________3)->refcnt--;
															MemHandleFree( heap->a_____________________3 );
															heap->a_____________________3=NULL;
														}
														else
														 	PDAArrFree(heap->a_____________________3);
													}
													PDAArrFreeDataHandle(arg7, heap->a_____________________2);
	if ((heap->a_____________________2) && ((heap->a_____________________2)->refcnt > 0)) {
														if (((heap->a_____________________2)->refcnt == 1) && ((heap->a_____________________2)->staticArray == false)) {
															(heap->a_____________________2)->refcnt--;
															MemHandleFree( heap->a_____________________2 );
															heap->a_____________________2=NULL;
														}
														else
														 	PDAArrFree(heap->a_____________________2);
													}
												}
											}
										} /* end case */
										break;
										/* begin case */
										case 2 : {
											{
												heap->l_maxIter_1 = 50;
/* Call Library Node */
												{
													int32 	BoundLinearFitBi_head(
													void* ,
													void* ,
													void* ,
													double ,
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
													int32 arg5;
													void* arg6;
													void* arg7;
													double arg8;
													double arg9;
													double arg10;
													arg1 = GetArrayHandle(heap->a_Y_CT_4, doubleDataType, 1);
													if (!arg1) {
														CGenErr();
													}
													arg2 = GetArrayHandle(heap->a_X_CT_4, doubleDataType, 1);
													if (!arg2) {
														CGenErr();
													}
													arg3 = GetArrayHandle(heap->a_Weight_1, doubleDataType, 1);
													if (!arg3) {
														CGenErr();
													}
													arg4 = heap->n_tolerance_1;
													arg5 = heap->l_maxIter_1;
													arg6 = GetArrayHandle(heap->a_____________________3, doubleDataType, 1);
													if (!arg6) {
														CGenErr();
													}
													arg7 = GetArrayHandle(heap->a_____________________2, doubleDataType, 1);
													if (!arg7) {
														CGenErr();
													}
													arg8 = 0.0;
													arg9 = 0.0;
													arg10 = 0.0;
													arg0 = 
													BoundLinearFitBi_head(
													arg1,
													arg2,
													arg3,
													arg4,
													(void*)&arg5,
													arg6,
													arg7,
													(void*)&arg8,
													(void*)&arg9,
													(void*)&arg10
													);
													heap->l__________CT_2 = arg0;
													heap->a__________CT_2 = PDAArrCreateFromHandle( arg1, doubleDataType, (int32)1 );
													heap->n__________CT_10 = arg8;
													heap->n__________CT_9 = arg9;
													heap->n__________CT_8 = arg10;
													PDAArrFreeDataHandle(arg1, heap->a_Y_CT_4);
	if ((heap->a_Y_CT_4) && ((heap->a_Y_CT_4)->refcnt > 0)) {
														if (((heap->a_Y_CT_4)->refcnt == 1) && ((heap->a_Y_CT_4)->staticArray == false)) {
															(heap->a_Y_CT_4)->refcnt--;
															MemHandleFree( heap->a_Y_CT_4 );
															heap->a_Y_CT_4=NULL;
														}
														else
														 	PDAArrFree(heap->a_Y_CT_4);
													}
													PDAArrFreeDataHandle(arg2, heap->a_X_CT_4);
	if ((heap->a_X_CT_4) && ((heap->a_X_CT_4)->refcnt > 0)) {
														if (((heap->a_X_CT_4)->refcnt == 1) && ((heap->a_X_CT_4)->staticArray == false)) {
															(heap->a_X_CT_4)->refcnt--;
															MemHandleFree( heap->a_X_CT_4 );
															heap->a_X_CT_4=NULL;
														}
														else
														 	PDAArrFree(heap->a_X_CT_4);
													}
													PDAArrFreeDataHandle(arg3, heap->a_Weight_1);
	if ((heap->a_Weight_1) && ((heap->a_Weight_1)->refcnt > 0)) {
														if (((heap->a_Weight_1)->refcnt == 1) && ((heap->a_Weight_1)->staticArray == false)) {
															(heap->a_Weight_1)->refcnt--;
															MemHandleFree( heap->a_Weight_1 );
															heap->a_Weight_1=NULL;
														}
														else
														 	PDAArrFree(heap->a_Weight_1);
													}
													PDAArrFreeDataHandle(arg6, heap->a_____________________3);
	if ((heap->a_____________________3) && ((heap->a_____________________3)->refcnt > 0)) {
														if (((heap->a_____________________3)->refcnt == 1) && ((heap->a_____________________3)->staticArray == false)) {
															(heap->a_____________________3)->refcnt--;
															MemHandleFree( heap->a_____________________3 );
															heap->a_____________________3=NULL;
														}
														else
														 	PDAArrFree(heap->a_____________________3);
													}
													PDAArrFreeDataHandle(arg7, heap->a_____________________2);
	if ((heap->a_____________________2) && ((heap->a_____________________2)->refcnt > 0)) {
														if (((heap->a_____________________2)->refcnt == 1) && ((heap->a_____________________2)->staticArray == false)) {
															(heap->a_____________________2)->refcnt--;
															MemHandleFree( heap->a_____________________2 );
															heap->a_____________________2=NULL;
														}
														else
														 	PDAArrFree(heap->a_____________________2);
													}
												}
											}
										} /* end case */
										break;
										/* begin case */
										default : {
											{
/* Call Library Node */
												{
													int32 	BoundLinearFit_head(
													void* ,
													void* ,
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
													void* arg4;
													void* arg5;
													double arg6;
													double arg7;
													double arg8;
													arg1 = GetArrayHandle(heap->a_Y_CT_4, doubleDataType, 1);
													if (!arg1) {
														CGenErr();
													}
													arg2 = GetArrayHandle(heap->a_X_CT_4, doubleDataType, 1);
													if (!arg2) {
														CGenErr();
													}
													arg3 = GetArrayHandle(heap->a_Weight_1, doubleDataType, 1);
													if (!arg3) {
														CGenErr();
													}
													arg4 = GetArrayHandle(heap->a_____________________3, doubleDataType, 1);
													if (!arg4) {
														CGenErr();
													}
													arg5 = GetArrayHandle(heap->a_____________________2, doubleDataType, 1);
													if (!arg5) {
														CGenErr();
													}
													arg6 = 0.0;
													arg7 = 0.0;
													arg8 = 0.0;
													arg0 = 
													BoundLinearFit_head(
													arg1,
													arg2,
													arg3,
													arg4,
													arg5,
													(void*)&arg6,
													(void*)&arg7,
													(void*)&arg8
													);
													heap->l__________CT_2 = arg0;
													heap->a__________CT_2 = PDAArrCreateFromHandle( arg1, doubleDataType, (int32)1 );
													heap->n__________CT_10 = arg6;
													heap->n__________CT_9 = arg7;
													heap->n__________CT_8 = arg8;
													PDAArrFreeDataHandle(arg1, heap->a_Y_CT_4);
	if ((heap->a_Y_CT_4) && ((heap->a_Y_CT_4)->refcnt > 0)) {
														if (((heap->a_Y_CT_4)->refcnt == 1) && ((heap->a_Y_CT_4)->staticArray == false)) {
															(heap->a_Y_CT_4)->refcnt--;
															MemHandleFree( heap->a_Y_CT_4 );
															heap->a_Y_CT_4=NULL;
														}
														else
														 	PDAArrFree(heap->a_Y_CT_4);
													}
													PDAArrFreeDataHandle(arg2, heap->a_X_CT_4);
	if ((heap->a_X_CT_4) && ((heap->a_X_CT_4)->refcnt > 0)) {
														if (((heap->a_X_CT_4)->refcnt == 1) && ((heap->a_X_CT_4)->staticArray == false)) {
															(heap->a_X_CT_4)->refcnt--;
															MemHandleFree( heap->a_X_CT_4 );
															heap->a_X_CT_4=NULL;
														}
														else
														 	PDAArrFree(heap->a_X_CT_4);
													}
													PDAArrFreeDataHandle(arg3, heap->a_Weight_1);
	if ((heap->a_Weight_1) && ((heap->a_Weight_1)->refcnt > 0)) {
														if (((heap->a_Weight_1)->refcnt == 1) && ((heap->a_Weight_1)->staticArray == false)) {
															(heap->a_Weight_1)->refcnt--;
															MemHandleFree( heap->a_Weight_1 );
															heap->a_Weight_1=NULL;
														}
														else
														 	PDAArrFree(heap->a_Weight_1);
													}
													PDAArrFreeDataHandle(arg4, heap->a_____________________3);
	if ((heap->a_____________________3) && ((heap->a_____________________3)->refcnt > 0)) {
														if (((heap->a_____________________3)->refcnt == 1) && ((heap->a_____________________3)->staticArray == false)) {
															(heap->a_____________________3)->refcnt--;
															MemHandleFree( heap->a_____________________3 );
															heap->a_____________________3=NULL;
														}
														else
														 	PDAArrFree(heap->a_____________________3);
													}
													PDAArrFreeDataHandle(arg5, heap->a_____________________2);
	if ((heap->a_____________________2) && ((heap->a_____________________2)->refcnt > 0)) {
														if (((heap->a_____________________2)->refcnt == 1) && ((heap->a_____________________2)->staticArray == false)) {
															(heap->a_____________________2)->refcnt--;
															MemHandleFree( heap->a_____________________2 );
															heap->a_____________________2=NULL;
														}
														else
														 	PDAArrFree(heap->a_____________________2);
													}
												}
											}
										} /* end case */
										break;
									}
								} /* end switch */
							}
						} /* end case */
					} /* end switch */
				}
			} /* end case */
		} /* end switch */
		PDAArrFree(*NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A);
		if (heap->a__________CT_2 && (heap->a__________CT_2->datatype == (doubleDataType))) {
			*NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A = PDAArrCopyOnModify(heap->a__________CT_2);
		} else 
		{
			*NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtNI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A), ArrayDataTypeNDims(dtNI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A));
			if (!PDAArrSet(heap->a__________CT_2,NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A)) {
				CGenErr();
			}
			PDAArrFree(heap->a__________CT_2);
		}
		*NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F = heap->n__________CT_10;
		*NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F = heap->n__________CT_9;
		*NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3 = heap->n__________CT_8;
		*NI_AALPro_lvlib_Linear_Fit_out_4_error_B5 = heap->l__________CT_2;
		NI_AALPro_lvlib_Linear_Fit_CleanupVIGlobalConstants();
		if (NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB && ((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB) && ((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB );
					NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB);
			}
			NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB) && ((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB );
					NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB);
			}
		}
		if (NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E && ((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E) && ((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E );
					NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E);
			}
			NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E) && ((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E );
					NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E);
			}
		}
		if (NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283 && ((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283) && ((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283 );
					NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283);
			}
			NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283 = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283) && ((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283 );
					NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283);
			}
		}
		PDAClusterFree( &NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3, 0xE0000 | BigClusterDataType);
		return eFinished;
	}
}


/****** End of generated code **********/


