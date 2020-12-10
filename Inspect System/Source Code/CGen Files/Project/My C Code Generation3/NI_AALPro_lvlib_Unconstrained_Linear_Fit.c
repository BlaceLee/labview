/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: NI_AALPro.lvlib:Unconstrained Linear Fit.vi
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\Analysis\6fits.llb\Unconstrained Linear Fit.vi
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
struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_heap { 
	float64 n_tolerance;
	float64 n__________CT;
	float64 n__________CT_1;
	float64 n__________CT_2;
	float64 n__________CT_3;
	float64 n__________CT_4;
	float64 n__________CT_5;
	int32 l__________CT;
	int32 l__________CT_1;
	PDAArrPtr a_Y;
	PDAArrPtr a_X;
	PDAArrPtr a_Weight;
	PDAArrPtr a__________CT;
	PDAArrPtr a__________CT_1;
	uInt16 n_method_CS;
	uInt16 n_method;
} _DATA_SECTION __NI_AALPro_lvlib_Unconstrained_Linear_Fit_heap; /* heap */

static struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_heap _DATA_SECTION *heap = &__NI_AALPro_lvlib_Unconstrained_Linear_Fit_heap; /* heap */

struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263_init_ NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263_init_));

struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E_init_ NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E_init_));

struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_ NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_));

struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0_init_ NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0_init_ = (PDAArrPtr)(&(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0_init_));



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION NI_AALPro_lvlib_Unconstrained_Linear_Fit_CleanupLSRs(void);
void _TEXT_SECTION NI_AALPro_lvlib_Unconstrained_Linear_Fit_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION NI_AALPro_lvlib_Unconstrained_Linear_Fit_AddVIGlobalConstants(void);
void _TEXT_SECTION NI_AALPro_lvlib_Unconstrained_Linear_Fit_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION NI_AALPro_lvlib_Unconstrained_Linear_Fit_InitVIConstantList(void);
void _TEXT_SECTION NI_AALPro_lvlib_Unconstrained_Linear_Fit_InitVIConstantList(void) {
}


/****** Block diagram code **********/


float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56 = &NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56_init_;
static DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56 = doubleDataType;
float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C = &NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C_init_;
static DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C = doubleDataType;
int32 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E_init_ = 0 ;
static int32* NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E = &NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E_init_;
static DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E = int32DataType;
float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36_init_ = 0.0000000000000000000E+0 ;
static float64* NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36 = &NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36_init_;
static DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36 = doubleDataType;
uInt16 NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_4_method_23F = 0 ;
static DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_4_method_23F = uInt16DataType;
float64 NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_3_tolerance_B5_init_ = 1.0000000000000000000E-4 ;
static DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_3_tolerance_B5 = doubleDataType;
extern eRunStatus NI_AALPro_lvlib_Unconstrained_Linear_Fit_Run(
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263, PDAArrPtr  NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E, PDAArrPtr  NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0, PDAArrPtr  NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_3_tolerance_B5, float64* NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_3_tolerance_B5,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_4_method_23F, uInt16  NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_4_method_23F,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17, PDAArrPtr*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56, float64*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C, float64*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36, float64*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E, int32*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17 = (PDAArrPtr)(&NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17_init_);
	PDAArrIncRefCnt(*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17,1);
	NI_AALPro_lvlib_Unconstrained_Linear_Fit_InitVIConstantList();
	{
		heap->n_method =NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_4_method_23F;
		if (dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263 == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Y, &NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263,1);
		}
		else {
			heap->a_Y = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263, &heap->a_Y)) {
				CGenErr();
			}
		}
		if (dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_X, &NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E,1);
		}
		else {
			heap->a_X = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E, &heap->a_X)) {
				CGenErr();
			}
		}
		if (dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0 == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Weight, &NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0,1);
		}
		else {
			heap->a_Weight = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0, &heap->a_Weight)) {
				CGenErr();
			}
		}
		heap->n_tolerance = *NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_3_tolerance_B5;
		{ /* Select */
			heap->n_method_CS = heap->n_method;
			switch ( heap->n_method_CS ) {
				/* begin case */
				case 1 : {
					{
						{
							PDAArrPtr inputParam0 = NULL;
							PDAArrPtr inputParam1 = NULL;
							PDAArrPtr inputParam2 = NULL;
							extern PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_;
							PDAArrPtr NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_ = pNI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56 = NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C = NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36 = NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36_init_;
							extern int32 NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E_init_;
							int32 NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E = NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E_init_;
							inputParam0 = PDAVHCopyOnModify(heap->a_Y,ArrayDataType);
							inputParam1 = PDAVHCopyOnModify(heap->a_X,ArrayDataType);
							inputParam2 = PDAVHCopyOnModify(heap->a_Weight,ArrayDataType);
							heap->a__________CT = NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17_init_;
							heap->n__________CT_2 = NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56_init_;
							heap->n__________CT_1 = NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C_init_;
							heap->n__________CT = NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36_init_;
							heap->l__________CT = NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E_init_;
							if ((NI_AALPro_lvlib_Linear_Fit__LAR__Run( 	0x40000 | ArrayDataType, inputParam0,
							0x40000 | ArrayDataType, inputParam1,
							0x40000 | ArrayDataType, inputParam2,
							doubleDataType, &heap->n_tolerance,
							0x40000 | ArrayDataType, &heap->a__________CT,
							doubleDataType, &heap->n__________CT_2,
							doubleDataType, &heap->n__________CT_1,
							doubleDataType, &heap->n__________CT,
							int32DataType, &heap->l__________CT	)) == eFail) CGenErr();
						}
					}
				} /* end case */
				break;
				/* begin case */
				case 2 : {
					{
						{
							PDAArrPtr inputParam0 = NULL;
							PDAArrPtr inputParam1 = NULL;
							PDAArrPtr inputParam2 = NULL;
							extern PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_;
							PDAArrPtr NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_ = pNI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50 = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F_init_;
							extern int32 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66_init_;
							int32 NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66 = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66_init_;
							inputParam0 = PDAVHCopyOnModify(heap->a_Y,ArrayDataType);
							inputParam1 = PDAVHCopyOnModify(heap->a_X,ArrayDataType);
							inputParam2 = PDAVHCopyOnModify(heap->a_Weight,ArrayDataType);
							heap->a__________CT = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD_init_;
							heap->n__________CT_2 = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50_init_;
							heap->n__________CT_1 = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B_init_;
							heap->n__________CT = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F_init_;
							heap->l__________CT = NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66_init_;
							if ((NI_AALPro_lvlib_Linear_Fit__Bisquare__Run( 	0x40000 | ArrayDataType, inputParam0,
							0x40000 | ArrayDataType, inputParam1,
							0x40000 | ArrayDataType, inputParam2,
							doubleDataType, &heap->n_tolerance,
							0x40000 | ArrayDataType, &heap->a__________CT,
							doubleDataType, &heap->n__________CT_2,
							doubleDataType, &heap->n__________CT_1,
							doubleDataType, &heap->n__________CT,
							int32DataType, &heap->l__________CT	)) == eFail) CGenErr();
						}
					}
				} /* end case */
				break;
				/* begin case */
				default : {
					{
						{
							PDAArrPtr inputParam0 = NULL;
							PDAArrPtr inputParam1 = NULL;
							PDAArrPtr inputParam2 = NULL;
							extern PDAArrPtr pNI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_;
							PDAArrPtr NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_ = pNI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56 = NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C = NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C_init_;
							extern float64 NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36_init_;
							float64 NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36 = NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36_init_;
							extern int32 NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E_init_;
							int32 NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E = NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E_init_;
							inputParam0 = PDAVHCopyOnModify(heap->a_Y,ArrayDataType);
							inputParam1 = PDAVHCopyOnModify(heap->a_X,ArrayDataType);
							inputParam2 = PDAVHCopyOnModify(heap->a_Weight,ArrayDataType);
							heap->a__________CT = NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17_init_;
							heap->n__________CT_2 = NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56_init_;
							heap->n__________CT_1 = NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C_init_;
							heap->n__________CT = NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36_init_;
							heap->l__________CT = NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E_init_;
							if ((NI_AALPro_lvlib_Linear_Fit__LS__Run( 	0x40000 | ArrayDataType, inputParam0,
							0x40000 | ArrayDataType, inputParam1,
							0x40000 | ArrayDataType, inputParam2,
							0x40000 | ArrayDataType, &heap->a__________CT,
							doubleDataType, &heap->n__________CT_2,
							doubleDataType, &heap->n__________CT_1,
							doubleDataType, &heap->n__________CT,
							int32DataType, &heap->l__________CT	)) == eFail) CGenErr();
						}
					}
				} /* end case */
				break;
			}
		} /* end switch */
		*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56 = heap->n__________CT_2;
		*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C = heap->n__________CT_1;
		*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E = heap->l__________CT;
		*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36 = heap->n__________CT;
		PDAArrFree(*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17);
		if (heap->a__________CT && (heap->a__________CT->datatype == (doubleDataType))) {
			*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17 = PDAArrCopyOnModify(heap->a__________CT);
		} else 
		{
			*NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17 = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17), ArrayDataTypeNDims(dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17));
			if (!PDAArrSet(heap->a__________CT,NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17)) {
				CGenErr();
			}
			PDAArrFree(heap->a__________CT);
		}
		if (NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263 && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->staticArray == false)) {
					(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263 );
					NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263);
			}
			NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263 = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->staticArray == false)) {
					(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263 );
					NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263);
			}
		}
		if (NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->staticArray == false)) {
					(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E );
					NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E);
			}
			NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->staticArray == false)) {
					(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E );
					NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E);
			}
		}
		if (NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0 && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->staticArray == false)) {
	if ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->staticArray == false)) {
					(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0 );
					NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0);
			}
			NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0 = NULL;
		}
		else
		{
	if ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->refcnt == 1) && ((NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->staticArray == false)) {
					(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0 );
					NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0);
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


