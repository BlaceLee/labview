/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: cal.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\cal.vi
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
#include "calLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _cal_heap { 
	float64 n_radians_to_degrees;
	float64 n______________;
	float64 n_Angle__Real_World_;
	float64 n____x_y_9;
	float64 n____x_y_8;
	float64 n____x_y_7;
	float64 n____x_y_6;
	float64 n________arctan_x__1;
	float64 n____x_y_5;
	float64 n_______;
	float64 n_radians_to_degrees_1;
	float64 n____x_y_4;
	float64 n____x_y_10;
	float64 n______sin_x_;
	float64 n_degrees_to_radians;
	float64 n____x_y_11;
	float64 n______cos_x_;
	float64 n_y________;
	float64 n_x_________;
	float64 n_Linear_Fit_vi_____;
	float64 n________arctan_x_;
	float64 n_______________4;
	float64 n_______________3;
	float64 n_______________2;
	float64 n_______________1;
	cl_A0000 c_Center__Pixels_1_4;
	cl_A0000 c___________________2;
	cl_A0000 c_Center__Pixels_;
	cl_A0000 c__________________;
	cl_A0000 c_Point1__Pixels_;
	cl_A0000 c___________________1;
	cl_A0000 c_Point2__Pixels_;
	cl_A0000 c_Center__Pixels__1;
	int32 l_____;
	float32 n_y_3;
	float32 n________________Y_2;
	float32 n________________X_2;
	float32 n_y_2;
	float32 n_y_1;
	float32 n____x_y_2;
	float32 n_y;
	float32 n________________X_1;
	float32 n________________X;
	float32 n____x_y_1;
	float32 n________________X_3;
	float32 n____x_y;
	float32 n________________Y_3;
	float32 n____x_y_3;
	float32 n________________Y_1;
	float32 n________________Y;
	VoidHand Args1761_1;  
	VoidHand Args1E7_1;  
	VoidHand Args9AA_1;  
	VoidHand Args176D_1;  
	VoidHand Args1A2_1;  
	VoidHand Args196_1;  
	VoidHand Args17AE_1;  
	PDAArrPtr a_____________________2;
	PDAArrPtr a_IMAQ_Point_Distances_Distance;
	PDAArrPtr a____x_y_2;
	PDAArrPtr a____x_y_1;
	PDAArrPtr a____x_y;
	PDAArrPtr a______________________________1;
	PDAArrPtr a_______________________________1;
	PDAArrPtr a_Step1;
	PDAArrPtr a______________________________;
	PDAArrPtr a_Step4;
	PDAArrPtr a_____________________1;
	PDAArrPtr a____________________;
	PDAArrPtr a_Step3;
} _DATA_SECTION __cal_heap; /* heap */

static struct _cal_heap _DATA_SECTION *heap = &__cal_heap; /* heap */

struct _tcal_GlobalConstantsHeap {
	uInt8	refCnt;
	cl_A0000	i552;
	cl_A0000	i981;
	cl_A0000	i1785;
} _DATA_SECTION __cal_GlobalConstantsHeap;
static struct _tcal_GlobalConstantsHeap _DATA_SECTION *cal_GlobalConstantsHeapPtr = &__cal_GlobalConstantsHeap;

struct _g_array_1 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float32	data[1];
};
_DATA_SECTION static  struct _g_array_1 g_array_1 = 
{floatDataType, 1, 1, true, 1, 0
};

struct _cal_out_1_Y_____________1541_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _cal_out_1_Y_____________1541_init_ cal_out_1_Y_____________1541_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pcal_out_1_Y_____________1541_init_ = (PDAArrPtr)(&(cal_out_1_Y_____________1541_init_));

struct _cal_out_2_X_____________2256_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _cal_out_2_X_____________2256_init_ cal_out_2_X_____________2256_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pcal_out_2_X_____________2256_init_ = (PDAArrPtr)(&(cal_out_2_X_____________2256_init_));

struct _cal_in_1_Step3_291_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	VoidHand	data[1];
};
_DATA_SECTION   struct _cal_in_1_Step3_291_init_ cal_in_1_Step3_291_init_ = 
{StringDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pcal_in_1_Step3_291_init_ = (PDAArrPtr)(&(cal_in_1_Step3_291_init_));

struct _cal_in_0_Step1_92B_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	VoidHand	data[1];
};
_DATA_SECTION   struct _cal_in_0_Step1_92B_init_ cal_in_0_Step1_92B_init_ = 
{StringDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pcal_in_0_Step1_92B_init_ = (PDAArrPtr)(&(cal_in_0_Step1_92B_init_));

struct _cal_in_2_Step4_BE7_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	VoidHand	data[1];
};
_DATA_SECTION   struct _cal_in_2_Step4_BE7_init_ cal_in_2_Step4_BE7_init_ = 
{StringDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pcal_in_2_Step4_BE7_init_ = (PDAArrPtr)(&(cal_in_2_Step4_BE7_init_));

_DATA_SECTION static  cl_A0000 g_cluster_1 = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

struct _g_array_7 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	cl_A0000	data[1];
};
_DATA_SECTION static  struct _g_array_7 g_array_7 = 
{0xA0000 | ClusterDataType, 1, 1, true, 1, 0
};

_DATA_SECTION  cl_A0000 cal_in_6_Point1__Pixels__191 = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

_DATA_SECTION  cl_A0000 cal_in_8_Point2__Pixels__6BD = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

_DATA_SECTION static  cl_A0000 g_cluster_4 = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

_DATA_SECTION static  cl_A0000 g_cluster_5 = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

_DATA_SECTION static  cl_A0000 g_cluster_6 = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION cal_CleanupLSRs(void);
void _TEXT_SECTION cal_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION cal_AddSubVIInstanceData(void);
void _TEXT_SECTION cal_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION cal_AddVIGlobalConstants(void);
void _TEXT_SECTION cal_AddVIGlobalConstants(void) {
	MemSet(cal_GlobalConstantsHeapPtr,sizeof(*(cal_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION cal_CleanupVIGlobalConstants(void);
void _TEXT_SECTION cal_CleanupVIGlobalConstants(void) {
	(cal_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION cal_InitVIConstantList(void);
void _TEXT_SECTION cal_InitVIConstantList(void) {
	(cal_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static int32 Expr3CInt32( int32 x ) {
#define log(x) NIlog10(x)
#define ln(x) NIlog(x)
#define log2(x) (log10(x)/log10(2))
	int32 _nOutput = (int32)((x/pi)*180.0);
#undef log
#undef log2
#undef ln
	return _nOutput;
}
static float64 Expr3CFloat64( float64 x ) {
#define log(x) NIlog10(x)
#define ln(x) NIlog(x)
#define log2(x) (log10(x)/log10(2))
	float64 _nOutput = (float64)((x/pi)*180.0);
#undef log
#undef log2
#undef ln
	return _nOutput;
}
static int32 Expr26Int32( int32 x ) {
#define log(x) NIlog10(x)
#define ln(x) NIlog(x)
#define log2(x) (log10(x)/log10(2))
	int32 _nOutput = (int32)((x/pi)*180.0);
#undef log
#undef log2
#undef ln
	return _nOutput;
}
static float64 Expr26Float64( float64 x ) {
#define log(x) NIlog10(x)
#define ln(x) NIlog(x)
#define log2(x) (log10(x)/log10(2))
	float64 _nOutput = (float64)((x/pi)*180.0);
#undef log
#undef log2
#undef ln
	return _nOutput;
}
static int32 Expr24Int32( int32 x ) {
#define log(x) NIlog10(x)
#define ln(x) NIlog(x)
#define log2(x) (log10(x)/log10(2))
	int32 _nOutput = (int32)((x/180.0)*pi);
#undef log
#undef log2
#undef ln
	return _nOutput;
}
static float64 Expr24Float64( float64 x ) {
#define log(x) NIlog10(x)
#define ln(x) NIlog(x)
#define log2(x) (log10(x)/log10(2))
	float64 _nOutput = (float64)((x/180.0)*pi);
#undef log
#undef log2
#undef ln
	return _nOutput;
}
static PDAArrPtr Distances__151C_tmp_ = (PDAArrPtr)&g_array_1;
static PDAArrPtr *Distances__151C = &Distances__151C_tmp_;
static DataType dtDistances__151C = 0xB0000 | ArrayDataType;
static PDAArrPtr A_____________1FD_tmp_ = (PDAArrPtr)&g_array_7;
static PDAArrPtr *A_____________1FD = &A_____________1FD_tmp_;
static DataType dtA_____________1FD = 0xC0000 | ArrayDataType;
float64 cal_in_3_x__________14C1_init_ = 2.3550000000000182000E+0 ;
static float64* cal_in_3_x__________14C1 = &cal_in_3_x__________14C1_init_;
static DataType dtcal_in_3_x__________14C1 = doubleDataType;
float64 cal_in_4_y_________14D0_init_ = 1.1377340000000001000E+3 ;
static float64* cal_in_4_y_________14D0 = &cal_in_4_y_________14D0_init_;
static DataType dtcal_in_4_y_________14D0 = doubleDataType;
float64 cal_in_7_Angle__Real_World__150D_init_ = 0.0000000000000000000E+0 ;
static float64* cal_in_7_Angle__Real_World__150D = &cal_in_7_Angle__Real_World__150D_init_;
static DataType dtcal_in_7_Angle__Real_World__150D = doubleDataType;
PDAArrPtr cal_out_1_Y_____________1541_tmp_ = (PDAArrPtr)&cal_out_1_Y_____________1541_init_;
static PDAArrPtr *cal_out_1_Y_____________1541 = &cal_out_1_Y_____________1541_tmp_;
static DataType dtcal_out_1_Y_____________1541 = 0x40000 | ArrayDataType;
PDAArrPtr cal_out_2_X_____________2256_tmp_ = (PDAArrPtr)&cal_out_2_X_____________2256_init_;
static PDAArrPtr *cal_out_2_X_____________2256 = &cal_out_2_X_____________2256_tmp_;
static DataType dtcal_out_2_X_____________2256 = 0x40000 | ArrayDataType;
PDAArrPtr cal_in_1_Step3_291 = (PDAArrPtr)&cal_in_1_Step3_291_init_;
static DataType dtcal_in_1_Step3_291 = 0x30000 | ArrayDataType;
PDAArrPtr cal_in_0_Step1_92B = (PDAArrPtr)&cal_in_0_Step1_92B_init_;
static DataType dtcal_in_0_Step1_92B = 0x30000 | ArrayDataType;
PDAArrPtr cal_in_2_Step4_BE7 = (PDAArrPtr)&cal_in_2_Step4_BE7_init_;
static DataType dtcal_in_2_Step4_BE7 = 0x30000 | ArrayDataType;
float64 cal_in_5_A________2BF_init_ = 4.4999999999999997000E-3 ;
static float64* cal_in_5_A________2BF = &cal_in_5_A________2BF_init_;
static DataType dtcal_in_5_A________2BF = doubleDataType;
float64 cal_out_3_A__________5CF_init_ = 0.0000000000000000000E+0 ;
static float64* cal_out_3_A__________5CF = &cal_out_3_A__________5CF_init_;
static DataType dtcal_out_3_A__________5CF = doubleDataType;
static DataType dtcal_in_6_Point1__Pixels__191 = 0xA0000 | ClusterDataType;
static DataType dtcal_in_8_Point2__Pixels__6BD = 0xA0000 | ClusterDataType;
float64 cal_out_0_A______9CF_init_ = 0.0000000000000000000E+0 ;
static float64* cal_out_0_A______9CF = &cal_out_0_A______9CF_init_;
static DataType dtcal_out_0_A______9CF = doubleDataType;
extern eRunStatus cal_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	Distances__151C_tmp_ = (PDAArrPtr)&g_array_1;
	Distances__151C = (&Distances__151C_tmp_);
	A_____________1FD_tmp_ = (PDAArrPtr)&g_array_7;
	A_____________1FD = (&A_____________1FD_tmp_);
	*cal_out_1_Y_____________1541 = (PDAArrPtr)&cal_out_1_Y_____________1541_init_;
	*cal_out_2_X_____________2256 = (PDAArrPtr)&cal_out_2_X_____________2256_init_;
	cal_InitVIConstantList();
	{
		{
			MemMove(&(cal_GlobalConstantsHeapPtr->i1785),&g_cluster_4,GetClusterSize( 0xA0000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_4,0xA0000 | ClusterDataType,1);
		}
		heap->c_Center__Pixels_1_4 = cal_GlobalConstantsHeapPtr->i1785;
		{
			MemMove(&(cal_GlobalConstantsHeapPtr->i552),&g_cluster_5,GetClusterSize( 0xA0000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_5,0xA0000 | ClusterDataType,1);
		}
		heap->c_Center__Pixels__1 = cal_GlobalConstantsHeapPtr->i552;
		{
			MemMove(&(cal_GlobalConstantsHeapPtr->i981),&g_cluster_6,GetClusterSize( 0xA0000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_6,0xA0000 | ClusterDataType,1);
		}
		heap->c_Center__Pixels_ = cal_GlobalConstantsHeapPtr->i981;
		heap->l_____ = 2;
		heap->n_y_2 = 2.4161000251770020000E+0;
		heap->n_y_3 = 2.5502000000000000000E+4;
		heap->n_y_1 = 2.4161000251770020000E+0;
		heap->n_y = 2.5502000000000000000E+4;
		MemMove(&heap->c_Point2__Pixels_, &cal_in_8_Point2__Pixels__6BD, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&cal_in_8_Point2__Pixels__6BD,0xA0000 | ClusterDataType,1);
/* Unbundle by name */
		{
			cl_A0000* cl_001 = (cl_A0000*)&heap->c_Point2__Pixels_;
			heap->n________________X = cl_001->el_0;
			heap->n________________Y = cl_001->el_1;
	}
		MemMove(&heap->c_Point1__Pixels_, &cal_in_6_Point1__Pixels__191, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&cal_in_6_Point1__Pixels__191,0xA0000 | ClusterDataType,1);
/* Unbundle by name */
		{
			cl_A0000* cl_002 = (cl_A0000*)&heap->c_Point1__Pixels_;
			heap->n________________X_1 = cl_002->el_0;
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
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->n________________Y_1, floatDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->n________________Y, floatDataType)) {
				CGenErr();
			}
			i++;
		}
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n________________X, floatDataType, &heap->n_y_1, floatDataType, opMult, &heap->n____x_y_2, floatDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n____x_y_2, floatDataType, &heap->n_y, floatDataType, opPlus, &heap->n____x_y_1, floatDataType);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n________________X_1, floatDataType, &heap->n_y_2, floatDataType, opMult, &heap->n____x_y_3, floatDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n____x_y_3, floatDataType, &heap->n_y_3, floatDataType, opPlus, &heap->n____x_y, floatDataType);
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
			if (!PDAArrSetData(heap->a____________________, i, &heap->n____x_y, floatDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->n____x_y_1, floatDataType)) {
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
			extern cl_D0000 NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_;
			cl_D0000* NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3 = &NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3_init_;
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
			PDAClusterIncRefCnt(&NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3, 0xD0000 | BigClusterDataType, 1);
			PDAArrIncRefCnt(NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_, 1);
			heap->n_Linear_Fit_vi_____ = NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F_init_;
			if ((NI_AALPro_lvlib_Linear_Fit_Run( 	0xB0000 | ArrayDataType, inputParam0,
			0xB0000 | ArrayDataType, inputParam1,
			0x40000 | ArrayDataType, pNI_AALPro_lvlib_Linear_Fit_in_2_Weight_283_init_,
			doubleDataType, &NI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F_init_,
			uInt16DataType, NI_AALPro_lvlib_Linear_Fit_in_4_method_36B,
			0xD0000 | BigClusterDataType, NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3,
			0x40000 | ArrayDataType, &NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A_init_,
			doubleDataType, &heap->n_Linear_Fit_vi_____,
			doubleDataType, &NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F,
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
		/**/
		/* 反正切 */
		/**/
		PDAFltUnop( &(heap->n_Linear_Fit_vi_____), doubleDataType, opAtan, &(heap->n________arctan_x_), doubleDataType);
/* Expr node */
		LVExpression( Expr3CInt32, Expr3CFloat64, &heap->n________arctan_x_, &heap->n_radians_to_degrees, doubleDataType );
		*cal_out_0_A______9CF = heap->n_radians_to_degrees;
		if (dtcal_in_2_Step4_BE7 == (0x30000 | ArrayDataType)) {
			MemMove(&heap->a_Step4, &cal_in_2_Step4_BE7, DataSize((0x30000 | ArrayDataType)));
			PDAArrIncRefCnt(cal_in_2_Step4_BE7,1);
		}
		else {
			heap->a_Step4 = PDAArrNewEmptyWithNDims( StringDataType, (ArrDimSize)1 );
			if (!PDAArrSet(cal_in_2_Step4_BE7, &heap->a_Step4)) {
				CGenErr();
			}
		}
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->a_Step4), 0x30000 | ArrayDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->a______________________________), 0x40000 | ArrayDataType );
	PDAArrFree(heap->a_Step4);
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = (int32)heap->l_____;
			if ((nIndex >= 0) && heap->a______________________________ && (nIndex < NthDim(heap->a______________________________, (ArrDimSize)0))) {
				heap->n______________ = *(float64 *)NthElemFast(heap->a______________________________, nIndex, 8);
			}
			else {
				heap->n______________ = 0.0;
			}
		}
	if ((heap->a______________________________) && ((heap->a______________________________)->refcnt > 0)) {
			if (((heap->a______________________________)->refcnt == 1) && ((heap->a______________________________)->staticArray == false)) {
				(heap->a______________________________)->refcnt--;
				MemHandleFree( heap->a______________________________ );
				heap->a______________________________=NULL;
			}
			else
			 	PDAArrFree(heap->a______________________________);
		}
		*cal_out_3_A__________5CF = heap->n______________;
		if (dtcal_in_0_Step1_92B == (0x30000 | ArrayDataType)) {
			MemMove(&heap->a_Step1, &cal_in_0_Step1_92B, DataSize((0x30000 | ArrayDataType)));
			PDAArrIncRefCnt(cal_in_0_Step1_92B,1);
		}
		else {
			heap->a_Step1 = PDAArrNewEmptyWithNDims( StringDataType, (ArrDimSize)1 );
			if (!PDAArrSet(cal_in_0_Step1_92B, &heap->a_Step1)) {
				CGenErr();
			}
		}
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->a_Step1), 0x30000 | ArrayDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->a_______________________________1), 0x40000 | ArrayDataType );
	PDAArrFree(heap->a_Step1);
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = 0;
			if ((nIndex >= 0) && heap->a_______________________________1 && (nIndex < NthDim(heap->a_______________________________1, (ArrDimSize)0))) {
				heap->n_______________1 = *(float64 *)NthElemFast(heap->a_______________________________1, nIndex, 8);
			}
			else {
				heap->n_______________1 = 0.0;
			}
			nIndex = 1;
			if ((nIndex >= 0) && heap->a_______________________________1 && (nIndex < NthDim(heap->a_______________________________1, (ArrDimSize)0))) {
				heap->n_______________2 = *(float64 *)NthElemFast(heap->a_______________________________1, nIndex, 8);
			}
			else {
				heap->n_______________2 = 0.0;
			}
		}
	if ((heap->a_______________________________1) && ((heap->a_______________________________1)->refcnt > 0)) {
			if (((heap->a_______________________________1)->refcnt == 1) && ((heap->a_______________________________1)->staticArray == false)) {
				(heap->a_______________________________1)->refcnt--;
				MemHandleFree( heap->a_______________________________1 );
				heap->a_______________________________1=NULL;
			}
			else
			 	PDAArrFree(heap->a_______________________________1);
		}
/* Bundle by name */
		{
			cl_A0000* cl_003 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c__________________, &heap->c_Center__Pixels_, sizeof( cl_A0000 ) );
			cl_003 = (cl_A0000*)&heap->c__________________;
	cl_003->el_0 = heap->n_______________1;
	cl_003->el_1 = heap->n_______________2;
		}
/* Unbundle by name */
		{
			cl_A0000* cl_004 = (cl_A0000*)&heap->c__________________;
			heap->n________________X_3 = cl_004->el_0;
			heap->n________________Y_3 = cl_004->el_1;
	}
		if (dtcal_in_1_Step3_291 == (0x30000 | ArrayDataType)) {
			MemMove(&heap->a_Step3, &cal_in_1_Step3_291, DataSize((0x30000 | ArrayDataType)));
			PDAArrIncRefCnt(cal_in_1_Step3_291,1);
		}
		else {
			heap->a_Step3 = PDAArrNewEmptyWithNDims( StringDataType, (ArrDimSize)1 );
			if (!PDAArrSet(cal_in_1_Step3_291, &heap->a_Step3)) {
				CGenErr();
			}
		}
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->a_Step3), 0x30000 | ArrayDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->a______________________________1), 0x40000 | ArrayDataType );
	PDAArrFree(heap->a_Step3);
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = 0;
			if ((nIndex >= 0) && heap->a______________________________1 && (nIndex < NthDim(heap->a______________________________1, (ArrDimSize)0))) {
				heap->n_______________4 = *(float64 *)NthElemFast(heap->a______________________________1, nIndex, 8);
			}
			else {
				heap->n_______________4 = 0.0;
			}
			nIndex = 1;
			if ((nIndex >= 0) && heap->a______________________________1 && (nIndex < NthDim(heap->a______________________________1, (ArrDimSize)0))) {
				heap->n_______________3 = *(float64 *)NthElemFast(heap->a______________________________1, nIndex, 8);
			}
			else {
				heap->n_______________3 = 0.0;
			}
		}
	if ((heap->a______________________________1) && ((heap->a______________________________1)->refcnt > 0)) {
			if (((heap->a______________________________1)->refcnt == 1) && ((heap->a______________________________1)->staticArray == false)) {
				(heap->a______________________________1)->refcnt--;
				MemHandleFree( heap->a______________________________1 );
				heap->a______________________________1=NULL;
			}
			else
			 	PDAArrFree(heap->a______________________________1);
		}
/* Bundle by name */
		{
			cl_A0000* cl_005 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c___________________1, &heap->c_Center__Pixels__1, sizeof( cl_A0000 ) );
			cl_005 = (cl_A0000*)&heap->c___________________1;
	cl_005->el_0 = heap->n_______________4;
	cl_005->el_1 = heap->n_______________3;
		}
/* Unbundle by name */
		{
			cl_A0000* cl_006 = (cl_A0000*)&heap->c___________________1;
			heap->n________________X_2 = cl_006->el_0;
			heap->n________________Y_2 = cl_006->el_1;
	}
		heap->n_y________ = *cal_in_4_y_________14D0;
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Y_3, floatDataType, &heap->n_y________, doubleDataType, opMinus, &heap->n____x_y_8, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Y_2, floatDataType, &heap->n____x_y_8, doubleDataType, opMinus, &heap->n____x_y_10, doubleDataType);
		heap->n_______ = *cal_in_5_A________2BF;
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n____x_y_10, doubleDataType, &heap->n_______, doubleDataType, opMult, &heap->n____x_y_6, doubleDataType);
		heap->n_x_________ = *cal_in_3_x__________14C1;
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________X_3, floatDataType, &heap->n_x_________, doubleDataType, opMinus, &heap->n____x_y_9, doubleDataType);
/* Bundle by name */
		{
			cl_A0000* cl_007 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c___________________2, &heap->c_Center__Pixels_1_4, sizeof( cl_A0000 ) );
			cl_007 = (cl_A0000*)&heap->c___________________2;
	cl_007->el_0 = heap->n____x_y_9;
	cl_007->el_1 = heap->n____x_y_8;
		}
/* Build array */
		{
			ArrDimSize i;
			ArrDimSize dimSize=0;
			heap->a_____________________2 = PDAArrNewEmptyWithNDims( 0xA0000 | ClusterDataType, (ArrDimSize)1 );
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
			if (!PDAArrSetData(heap->a_____________________2, i, &heap->c___________________1, 0xA0000 | ClusterDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a_____________________2, i, &heap->c___________________2, 0xA0000 | ClusterDataType)) {
				CGenErr();
			}
			i++;
		}
		PDAArrIncRefCnt(heap->a_____________________2, (uInt16)1); /* ABuild */
		PDAArrFree(*A_____________1FD);
		if (heap->a_____________________2 && (heap->a_____________________2->datatype == (0xA0000 | ClusterDataType))) {
			*A_____________1FD = PDAArrCopyOnModify(heap->a_____________________2);
		} else 
		{
			*A_____________1FD = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtA_____________1FD), ArrayDataTypeNDims(dtA_____________1FD));
			if (!PDAArrSet(heap->a_____________________2,A_____________1FD)) {
				CGenErr();
			}
			PDAArrFree(heap->a_____________________2);
		}
		{
			PDAArrPtr inputParam0 = NULL;
			extern cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1_init_;
			cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1 = NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1_init_;
			extern PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_;
			PDAArrPtr NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_ = pNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_;
			extern cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A_init_;
			cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A = NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A_init_;
			inputParam0 = PDAVHCopyOnModify(heap->a_____________________2,ArrayDataType);
			PDAClusterIncRefCnt(&NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1, 0x0 | ClusterDataType, 1);
			heap->a_IMAQ_Point_Distances_Distance = NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_;
			PDAClusterIncRefCnt(&NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A, 0x0 | ClusterDataType, 1);
			if ((NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_Run( 	0xC0000 | ArrayDataType, inputParam0,
			0x0 | ClusterDataType, NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1,
			0xB0000 | ArrayDataType, &heap->a_IMAQ_Point_Distances_Distance,
			0x0 | ClusterDataType, &NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A	)) == eFail) CGenErr();
	/* Free Cluster NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A*/
			{
				cl_00000* cl_008 = (cl_00000*)&NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A;
				if (cl_008->el_2 && (((PDAStrPtr)cl_008->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_008->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_008->el_2)->staticStr)) {
						MemHandleFree( cl_008->el_2 );
						cl_008->el_2=NULL;
					}
				}
			}
		}
		/**/
		/* 乘 */
		/**/
		{
			Boolean bNullInput1=false,bNullInput2=false;
			if(!heap->a_IMAQ_Point_Distances_Distance) {
				heap->a_IMAQ_Point_Distances_Distance = PDAArrNewEmptyWithNDims( floatDataType, (ArrDimSize)1 );
				bNullInput1=true;
			}
			if (!PDAArrBinop( &(heap->a_IMAQ_Point_Distances_Distance), 0xB0000 | ArrayDataType, &(heap->n_______), doubleDataType, opMult, &(heap->a____x_y_1), 0x40000 | ArrayDataType, NULL)){
				CGenErr();
			}
		if ((heap->a_IMAQ_Point_Distances_Distance) && ((heap->a_IMAQ_Point_Distances_Distance)->refcnt > 0)) {
				if (((heap->a_IMAQ_Point_Distances_Distance)->refcnt == 1) && ((heap->a_IMAQ_Point_Distances_Distance)->staticArray == false)) {
					(heap->a_IMAQ_Point_Distances_Distance)->refcnt--;
					MemHandleFree( heap->a_IMAQ_Point_Distances_Distance );
					heap->a_IMAQ_Point_Distances_Distance=NULL;
				}
				else
				 	PDAArrFree(heap->a_IMAQ_Point_Distances_Distance);
			}
			if (bNullInput1) {
				heap->a_IMAQ_Point_Distances_Distance = NULL;
			}
		}
		PDAArrIncRefCnt(heap->a____x_y_1, (uInt16)2); /* Primitive */
		PDAArrFree(*Distances__151C);
		if (heap->a____x_y_1 && (heap->a____x_y_1->datatype == (floatDataType))) {
			*Distances__151C = PDAArrCopyOnModify(heap->a____x_y_1);
		} else 
		{
			*Distances__151C = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtDistances__151C), ArrayDataTypeNDims(dtDistances__151C));
			if (!PDAArrSet(heap->a____x_y_1,Distances__151C)) {
				CGenErr();
			}
			PDAArrFree(heap->a____x_y_1);
		}
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________X_2, floatDataType, &heap->n____x_y_9, doubleDataType, opMinus, &heap->n____x_y_11, doubleDataType);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n____x_y_11, doubleDataType, &heap->n_______, doubleDataType, opMult, &heap->n____x_y_7, doubleDataType);
		/**/
		/* 除 */
		/**/
		PDAFltBinop( &heap->n____x_y_7, doubleDataType, &heap->n____x_y_6, doubleDataType, opDiv, &heap->n____x_y_5, doubleDataType);
		/**/
		/* 反正切 */
		/**/
		PDAFltUnop( &(heap->n____x_y_5), doubleDataType, opAtan, &(heap->n________arctan_x__1), doubleDataType);
/* Expr node */
		LVExpression( Expr26Int32, Expr26Float64, &heap->n________arctan_x__1, &heap->n_radians_to_degrees_1, doubleDataType );
		heap->n_Angle__Real_World_ = *cal_in_7_Angle__Real_World__150D;
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n_radians_to_degrees_1, doubleDataType, &heap->n_Angle__Real_World_, doubleDataType, opPlus, &heap->n____x_y_4, doubleDataType);
/* Expr node */
		LVExpression( Expr24Int32, Expr24Float64, &heap->n____x_y_4, &heap->n_degrees_to_radians, doubleDataType );
		/**/
		/* 余弦 */
		/**/
		PDAFltUnop( &(heap->n_degrees_to_radians), doubleDataType, opCos, &(heap->n______cos_x_), doubleDataType);
		/**/
		/* 乘 */
		/**/
		{
			Boolean bNullInput1=false,bNullInput2=false;
			if(!heap->a____x_y_1) {
				heap->a____x_y_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
				bNullInput2=true;
			}
			if (!PDAArrBinop( &(heap->n______cos_x_), doubleDataType, &(heap->a____x_y_1), 0x40000 | ArrayDataType, opMult, &(heap->a____x_y), 0x40000 | ArrayDataType, NULL)){
				CGenErr();
			}
	if ((heap->a____x_y_1) && ((heap->a____x_y_1)->refcnt > 0)) {
				if (((heap->a____x_y_1)->refcnt == 1) && ((heap->a____x_y_1)->staticArray == false)) {
					(heap->a____x_y_1)->refcnt--;
					MemHandleFree( heap->a____x_y_1 );
					heap->a____x_y_1=NULL;
				}
				else
				 	PDAArrFree(heap->a____x_y_1);
			}
			if (bNullInput2) {
				heap->a____x_y_1 = NULL;
			}
		}
		PDAArrFree(*cal_out_2_X_____________2256);
		if (heap->a____x_y && (heap->a____x_y->datatype == (doubleDataType))) {
			*cal_out_2_X_____________2256 = PDAArrCopyOnModify(heap->a____x_y);
		} else 
		{
			*cal_out_2_X_____________2256 = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtcal_out_2_X_____________2256), ArrayDataTypeNDims(dtcal_out_2_X_____________2256));
			if (!PDAArrSet(heap->a____x_y,cal_out_2_X_____________2256)) {
				CGenErr();
			}
			PDAArrFree(heap->a____x_y);
		}
		/**/
		/* 正弦 */
		/**/
		PDAFltUnop( &(heap->n_degrees_to_radians), doubleDataType, opSin, &(heap->n______sin_x_), doubleDataType);
		/**/
		/* 乘 */
		/**/
		{
			Boolean bNullInput1=false,bNullInput2=false;
			if(!heap->a____x_y_1) {
				heap->a____x_y_1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
				bNullInput2=true;
			}
			if (!PDAArrBinop( &(heap->n______sin_x_), doubleDataType, &(heap->a____x_y_1), 0x40000 | ArrayDataType, opMult, &(heap->a____x_y_2), 0x40000 | ArrayDataType, NULL)){
				CGenErr();
			}
	if ((heap->a____x_y_1) && ((heap->a____x_y_1)->refcnt > 0)) {
				if (((heap->a____x_y_1)->refcnt == 1) && ((heap->a____x_y_1)->staticArray == false)) {
					(heap->a____x_y_1)->refcnt--;
					MemHandleFree( heap->a____x_y_1 );
					heap->a____x_y_1=NULL;
				}
				else
				 	PDAArrFree(heap->a____x_y_1);
			}
			if (bNullInput2) {
				heap->a____x_y_1 = NULL;
			}
		}
		PDAArrFree(*cal_out_1_Y_____________1541);
		if (heap->a____x_y_2 && (heap->a____x_y_2->datatype == (doubleDataType))) {
			*cal_out_1_Y_____________1541 = PDAArrCopyOnModify(heap->a____x_y_2);
		} else 
		{
			*cal_out_1_Y_____________1541 = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtcal_out_1_Y_____________1541), ArrayDataTypeNDims(dtcal_out_1_Y_____________1541));
			if (!PDAArrSet(heap->a____x_y_2,cal_out_1_Y_____________1541)) {
				CGenErr();
			}
			PDAArrFree(heap->a____x_y_2);
		}
		cal_CleanupVIGlobalConstants();
		if (*Distances__151C && ((*Distances__151C)->refcnt == 1) && ((*Distances__151C)->staticArray == false)) {
	if ((*Distances__151C) && ((*Distances__151C)->refcnt > 0)) {
				if (((*Distances__151C)->refcnt == 1) && ((*Distances__151C)->staticArray == false)) {
					(*Distances__151C)->refcnt--;
					MemHandleFree( *Distances__151C );
					*Distances__151C=NULL;
				}
				else
				 	PDAArrFree(*Distances__151C);
			}
			*Distances__151C = NULL;
		}
		else
		{
	if ((*Distances__151C) && ((*Distances__151C)->refcnt > 0)) {
				if (((*Distances__151C)->refcnt == 1) && ((*Distances__151C)->staticArray == false)) {
					(*Distances__151C)->refcnt--;
					MemHandleFree( *Distances__151C );
					*Distances__151C=NULL;
				}
				else
				 	PDAArrFree(*Distances__151C);
			}
		}
		if (*A_____________1FD && ((*A_____________1FD)->refcnt == 1) && ((*A_____________1FD)->staticArray == false)) {
	PDAArrFree(*A_____________1FD);
			*A_____________1FD = NULL;
		}
		else
		{
	PDAArrFree(*A_____________1FD);
		}
		if (cal_in_1_Step3_291 && ((cal_in_1_Step3_291)->refcnt == 1) && ((cal_in_1_Step3_291)->staticArray == false)) {
	PDAArrFree(cal_in_1_Step3_291);
			cal_in_1_Step3_291 = NULL;
		}
		else
		{
	PDAArrFree(cal_in_1_Step3_291);
		}
		if (cal_in_0_Step1_92B && ((cal_in_0_Step1_92B)->refcnt == 1) && ((cal_in_0_Step1_92B)->staticArray == false)) {
	PDAArrFree(cal_in_0_Step1_92B);
			cal_in_0_Step1_92B = NULL;
		}
		else
		{
	PDAArrFree(cal_in_0_Step1_92B);
		}
		if (cal_in_2_Step4_BE7 && ((cal_in_2_Step4_BE7)->refcnt == 1) && ((cal_in_2_Step4_BE7)->staticArray == false)) {
	PDAArrFree(cal_in_2_Step4_BE7);
			cal_in_2_Step4_BE7 = NULL;
		}
		else
		{
	PDAArrFree(cal_in_2_Step4_BE7);
		}
		PDAClusterFree( &cal_in_6_Point1__Pixels__191, 0xA0000 | ClusterDataType);
		PDAClusterFree( &cal_in_8_Point2__Pixels__6BD, 0xA0000 | ClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr cal_VIName = "cal.vi";

eRunStatus cal_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus cal_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	cal_AddSubVIInstanceData();
	return cal_Run();
}


/****** Library interface **********/


void cal(float64 *Ind1,
float64 **X,
float64 **Y,
float64 *Ind2,
TD1 *Point2Pixels,
float64 AngleRealWorld,
TD1 *Point1Pixels,
float64 Ctrl3,
float64 y,
float64 x,
int32 *len,
int32 *len2)
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

	cal_AddSubVIInstanceData();
	cal_InitVIConstantList();

	cal_in_8_Point2__Pixels__6BD = *(cl_A0000*)Point2Pixels;
	cal_in_7_Angle__Real_World__150D = &(AngleRealWorld);
	cal_in_6_Point1__Pixels__191 = *(cl_A0000*)Point1Pixels;
	cal_in_5_A________2BF = &(Ctrl3);
	cal_in_4_y_________14D0 = &(y);
	cal_in_3_x__________14C1 = &(x);
	/* Call top level VI main function */
	cal_Run();
	*Ind1 = *cal_out_3_A__________5CF;
	*len = NthDim((*cal_out_2_X_____________2256), 0);
	*X = (float64*)PDAArr1DimCArrayFromLVArray( *cal_out_2_X_____________2256, 0x40000 | ArrayDataType);
	*len2 = NthDim((*cal_out_1_Y_____________1541), 0);
	*Y = (float64*)PDAArr1DimCArrayFromLVArray( *cal_out_1_Y_____________1541, 0x40000 | ArrayDataType);
	*Ind2 = *cal_out_0_A______9CF;

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


