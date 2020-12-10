/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_Cal_Point TO Line.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\IPI_Cal_Point TO Line.vi
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
#define LV_MAIN
#include "LVCGenIncludes.h"
#include "IPI_Cal_Point_TO_LineLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IPI_Cal_Point_TO_Line_heap { 
	cl_00000 c_IMAQ_Clear_Overlay_error_out;
	cl_00000 c_IMAQ_Overlay_Line_error_out;
	cl_00000 c_error_in__no_error_;
	cl_00000 c_IMAQ_Overlay_Line_error_out_1;
	float64 n____x_y_7;
	float64 n____x_y;
	float64 n__________CT_1;
	float64 n_x;
	float64 n__________CT;
	float64 n____x_y_8;
	float64 n____x_y_5;
	float64 n_Linear_Fit_vi_____;
	float64 n____x_y_4;
	float64 n_________x;
	float64 n________sqrt_x_;
	float64 n_x_1;
	float64 n_Linear_Fit_vi______1;
	float64 n_________x_1;
	float64 n____x_y_12;
	float64 n____x_y_11;
	float64 n____x_y_10;
	float64 n____x_y_9;
	float64 n____x_y_2;
	float64 n______x_2;
	float64 n______x_2_1;
	float64 n____x_y_3;
	float64 n____x_y_6;
	cl_B0000 c_Start_Point;
	cl_B0000 c__________________;
	cl_A0000 c_Point1__Pixels__First;
	cl_A0000 c_Point1__Pixels__Second;
	uInt32 dw_Constant;
	uInt32 dw_Color;
	int32 l________________X;
	int32 l________________Y;
	float32 n____x_y_1;
	float32 n________________Y;
	float32 n________________X;
	float32 n________________X_1;
	float32 n________________Y_1;
	VoidHand s______________________F________1;
	VoidHand Args499_1;  
	VoidHand Args3F2_1;  
	VoidHand s______________________F_______;
	VoidHand Args2F2_1;  
	VoidHand Args2E6_1;  
	PDAArrPtr a____________________;
	PDAArrPtr a_____________________1;
	CCGRCRefnumHandle l_IMAQ_Overlay_Line_Image_Out_1;
	CCGRCRefnumHandle l_Image_in;
	CCGRCRefnumHandle l_IMAQ_Clear_Overlay_Image_Out;
	CCGRCRefnumHandle l_IMAQ_Overlay_Line_Image_Out;
	int16 i______6__1;
	int16 i______6_;
	Boolean b_____0___x___0_;
	Boolean b_____0___x___0__CS;
} _DATA_SECTION __IPI_Cal_Point_TO_Line_heap; /* heap */

static struct _IPI_Cal_Point_TO_Line_heap _DATA_SECTION *heap = &__IPI_Cal_Point_TO_Line_heap; /* heap */

_DATA_SECTION static  cl_C0000 g_cluster_1 = 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_D0000 g_cluster_2 = 
{(PDAStrPtr)(&g_string_1)};

_DATA_SECTION  cl_B0000 IPI_Cal_Point_TO_Line_in_3_Start_Point_6A8 = 
{0, 0};

_DATA_SECTION  cl_A0000 IPI_Cal_Point_TO_Line_in_1_Point1__Pixels__First_734 = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

_DATA_SECTION  cl_A0000 IPI_Cal_Point_TO_Line_in_2_Point1__Pixels__Second_806 = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

_DATA_SECTION static  cl_C0000 g_cluster_6 = 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_D0000 g_cluster_7 = 
{(PDAStrPtr)(&g_string_2)};

struct _g_string_3 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_00000 g_cluster_8 = 
{0, 0, (PDAStrPtr)(&g_string_3)};

struct _g_string_4 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_4 g_string_4 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IPI_Cal_Point_TO_Line_out_3_error_out_C0B_init_ = 
{0, 0, (PDAStrPtr)(&g_string_4)};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_Cal_Point_TO_Line_CleanupLSRs(void);
void _TEXT_SECTION IPI_Cal_Point_TO_Line_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_Cal_Point_TO_Line_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_Cal_Point_TO_Line_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_Cal_Point_TO_Line_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_Cal_Point_TO_Line_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_Cal_Point_TO_Line_InitVIConstantList(void);
void _TEXT_SECTION IPI_Cal_Point_TO_Line_InitVIConstantList(void) {
}


/****** Block diagram code **********/


static cl_C0000 fp4F;
static DataType dtfp4F = 0xC0000 | ClusterDataType;
static cl_D0000 fp34_init_;
static cl_D0000* fp34 = &fp34_init_;
static DataType dtfp34 = 0xD0000 | ClusterDataType;
static float64 k1__E4_init_ = 0.0000000000000000000E+0 ;
static float64* k1__E4 = &k1__E4_init_;
static DataType dtk1__E4 = doubleDataType;
static float64 b1__F5_init_ = 0.0000000000000000000E+0 ;
static float64* b1__F5 = &b1__F5_init_;
static DataType dtb1__F5 = doubleDataType;
static float64 k2__134_init_ = 0.0000000000000000000E+0 ;
static float64* k2__134 = &k2__134_init_;
static DataType dtk2__134 = doubleDataType;
static float64 b2__143_init_ = 0.0000000000000000000E+0 ;
static float64* b2__143 = &b2__143_init_;
static DataType dtb2__143 = doubleDataType;
static float64 X_______152_init_ = 0.0000000000000000000E+0 ;
static float64* X_______152 = &X_______152_init_;
static DataType dtX_______152 = doubleDataType;
static float64 y_______161_init_ = 0.0000000000000000000E+0 ;
static float64* y_______161 = &y_______161_init_;
static DataType dty_______161 = doubleDataType;
static VoidHand result__17F_init_ = NULL;
static VoidHand *result__17F = &result__17F_init_;
static DataType dtresult__17F = StringDataType;
static cl_C0000 fp8F2;
static DataType dtfp8F2 = 0xC0000 | ClusterDataType;
static cl_D0000 fp8D7_init_;
static cl_D0000* fp8D7 = &fp8D7_init_;
static DataType dtfp8D7 = 0xD0000 | ClusterDataType;
static cl_00000 error_in__no_error___B8B;
static DataType dterror_in__no_error___B8B = 0x0 | ClusterDataType;
float64 IPI_Cal_Point_TO_Line_out_2_Dist_piex_170_init_ = 0.0000000000000000000E+0 ;
static float64* IPI_Cal_Point_TO_Line_out_2_Dist_piex_170 = &IPI_Cal_Point_TO_Line_out_2_Dist_piex_170_init_;
static DataType dtIPI_Cal_Point_TO_Line_out_2_Dist_piex_170 = doubleDataType;
VoidHand IPI_Cal_Point_TO_Line_out_1_Piex_2CB_init_ = NULL;
static VoidHand *IPI_Cal_Point_TO_Line_out_1_Piex_2CB = &IPI_Cal_Point_TO_Line_out_1_Piex_2CB_init_;
static DataType dtIPI_Cal_Point_TO_Line_out_1_Piex_2CB = StringDataType;
static DataType dtIPI_Cal_Point_TO_Line_in_3_Start_Point_6A8 = 0xB0000 | ClusterDataType;
static DataType dtIPI_Cal_Point_TO_Line_in_1_Point1__Pixels__First_734 = 0xA0000 | ClusterDataType;
static DataType dtIPI_Cal_Point_TO_Line_in_2_Point1__Pixels__Second_806 = 0xA0000 | ClusterDataType;
cl_00000 IPI_Cal_Point_TO_Line_out_3_error_out_C0B_tmp_;
static cl_00000* IPI_Cal_Point_TO_Line_out_3_error_out_C0B = &IPI_Cal_Point_TO_Line_out_3_error_out_C0B_tmp_;
static DataType dtIPI_Cal_Point_TO_Line_out_3_error_out_C0B = 0x0 | ClusterDataType;
extern eRunStatus IPI_Cal_Point_TO_Line_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	fp4F = g_cluster_1;
	PDAClusterIncRefCnt(&fp4F, 0xC0000 | ClusterDataType, 1);
	*fp34 = g_cluster_2;
	PDAClusterIncRefCnt(fp34, 0xD0000 | ClusterDataType, 1);
	*result__17F = PDAStrNewFromStr(_LVT(""));
	fp8F2 = g_cluster_6;
	PDAClusterIncRefCnt(&fp8F2, 0xC0000 | ClusterDataType, 1);
	*fp8D7 = g_cluster_7;
	PDAClusterIncRefCnt(fp8D7, 0xD0000 | ClusterDataType, 1);
	error_in__no_error___B8B = g_cluster_8;
	PDAClusterIncRefCnt(&error_in__no_error___B8B, 0x0 | ClusterDataType, 1);
	if (!IPI_Cal_Point_TO_Line_out_1_Piex_2CB) {
		 	IPI_Cal_Point_TO_Line_out_1_Piex_2CB = LVPDAMemHandleNew( sizeof(PDAStrPtr), NULL );
		 	*IPI_Cal_Point_TO_Line_out_1_Piex_2CB = NULL;
	}
	if (!(*IPI_Cal_Point_TO_Line_out_1_Piex_2CB)) {
		*IPI_Cal_Point_TO_Line_out_1_Piex_2CB = PDAStrNewFromStr(_LVT(""));
	}
	*IPI_Cal_Point_TO_Line_out_3_error_out_C0B = IPI_Cal_Point_TO_Line_out_3_error_out_C0B_init_;
	PDAClusterIncRefCnt(IPI_Cal_Point_TO_Line_out_3_error_out_C0B, 0x0 | ClusterDataType, 1);
	IPI_Cal_Point_TO_Line_InitVIConstantList();
	{
		heap->dw_Constant = RGB(100, 255, 0);
		heap->n_x_1 = 1.0000000000000000000E+0;
		heap->dw_Color = RGB(255, 0, 0);
		heap->i______6__1 = 3;
		heap->i______6_ = 3;
		heap->n_x = 6.9728684611618501000E-3;
		MemMove(&heap->c_error_in__no_error_, &error_in__no_error___B8B, sizeof(cl_00000));
		PDAClusterIncRefCnt(&error_in__no_error___B8B,0x0 | ClusterDataType,1);
		heap->l_Image_in = (CCGRCRefnumHandle)IPI_Cal_Point_TO_Line_in_0_Image_in_8CD;
		CCGRCRefnumIncRefCnt(heap->l_Image_in, 1);
		{
			extern PDAArrPtr pIMAQ_Clear_Overlay_in_0_Groups_B0_init_;
			extern cl_00000 IMAQ_Clear_Overlay_out_0_error_out_1E_init_;
			cl_00000 IMAQ_Clear_Overlay_out_0_error_out_1E = IMAQ_Clear_Overlay_out_0_error_out_1E_init_;
			extern CCGRCRefnumHandle IMAQ_Clear_Overlay_out_1_Image_Out_3B_init_;
			CCGRCRefnumHandle IMAQ_Clear_Overlay_out_1_Image_Out_3B = IMAQ_Clear_Overlay_out_1_Image_Out_3B_init_;
			PDAArrIncRefCnt(pIMAQ_Clear_Overlay_in_0_Groups_B0_init_, 1);
			heap->c_IMAQ_Clear_Overlay_error_out = IMAQ_Clear_Overlay_out_0_error_out_1E;
			heap->l_IMAQ_Clear_Overlay_Image_Out = IMAQ_Clear_Overlay_out_1_Image_Out_3B_init_;
			if ((IMAQ_Clear_Overlay_Run( 	0x30000 | ArrayDataType, pIMAQ_Clear_Overlay_in_0_Groups_B0_init_,
			0x0 | ClusterDataType, heap->c_error_in__no_error_,
			CCGRCRefnumHandleDataType, heap->l_Image_in,
			0x0 | ClusterDataType, &heap->c_IMAQ_Clear_Overlay_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Clear_Overlay_Image_Out	)) == eFail) CGenErr();
		}
		MemMove(&heap->c_Point1__Pixels__Second, &IPI_Cal_Point_TO_Line_in_2_Point1__Pixels__Second_806, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&IPI_Cal_Point_TO_Line_in_2_Point1__Pixels__Second_806,0xA0000 | ClusterDataType,1);
/* Unbundle by name */
		{
			cl_A0000* cl_001 = (cl_A0000*)&heap->c_Point1__Pixels__Second;
			heap->n________________X_1 = cl_001->el_0;
			heap->n________________Y = cl_001->el_1;
	}
		MemMove(&heap->c_Point1__Pixels__First, &IPI_Cal_Point_TO_Line_in_1_Point1__Pixels__First_734, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&IPI_Cal_Point_TO_Line_in_1_Point1__Pixels__First_734,0xA0000 | ClusterDataType,1);
/* Unbundle by name */
		{
			cl_A0000* cl_002 = (cl_A0000*)&heap->c_Point1__Pixels__First;
			heap->n________________X = cl_002->el_0;
			heap->n________________Y_1 = cl_002->el_1;
	}
/* Build array */
		{
			ArrDimSize i;
			ArrDimSize dimSize=0;
			heap->a_____________________1 = PDAArrNewEmptyWithNDims( floatDataType, (ArrDimSize)1 );
			if (!heap->a_____________________1){
				CGenErr();
			}
			dimSize += 1;
			dimSize += 1;
			PDAArrSetDim(heap->a_____________________1, (ArrDimSize)0, dimSize);
			if (!PDAArrAllocData(&heap->a_____________________1)){
				CGenErr();
			}
			i=0;
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->n________________Y, floatDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->n________________Y_1, floatDataType)) {
				CGenErr();
			}
			i++;
		}
/* Build array */
		{
			ArrDimSize i;
			ArrDimSize dimSize=0;
			heap->a____________________ = PDAArrNewEmptyWithNDims( floatDataType, (ArrDimSize)1 );
			if (!heap->a____________________){
				CGenErr();
			}
			dimSize += 1;
			dimSize += 1;
			PDAArrSetDim(heap->a____________________, (ArrDimSize)0, dimSize);
			if (!PDAArrAllocData(&heap->a____________________)){
				CGenErr();
			}
			i=0;
			if (!PDAArrSetData(heap->a____________________, i, &heap->n________________X_1, floatDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->n________________X, floatDataType)) {
				CGenErr();
			}
			i++;
		}
		{
			PDAArrPtr inputParam0 = NULL;
			PDAArrPtr inputParam1 = NULL;
			extern PDAArrPtr pNI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_;
			extern float64 NI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F_init_;
			extern uInt16 NI_AALPro_lvlib_Linear_Fit_in_4_method_36B;
			extern cl_E0000 NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_;
			cl_E0000* NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3 = &NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_;
			extern PDAArrPtr pNI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_;
			PDAArrPtr NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_ = pNI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_;
			extern float64 NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F_init_;
			float64 NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F = NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F_init_;
			extern float64 NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F_init_;
			float64 NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F = NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F_init_;
			extern float64 NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3_init_;
			float64 NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3 = NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3_init_;
			extern int32 NI_AALPro_lvlib_Linear_Fit_out_4_error_B5_init_;
			int32 NI_AALPro_lvlib_Linear_Fit_out_4_error_B5 = NI_AALPro_lvlib_Linear_Fit_out_4_error_B5_init_;
			inputParam0 = PDAVHCopyOnModify(heap->a_____________________1,ArrayDataType);
			inputParam1 = PDAVHCopyOnModify(heap->a____________________,ArrayDataType);
			PDAArrIncRefCnt(pNI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_, 1);
			PDAClusterIncRefCnt(&NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3, 0xE0000 | BigClusterDataType, 1);
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_, 1);
			heap->n_Linear_Fit_vi______1 = NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F_init_;
			heap->n_Linear_Fit_vi_____ = NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F_init_;
			if ((NI_AALPro_lvlib_Linear_Fit_Run( 	0xF0000 | ArrayDataType, inputParam0,
			0xF0000 | ArrayDataType, inputParam1,
			0x40000 | ArrayDataType, pNI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_,
			doubleDataType, &NI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F_init_,
			uInt16DataType, NI_AALPro_lvlib_Linear_Fit_in_4_method_36B,
			0xE0000 | BigClusterDataType, NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3,
			0x40000 | ArrayDataType, &NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_,
			doubleDataType, &heap->n_Linear_Fit_vi______1,
			doubleDataType, &heap->n_Linear_Fit_vi_____,
			doubleDataType, &NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3,
			int32DataType, &NI_AALPro_lvlib_Linear_Fit_out_4_error_B5	)) == eFail) CGenErr();
	if ((NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_) && ((NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_)->refcnt > 0)) {
				if (((NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_)->refcnt == 1) && ((NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_)->staticArray == false)) {
					(NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_)->refcnt--;
					MemHandleFree( NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_ );
					NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_=NULL;
				}
				else
				 	PDAArrFree(NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_);
			}
		}
		*k1__E4 = heap->n_Linear_Fit_vi______1;
		*b1__F5 = heap->n_Linear_Fit_vi_____;
		MemMove(&heap->c_Start_Point, &IPI_Cal_Point_TO_Line_in_3_Start_Point_6A8, sizeof(cl_B0000));
		PDAClusterIncRefCnt(&IPI_Cal_Point_TO_Line_in_3_Start_Point_6A8,0xB0000 | ClusterDataType,1);
/* Unbundle by name */
		{
			cl_B0000* cl_003 = (cl_B0000*)&heap->c_Start_Point;
			heap->l________________X = cl_003->el_0;
			heap->l________________Y = cl_003->el_1;
	}
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->l________________Y, int32DataType, &heap->n________________Y, floatDataType, opMinus, &heap->n____x_y_1, floatDataType);
		/**/
		/* 小于0？ */
		/**/
		PDAFltUnop( &(heap->n____x_y_1), floatDataType, opLT0, &(heap->b_____0___x___0_), BooleanDataType);
		/**/
		/* 取负数 */
		/**/
		PDAFltUnop( &(heap->n_x_1), doubleDataType, opNeg, &(heap->n_________x_1), doubleDataType);
		/**/
		/* 除 */
		/**/
		PDAFltBinop( &heap->n_________x_1, doubleDataType, &heap->n_Linear_Fit_vi______1, doubleDataType, opDiv, &heap->n____x_y_8, doubleDataType);
		*k2__134 = heap->n____x_y_8;
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n_Linear_Fit_vi______1, doubleDataType, &heap->n____x_y_8, doubleDataType, opMinus, &heap->n____x_y_10, doubleDataType);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n____x_y_8, doubleDataType, &heap->l________________X, int32DataType, opMult, &heap->n____x_y_12, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->l________________Y, int32DataType, &heap->n____x_y_12, doubleDataType, opMinus, &heap->n____x_y_6, doubleDataType);
		*b2__143 = heap->n____x_y_6;
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n_Linear_Fit_vi_____, doubleDataType, &heap->n____x_y_6, doubleDataType, opMinus, &heap->n____x_y_11, doubleDataType);
		/**/
		/* 除 */
		/**/
		PDAFltBinop( &heap->n____x_y_11, doubleDataType, &heap->n____x_y_10, doubleDataType, opDiv, &heap->n____x_y_9, doubleDataType);
		/**/
		/* 取负数 */
		/**/
		PDAFltUnop( &(heap->n____x_y_9), doubleDataType, opNeg, &(heap->n_________x), doubleDataType);
		*X_______152 = heap->n_________x;
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n_________x, doubleDataType, &heap->l________________X, int32DataType, opMinus, &heap->n____x_y_3, doubleDataType);
		/**/
		/* 平方 */
		/**/
		PDAFltUnop( &(heap->n____x_y_3), doubleDataType, opSq, &(heap->n______x_2), doubleDataType);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n_________x, doubleDataType, &heap->n____x_y_8, doubleDataType, opMult, &heap->n____x_y_7, doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n____x_y_7, doubleDataType, &heap->n____x_y_6, doubleDataType, opPlus, &heap->n____x_y_5, doubleDataType);
		*y_______161 = heap->n____x_y_5;
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n____x_y_5, doubleDataType, &heap->l________________Y, int32DataType, opMinus, &heap->n____x_y_4, doubleDataType);
		/**/
		/* 平方 */
		/**/
		PDAFltUnop( &(heap->n____x_y_4), doubleDataType, opSq, &(heap->n______x_2_1), doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n______x_2_1, doubleDataType, &heap->n______x_2, doubleDataType, opPlus, &heap->n____x_y_2, doubleDataType);
		/**/
		/* 平方根 */
		/**/
		PDAFltUnop( &(heap->n____x_y_2), doubleDataType, opSqrt, &(heap->n________sqrt_x_), doubleDataType);
		/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n________sqrt_x_), doubleDataType, NULL, uCharDataType, &(heap->i______6_), int16DataType, (int8)'f', &(heap->s______________________F_______), StringDataType ))){
			CGenErr();
		}
	PDAStrFree(*IPI_Cal_Point_TO_Line_out_1_Piex_2CB);
		*IPI_Cal_Point_TO_Line_out_1_Piex_2CB = PDAStrCopyOnModify(heap->s______________________F_______);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n_x, doubleDataType, &heap->n________sqrt_x_, doubleDataType, opMult, &heap->n____x_y, doubleDataType);
		{ /* Select */
			heap->b_____0___x___0__CS = heap->b_____0___x___0_;
			/* begin case */
			if ( heap->b_____0___x___0__CS ) {
				{
					/**/
					/* 取负数 */
					/**/
					PDAFltUnop( &(heap->n____x_y), doubleDataType, opNeg, &(heap->n__________CT), doubleDataType);
				}
			} /* end case */
			/* begin case */
			else {
				{
					heap->n__________CT = heap->n____x_y;
				}
			} /* end case */
		} /* end switch */
		*IPI_Cal_Point_TO_Line_out_2_Dist_piex_170 = heap->n__________CT;
		/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n____x_y), doubleDataType, NULL, uCharDataType, &(heap->i______6__1), int16DataType, (int8)'f', &(heap->s______________________F________1), StringDataType ))){
			CGenErr();
		}
	PDAStrFree(*result__17F);
		*result__17F = PDAStrCopyOnModify(heap->s______________________F________1);
/* Bundle by name */
		{
			cl_B0000* cl_004 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c__________________, &heap->c_Start_Point, sizeof( cl_B0000 ) );
			cl_004 = (cl_B0000*)&heap->c__________________;
	cl_004->el_0 = heap->n_________x;
	cl_004->el_1 = heap->n____x_y_5;
		}
		{
			extern VoidHand IMAQ_Overlay_Line_in_1_Group_112;
			cl_B0000 castTemp0 = {0};
			cl_B0000 castTemp1 = {0};
			extern cl_00000 IMAQ_Overlay_Line_out_0_error_out_48_init_;
			cl_00000 IMAQ_Overlay_Line_out_0_error_out_48 = IMAQ_Overlay_Line_out_0_error_out_48_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Line_out_1_Image_Out_2 = IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			CopyValueFree(&heap->c_Point1__Pixels__Second, 0xA0000 | ClusterDataType, &castTemp0, 0xB0000 | ClusterDataType);
			CopyValueFree(&heap->c_Point1__Pixels__First, 0xA0000 | ClusterDataType, &castTemp1, 0xB0000 | ClusterDataType);
			heap->c_IMAQ_Overlay_Line_error_out_1 = IMAQ_Overlay_Line_out_0_error_out_48;
			heap->l_IMAQ_Overlay_Line_Image_Out_1 = IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			if ((IMAQ_Overlay_Line_Run( 	uInt32DataType, heap->dw_Constant,
			StringDataType, IMAQ_Overlay_Line_in_1_Group_112,
			0x0 | ClusterDataType, heap->c_IMAQ_Clear_Overlay_error_out,
			0xB0000 | ClusterDataType, castTemp0,
			0xB0000 | ClusterDataType, castTemp1,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Clear_Overlay_Image_Out,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Line_error_out_1,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Line_Image_Out_1	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Line_in_1_Group_112;
			extern cl_00000 IMAQ_Overlay_Line_out_0_error_out_48_init_;
			cl_00000 IMAQ_Overlay_Line_out_0_error_out_48 = IMAQ_Overlay_Line_out_0_error_out_48_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Line_out_1_Image_Out_2 = IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			heap->c_IMAQ_Overlay_Line_error_out = IMAQ_Overlay_Line_out_0_error_out_48;
			heap->l_IMAQ_Overlay_Line_Image_Out = IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			if ((IMAQ_Overlay_Line_Run( 	uInt32DataType, heap->dw_Color,
			StringDataType, IMAQ_Overlay_Line_in_1_Group_112,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Line_error_out_1,
			0xB0000 | ClusterDataType, heap->c__________________,
			0xB0000 | ClusterDataType, heap->c_Start_Point,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Line_Image_Out_1,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Line_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Line_Image_Out	)) == eFail) CGenErr();
		}
		if (IPI_Cal_Point_TO_Line_out_3_error_out_C0B) {
			/* Free Cluster IPI_Cal_Point_TO_Line_out_3_error_out_C0B*/
			{
				cl_00000* cl_005 = (cl_00000*)IPI_Cal_Point_TO_Line_out_3_error_out_C0B;
				if (cl_005->el_2 && (((PDAStrPtr)cl_005->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_005->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_005->el_2)->staticStr)) {
						MemHandleFree( cl_005->el_2 );
						cl_005->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_IMAQ_Overlay_Line_error_out, 0x0 | ClusterDataType, IPI_Cal_Point_TO_Line_out_3_error_out_C0B);
		}
		else {
		}
		if (IPI_Cal_Point_TO_Line_out_0_Image_Out_2B) {
	CCGRCRefnumFree(*IPI_Cal_Point_TO_Line_out_0_Image_Out_2B);
			*IPI_Cal_Point_TO_Line_out_0_Image_Out_2B =heap->l_IMAQ_Overlay_Line_Image_Out;
		}
		else {
	CCGRCRefnumFree(heap->l_IMAQ_Overlay_Line_Image_Out);
		}
		PDAClusterFree( &fp4F, 0xC0000 | ClusterDataType);
		PDAClusterFree( fp34, 0xD0000 | ClusterDataType);
		if (*result__17F && (((PDAStrPtr)*result__17F)->refcnt == 1) && (((PDAStrPtr)*result__17F)->staticStr == false)) {
	if (*result__17F && (((PDAStrPtr)*result__17F)->refcnt > 0)) {
				if ((--((PDAStrPtr)*result__17F)->refcnt == 0) && (!((PDAStrPtr)*result__17F)->staticStr)) {
					MemHandleFree( *result__17F );
					*result__17F=NULL;
				}
			}
			*result__17F = NULL;
		}
		else
		{
	if (*result__17F && (((PDAStrPtr)*result__17F)->refcnt > 0)) {
				if ((--((PDAStrPtr)*result__17F)->refcnt == 0) && (!((PDAStrPtr)*result__17F)->staticStr)) {
					MemHandleFree( *result__17F );
					*result__17F=NULL;
				}
			}
		}
		PDAClusterFree( &fp8F2, 0xC0000 | ClusterDataType);
		PDAClusterFree( fp8D7, 0xD0000 | ClusterDataType);
		PDAClusterFree( &error_in__no_error___B8B, 0x0 | ClusterDataType);
		PDAClusterFree( &IPI_Cal_Point_TO_Line_in_3_Start_Point_6A8, 0xB0000 | ClusterDataType);
		PDAClusterFree( &IPI_Cal_Point_TO_Line_in_1_Point1__Pixels__First_734, 0xA0000 | ClusterDataType);
		PDAClusterFree( &IPI_Cal_Point_TO_Line_in_2_Point1__Pixels__Second_806, 0xA0000 | ClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_Cal_Point_TO_Line_VIName = "IPI_Cal_Point TO Line.vi";

eRunStatus IPI_Cal_Point_TO_Line_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_Cal_Point_TO_Line_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_Cal_Point_TO_Line_AddSubVIInstanceData();
	return IPI_Cal_Point_TO_Line_Run();
}


/****** Library interface **********/


void IPI_Cal_PointTOLine(float64 *Distpiex,
Char **Piex,
TD1 *StartPoint,
TD2 *Point1PixelsSecond,
TD2 *Point1PixelsFirst)
{
	int32 i;
	LVCGenRTInit();

	/* Init globals */
	for (i=0;i<sizeof(globTable)/sizeof(InitFPTermsFunc);i++) {
		(*(globTable[i]))(NULL, false);
	}

	/* Init VI Constants */
	for (i=0;i<sizeof(globConstInitTable)/sizeof(VoidFn);i++) {
		(*(globConstInitTable[i]))();
	}

	IPI_Cal_Point_TO_Line_AddSubVIInstanceData();
	IPI_Cal_Point_TO_Line_InitVIConstantList();

	IPI_Cal_Point_TO_Line_in_3_Start_Point_6A8 = *(cl_B0000*)StartPoint;
	IPI_Cal_Point_TO_Line_in_2_Point1__Pixels__Second_806 = *(cl_A0000*)Point1PixelsSecond;
	IPI_Cal_Point_TO_Line_in_1_Point1__Pixels__First_734 = *(cl_A0000*)Point1PixelsFirst;
	/* Call top level VI main function */
	IPI_Cal_Point_TO_Line_Run();
	*Distpiex = *IPI_Cal_Point_TO_Line_out_2_Dist_piex_170;
	*Piex = PDAStrCStrFromLVStr( IPI_Cal_Point_TO_Line_out_1_Piex_2CB );

	/* Cleanup VI Constants */
	for (i=0;i<sizeof(globConstCleanupTable)/sizeof(VoidFn);i++) {
		(*(globConstCleanupTable[i]))();
	}

	/* Cleanup globals */
	for (i=0;i<sizeof(globCleanupTable)/sizeof(VoidFn);i++) {
		(*(globCleanupTable[i]))(false);
	}

	for (i=0;i<sizeof(lsrCleanupTable)/sizeof(VoidFn);i++) {
		(*(lsrCleanupTable[i]))();
	}

	LVCGenRTEnd();
	return;
}



/****** End of generated code **********/


