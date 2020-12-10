/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: KB- 颜色分类.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\KB- 颜色分类.vi
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
#include "KB__________Lib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _KB___________heap { 
	cl_C0000 c_Constant;
	cl_C0000 c__________________;
	float64 n______x_2_1;
	float64 n____x_y_10;
	float64 n____x_y_11;
	float64 n______x_2;
	float64 n____x_y_9;
	float64 n____x_y;
	float64 n________________Radius__Pixels;
	float64 n______________;
	float64 n________sqrt_x_;
	float64 n_y;
	float64 n____x_y_8;
	float64 n____x_y_7;
	float64 n____x_y_1;
	float64 n____x_y_2;
	float64 n____x_y_3;
	float64 n____x_y_4;
	float64 n____x_y_6;
	float64 n____x_y_5;
	cl_B0000 c________________Center__Pixels;
	uInt32 dw__________CT_1;
	uInt32 dw_IMAQ_ColorImageToArray_Image;
	uInt32 dw__________LT;
	uInt32 dw__________CT;
	uInt32 dw_Image_Type;
	int32 l__________CT_2;
	int32 l_For_____N;
	int32 l_Constant_SR_5;
	int32 l__________CT_1;
	int32 l_Constant_SR_4;
	int32 l__________CT_4;
	int32 l_For_____i_1;
	int32 l__________CT_5;
	int32 l__________CT;
	int32 l_Constant_SR_3;
	int32 l__________SR_11;
	int32 l__________SR_10;
	int32 l_Constant_1;
	int32 l__________SR_9;
	int32 l_For_____N_3;
	int32 l_For_____i_3;
	int32 l_Constant_2;
	int32 l_____;
	int32 l_Constant;
	int32 l_For_____i_5;
	int32 l__________SR_2;
	int32 l__________SR_1;
	int32 l__________SR;
	int32 l__________CT_3;
	int32 l_For_____N_1;
	int32 l_For_____i_4;
	int32 l_For_____N_2;
	int32 l_Constant_SR_2;
	int32 l__________SR_8;
	int32 l__________SR_3;
	int32 l__________SR_4;
	int32 l__________SR_5;
	int32 l_Constant_SR_1;
	int32 l__________SR_6;
	int32 l__________SR_7;
	int32 l_Constant_SR;
	float32 n________________X_1;
	float32 n________________Y;
	float32 n________________Y_1;
	float32 n________________X;
	cl_D0000* c_Fitted_Circle__Inner_Find_Cir;
	cl_A0000 c_IMAQ_IntegerToColorValue_Colo;
	VoidHand Args15D_1;  
	VoidHand s_Image_Name;
	VoidHand Args482_1;  
	VoidHand Args7D0_1;  
	VoidHand Args4A0_1;  
	VoidHand Args4B1_1;  
	PDAArrPtr a_IMAQ_ColorImageToArray_Image_;
	PDAArrPtr a_IMAQ_IntegerToColorValue_Colo;
	PDAArrPtr a__________LT_2;
	PDAArrPtr a_IMAQ_ColorImageToArray_Imag_1;
	PDAArrPtr a__________LT_1;
	PDAArrPtr a______________;
	PDAArrPtr a_IMAQ_ColorImageToArray_Image__1;
	PDAArrPtr a_IMAQ_IntegerToColorValue_Colo_1;
	PDAArrPtr a____________________;
	PDAArrPtr a_IMAQ_ColorImageToArray_Image_1;
	PDAArrPtr a_IMAQ_ColorImageToArray_Imag_2;
	PDAArrPtr a_____________________1;
	PDAArrPtr a__________LT_3;
	PDAArrPtr a__________LT_4;
	PDAArrPtr a____x_y;
	PDAArrPtr a__________LT;
	CCGRCRefnumHandle l_image_in;
	CCGRCRefnumHandle l_IMAQ_Create_New_Image;
	CCGRCRefnumHandle l_IMAQ_ArrayToColorImage_Image_;
	uInt16 n_Color_Mode;
	uInt8 by________________Blue__or_Ligh;
	uInt8 by______5;
	uInt8 by______4;
	uInt8 by_____;
	uInt8 by______1;
	uInt8 by______3;
	uInt8 by______2;
	Boolean b_____________________________4;
	Boolean b______________________________1;
	Boolean b_____________________________C_1;
	Boolean b_____________________________1;
	Boolean b_____________________________C;
	Boolean b____________________________;
	Boolean b_____________________________2;
	Boolean b_____________________________3;
} _DATA_SECTION __KB___________heap; /* heap */

static struct _KB___________heap _DATA_SECTION *heap = &__KB___________heap; /* heap */

struct _tKB___________GlobalConstantsHeap {
	uInt8	refCnt;
	cl_C0000	i4D5;
	VoidHand	i9F7;
} _DATA_SECTION __KB___________GlobalConstantsHeap;
static struct _tKB___________GlobalConstantsHeap _DATA_SECTION *KB___________GlobalConstantsHeapPtr = &__KB___________GlobalConstantsHeap;

_DATA_SECTION  cl_D0000 KB___________in_0_Fitted_Circle__Inner_Find_Circular_Edge_2__2B_init_ = 
{1, 1, 
{0.0000000000000000000E+0, 0.0000000000000000000E+0}, 0.0000000000000000000E+0, 
{0.0000000000000000000E+0, 0.0000000000000000000E+0}, 0.0000000000000000000E+0, 0.0000000000000000000E+0, 0.0000000000000000000E+0, 0.0000000000000000000E+0};

_DATA_SECTION static  cl_E0000 g_cluster_4 = 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_F0000 g_cluster_5 = 
{(PDAStrPtr)(&g_string_1)};

struct _g_array_1 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	ArrDimSize	dimension_1;
	uInt32	data[1];
};
_DATA_SECTION static  struct _g_array_1 g_array_1 = 
{uInt32DataType, 1, 1, true, 2, 0, 0
};

_DATA_SECTION static  cl_A0000 g_cluster_6 = 
{0, 0, 0};

struct _g_array_2 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	ArrDimSize	dimension_1;
	cl_A0000	data[1];
};
_DATA_SECTION static  struct _g_array_2 g_array_2 = 
{0xA0000 | ClusterDataType, 1, 1, true, 2, 0, 0
};

_DATA_SECTION static  cl_E0000 g_cluster_7 = 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_F0000 g_cluster_8 = 
{(PDAStrPtr)(&g_string_2)};

_DATA_SECTION  cl_C0000 KB___________out_0_A________6DE_init_ = 
{0, 0, 0};

_DATA_SECTION static  cl_C0000 g_cluster_10 = 
{0, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION KB___________CleanupLSRs(void);
void _TEXT_SECTION KB___________CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION KB___________AddSubVIInstanceData(void);
void _TEXT_SECTION KB___________AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION KB___________AddVIGlobalConstants(void);
void _TEXT_SECTION KB___________AddVIGlobalConstants(void) {
	MemSet(KB___________GlobalConstantsHeapPtr,sizeof(*(KB___________GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION KB___________CleanupVIGlobalConstants(void);
void _TEXT_SECTION KB___________CleanupVIGlobalConstants(void) {
	(KB___________GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION KB___________InitVIConstantList(void);
void _TEXT_SECTION KB___________InitVIConstantList(void) {
	(KB___________GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static cl_E0000 fp1D2;
static DataType dtfp1D2 = 0xE0000 | ClusterDataType;
static cl_F0000 fp1A7_init_;
static cl_F0000* fp1A7 = &fp1A7_init_;
static DataType dtfp1A7 = 0xF0000 | ClusterDataType;
static PDAArrPtr Image_Pixels__U32___969_tmp_ = (PDAArrPtr)&g_array_1;
static PDAArrPtr *Image_Pixels__U32___969 = &Image_Pixels__U32___969_tmp_;
static DataType dtImage_Pixels__U32___969 = 0x100000 | ArrayDataType;
static PDAArrPtr A_______CC5_tmp_ = (PDAArrPtr)&g_array_2;
static PDAArrPtr *A_______CC5 = &A_______CC5_tmp_;
static DataType dtA_______CC5 = 0x110000 | ArrayDataType;
static int32 A___________6BF_init_ = 0 ;
static int32* A___________6BF = &A___________6BF_init_;
static DataType dtA___________6BF = int32DataType;
static cl_E0000 fp698;
static DataType dtfp698 = 0xE0000 | ClusterDataType;
static cl_F0000 fp676_init_;
static cl_F0000* fp676 = &fp676_init_;
static DataType dtfp676 = 0xF0000 | ClusterDataType;
static int32 A_______54F_init_ = 0 ;
static int32* A_______54F = &A_______54F_init_;
static DataType dtA_______54F = int32DataType;
static int32 A_______74A_init_ = 0 ;
static int32* A_______74A = &A_______74A_init_;
static DataType dtA_______74A = int32DataType;
cl_D0000* KB___________in_0_Fitted_Circle__Inner_Find_Circular_Edge_2__2B = &KB___________in_0_Fitted_Circle__Inner_Find_Circular_Edge_2__2B_init_;
static DataType dtKB___________in_0_Fitted_Circle__Inner_Find_Circular_Edge_2__2B = 0xD0000 | BigClusterDataType;
cl_C0000 KB___________out_0_A________6DE_tmp_;
static cl_C0000* KB___________out_0_A________6DE = &KB___________out_0_A________6DE_tmp_;
static DataType dtKB___________out_0_A________6DE = 0xC0000 | ClusterDataType;
extern eRunStatus KB___________Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	fp1D2 = g_cluster_4;
	PDAClusterIncRefCnt(&fp1D2, 0xE0000 | ClusterDataType, 1);
	*fp1A7 = g_cluster_5;
	PDAClusterIncRefCnt(fp1A7, 0xF0000 | ClusterDataType, 1);
	Image_Pixels__U32___969_tmp_ = (PDAArrPtr)&g_array_1;
	Image_Pixels__U32___969 = (&Image_Pixels__U32___969_tmp_);
	A_______CC5_tmp_ = (PDAArrPtr)&g_array_2;
	A_______CC5 = (&A_______CC5_tmp_);
	fp698 = g_cluster_7;
	PDAClusterIncRefCnt(&fp698, 0xE0000 | ClusterDataType, 1);
	*fp676 = g_cluster_8;
	PDAClusterIncRefCnt(fp676, 0xF0000 | ClusterDataType, 1);
	*KB___________out_0_A________6DE = KB___________out_0_A________6DE_init_;
	PDAClusterIncRefCnt(KB___________out_0_A________6DE, 0xC0000 | ClusterDataType, 1);
	KB___________InitVIConstantList();
	{
		heap->n_Color_Mode = 0;
		heap->l_Constant_2 = 0;
		heap->n_y = 3.0000000000000000000E+1;
		KB___________GlobalConstantsHeapPtr->i9F7 = PDAStrNewFromBuf(_LVT("untitled"),(uInt32)8);
		heap->s_Image_Name = KB___________GlobalConstantsHeapPtr->i9F7;
		heap->dw_Image_Type = 4;
		heap->l_Constant_1 = 2;
		heap->l_____ = 0;
		heap->l_Constant = 64;
		{
			MemMove(&(KB___________GlobalConstantsHeapPtr->i4D5),&g_cluster_10,GetClusterSize( 0xC0000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_10,0xC0000 | ClusterDataType,1);
		}
		heap->c_Constant = KB___________GlobalConstantsHeapPtr->i4D5;
		{
			extern int32 IMAQ_Create_in_0_Border_Size_55;
			extern cl_00000 IMAQ_Create_in_3_error_in__no_error__29_init_;
			cl_00000 IMAQ_Create_in_3_error_in__no_error__29 = IMAQ_Create_in_3_error_in__no_error__29_init_;
			extern CCGRCRefnumHandle IMAQ_Create_out_0_New_Image_4F_init_;
			CCGRCRefnumHandle IMAQ_Create_out_0_New_Image_4F = IMAQ_Create_out_0_New_Image_4F_init_;
			extern cl_00000 IMAQ_Create_out_1_error_out_7_init_;
			cl_00000 IMAQ_Create_out_1_error_out_7 = IMAQ_Create_out_1_error_out_7_init_;
			PDAClusterIncRefCnt(&IMAQ_Create_in_3_error_in__no_error__29, 0x0 | ClusterDataType, 1);
			heap->l_IMAQ_Create_New_Image = IMAQ_Create_out_0_New_Image_4F_init_;
			PDAClusterIncRefCnt(&IMAQ_Create_out_1_error_out_7, 0x0 | ClusterDataType, 1);
			if ((IMAQ_Create_Run( 	int32DataType, IMAQ_Create_in_0_Border_Size_55,
			StringDataType, heap->s_Image_Name,
			uInt32DataType, heap->dw_Image_Type,
			0x0 | ClusterDataType, IMAQ_Create_in_3_error_in__no_error__29,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Create_New_Image,
			0x0 | ClusterDataType, &IMAQ_Create_out_1_error_out_7	)) == eFail) CGenErr();
	/* Free Cluster IMAQ_Create_out_1_error_out_7*/
			{
				cl_00000* cl_001 = (cl_00000*)&IMAQ_Create_out_1_error_out_7;
				if (cl_001->el_2 && (((PDAStrPtr)cl_001->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_001->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_001->el_2)->staticStr)) {
						MemHandleFree( cl_001->el_2 );
						cl_001->el_2=NULL;
					}
				}
			}
		}
		heap->c_Fitted_Circle__Inner_Find_Cir = (cl_D0000*)KB___________in_0_Fitted_Circle__Inner_Find_Circular_Edge_2__2B;
		PDAClusterIncRefCnt(&KB___________in_0_Fitted_Circle__Inner_Find_Circular_Edge_2__2B,0xD0000 | BigClusterDataType,1);
/* Unbundle by name */
		{
			cl_D0000* cl_002;
			if (!heap->c_Fitted_Circle__Inner_Find_Cir) heap->c_Fitted_Circle__Inner_Find_Cir = PDAClusterNewEmpty( 0xD0000 | BigClusterDataType );
			cl_002 = (cl_D0000*)heap->c_Fitted_Circle__Inner_Find_Cir;
			memcpy( &heap->c________________Center__Pixels, &(cl_002->el_0), sizeof(cl_B0000) );
			heap->n________________Radius__Pixels = cl_002->el_1;
	/* Free Cluster heap->c_Fitted_Circle__Inner_Find_Cir*/
			PDAClusterFree( &heap->c_Fitted_Circle__Inner_Find_Cir, 0xD0000 | BigClusterDataType );
		}
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Radius__Pixels, doubleDataType, &heap->n_y, doubleDataType, opMinus, &heap->n____x_y, doubleDataType);
/* Unbundle by name */
		{
			cl_B0000* cl_004 = (cl_B0000*)&heap->c________________Center__Pixels;
			heap->n________________X = cl_004->el_0;
			heap->n________________Y = cl_004->el_1;
	}
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Y, floatDataType, &heap->n____x_y, doubleDataType, opPlus, &heap->n____x_y_4, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Y, floatDataType, &heap->n____x_y, doubleDataType, opMinus, &heap->n____x_y_2, doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________X, floatDataType, &heap->n____x_y, doubleDataType, opPlus, &heap->n____x_y_3, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________X, floatDataType, &heap->n____x_y, doubleDataType, opMinus, &heap->n____x_y_1, doubleDataType);
/* Build array */
		{
			ArrDimSize i;
			ArrDimSize dimSize=0;
			heap->a____________________ = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!heap->a____________________){
				CGenErr();
			}
			dimSize += 1;
			dimSize += 1;
			dimSize += 1;
			dimSize += 1;
			PDAArrSetDim(heap->a____________________, (ArrDimSize)0, dimSize);
			if (!PDAArrAllocData(&heap->a____________________)){
				CGenErr();
			}
			i=0;
			if (!PDAArrSetData(heap->a____________________, i, &heap->n____x_y_1, doubleDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->n____x_y_2, doubleDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->n____x_y_3, doubleDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->n____x_y_4, doubleDataType)) {
				CGenErr();
			}
			i++;
		}
		heap->l_image_in = (CCGRCRefnumHandle)KB___________in_1_image_in_1A1;
		CCGRCRefnumIncRefCnt(heap->l_image_in, 1);
		CCGRCRefnumIncRefCnt(heap->l_image_in, (int32)1); /* FPTerm */
		{
			PDAArrPtr inputParam0 = NULL;
			extern cl_00000 IMAQ_ColorImageToArray_in_2_error_in__no_error__1_init_;
			cl_00000 IMAQ_ColorImageToArray_in_2_error_in__no_error__1 = IMAQ_ColorImageToArray_in_2_error_in__no_error__1_init_;
			extern PDAArrPtr pIMAQ_ColorImageToArray_out_0_Image_Pixels__U32__47_init_;
			PDAArrPtr IMAQ_ColorImageToArray_out_0_Image_Pixels__U32__47_init_ = pIMAQ_ColorImageToArray_out_0_Image_Pixels__U32__47_init_;
			extern cl_00000 IMAQ_ColorImageToArray_out_1_error_out_32_init_;
			cl_00000 IMAQ_ColorImageToArray_out_1_error_out_32 = IMAQ_ColorImageToArray_out_1_error_out_32_init_;
			extern PDAArrPtr pIMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_;
			PDAArrPtr IMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_ = pIMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_;
			inputParam0 = PDAVHCopyOnModify(heap->a____________________,ArrayDataType);
			PDAClusterIncRefCnt(&IMAQ_ColorImageToArray_in_2_error_in__no_error__1, 0x0 | ClusterDataType, 1);
			heap->a_IMAQ_ColorImageToArray_Image__1 = IMAQ_ColorImageToArray_out_0_Image_Pixels__U32__47_init_;
			PDAClusterIncRefCnt(&IMAQ_ColorImageToArray_out_1_error_out_32, 0x0 | ClusterDataType, 1);
			PDAArrIncRefCnt(IMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_, 1);
			if ((IMAQ_ColorImageToArray_Run( 	0x40000 | ArrayDataType, inputParam0,
			CCGRCRefnumHandleDataType, heap->l_image_in,
			0x0 | ClusterDataType, IMAQ_ColorImageToArray_in_2_error_in__no_error__1,
			0x100000 | ArrayDataType, &heap->a_IMAQ_ColorImageToArray_Image__1,
			0x0 | ClusterDataType, &IMAQ_ColorImageToArray_out_1_error_out_32,
			0x130000 | ArrayDataType, &IMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_	)) == eFail) CGenErr();
	/* Free Cluster IMAQ_ColorImageToArray_out_1_error_out_32*/
			{
				cl_00000* cl_005 = (cl_00000*)&IMAQ_ColorImageToArray_out_1_error_out_32;
				if (cl_005->el_2 && (((PDAStrPtr)cl_005->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_005->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_005->el_2)->staticStr)) {
						MemHandleFree( cl_005->el_2 );
						cl_005->el_2=NULL;
					}
				}
			}
	PDAArrFree(IMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_);
		}
/* Unbundle by name */
		{
			cl_B0000* cl_006 = (cl_B0000*)&heap->c________________Center__Pixels;
			heap->n________________X_1 = cl_006->el_0;
			heap->n________________Y_1 = cl_006->el_1;
	}
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Y_1, floatDataType, &heap->n________________Radius__Pixels, doubleDataType, opPlus, &heap->n____x_y_5, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Y_1, floatDataType, &heap->n________________Radius__Pixels, doubleDataType, opMinus, &heap->n____x_y_7, doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________X_1, floatDataType, &heap->n________________Radius__Pixels, doubleDataType, opPlus, &heap->n____x_y_6, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________X_1, floatDataType, &heap->n________________Radius__Pixels, doubleDataType, opMinus, &heap->n____x_y_8, doubleDataType);
/* Build array */
		{
			ArrDimSize i;
			ArrDimSize dimSize=0;
			heap->a_____________________1 = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!heap->a_____________________1){
				CGenErr();
			}
			dimSize += 1;
			dimSize += 1;
			dimSize += 1;
			dimSize += 1;
			PDAArrSetDim(heap->a_____________________1, (ArrDimSize)0, dimSize);
			if (!PDAArrAllocData(&heap->a_____________________1)){
				CGenErr();
			}
			i=0;
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->n____x_y_8, doubleDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->n____x_y_7, doubleDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->n____x_y_6, doubleDataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->n____x_y_5, doubleDataType)) {
				CGenErr();
			}
			i++;
		}
		{
			PDAArrPtr inputParam0 = NULL;
			extern cl_00000 IMAQ_ColorImageToArray_in_2_error_in__no_error__1_init_;
			cl_00000 IMAQ_ColorImageToArray_in_2_error_in__no_error__1 = IMAQ_ColorImageToArray_in_2_error_in__no_error__1_init_;
			extern PDAArrPtr pIMAQ_ColorImageToArray_out_0_Image_Pixels__U32__47_init_;
			PDAArrPtr IMAQ_ColorImageToArray_out_0_Image_Pixels__U32__47_init_ = pIMAQ_ColorImageToArray_out_0_Image_Pixels__U32__47_init_;
			extern cl_00000 IMAQ_ColorImageToArray_out_1_error_out_32_init_;
			cl_00000 IMAQ_ColorImageToArray_out_1_error_out_32 = IMAQ_ColorImageToArray_out_1_error_out_32_init_;
			extern PDAArrPtr pIMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_;
			PDAArrPtr IMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_ = pIMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_;
			inputParam0 = PDAVHCopyOnModify(heap->a_____________________1,ArrayDataType);
			PDAClusterIncRefCnt(&IMAQ_ColorImageToArray_in_2_error_in__no_error__1, 0x0 | ClusterDataType, 1);
			heap->a_IMAQ_ColorImageToArray_Image_ = IMAQ_ColorImageToArray_out_0_Image_Pixels__U32__47_init_;
			PDAClusterIncRefCnt(&IMAQ_ColorImageToArray_out_1_error_out_32, 0x0 | ClusterDataType, 1);
			PDAArrIncRefCnt(IMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_, 1);
			if ((IMAQ_ColorImageToArray_Run( 	0x40000 | ArrayDataType, inputParam0,
			CCGRCRefnumHandleDataType, heap->l_image_in,
			0x0 | ClusterDataType, IMAQ_ColorImageToArray_in_2_error_in__no_error__1,
			0x100000 | ArrayDataType, &heap->a_IMAQ_ColorImageToArray_Image_,
			0x0 | ClusterDataType, &IMAQ_ColorImageToArray_out_1_error_out_32,
			0x130000 | ArrayDataType, &IMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_	)) == eFail) CGenErr();
	/* Free Cluster IMAQ_ColorImageToArray_out_1_error_out_32*/
			{
				cl_00000* cl_007 = (cl_00000*)&IMAQ_ColorImageToArray_out_1_error_out_32;
				if (cl_007->el_2 && (((PDAStrPtr)cl_007->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_007->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_007->el_2)->staticStr)) {
						MemHandleFree( cl_007->el_2 );
						cl_007->el_2=NULL;
					}
				}
			}
	PDAArrFree(IMAQ_ColorImageToArray_out_2_Image_Pixels__U64__6A_init_);
		}
		PDAArrIncRefCnt(heap->a_IMAQ_ColorImageToArray_Image_, (uInt16)3); /* Func call */
		PDAArrFree(*Image_Pixels__U32___969);
		if (heap->a_IMAQ_ColorImageToArray_Image_ && (heap->a_IMAQ_ColorImageToArray_Image_->datatype == (uInt32DataType))) {
			*Image_Pixels__U32___969 = PDAArrCopyOnModify(heap->a_IMAQ_ColorImageToArray_Image_);
		} else 
		{
			*Image_Pixels__U32___969 = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtImage_Pixels__U32___969), ArrayDataTypeNDims(dtImage_Pixels__U32___969));
			if (!PDAArrSet(heap->a_IMAQ_ColorImageToArray_Image_,Image_Pixels__U32___969)) {
				CGenErr();
			}
			PDAArrFree(heap->a_IMAQ_ColorImageToArray_Image_);
		}
		/**/
		/* 数组大小 */
		/**/
		if (!PDAArrSize(heap->a_IMAQ_ColorImageToArray_Image_,  (int32)2, (VoidHand*)&(heap->a______________))){
			CGenErr();
		}
		/**/
		/* 除 */
		/**/
		{
			Boolean bNullInput1=false,bNullInput2=false;
			if(!heap->a______________) {
				heap->a______________ = PDAArrNewEmptyWithNDims( int32DataType, (ArrDimSize)1 );
				bNullInput1=true;
			}
			if (!PDAArrBinop( &(heap->a______________), 0x140000 | ArrayDataType, &(heap->l_Constant_1), int32DataType, opDiv, &(heap->a____x_y), 0x40000 | ArrayDataType, NULL)){
				CGenErr();
			}
		if ((heap->a______________) && ((heap->a______________)->refcnt > 0)) {
				if (((heap->a______________)->refcnt == 1) && ((heap->a______________)->staticArray == false)) {
					(heap->a______________)->refcnt--;
					MemHandleFree( heap->a______________ );
					heap->a______________=NULL;
				}
				else
				 	PDAArrFree(heap->a______________);
			}
			if (bNullInput1) {
				heap->a______________ = NULL;
			}
		}
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = (int32)heap->l_____;
			if ((nIndex >= 0) && heap->a____x_y && (nIndex < NthDim(heap->a____x_y, (ArrDimSize)0))) {
				heap->n______________ = *(float64 *)NthElemFast(heap->a____x_y, nIndex, 8);
			}
			else {
				heap->n______________ = 0.0;
			}
		}
	if ((heap->a____x_y) && ((heap->a____x_y)->refcnt > 0)) {
			if (((heap->a____x_y)->refcnt == 1) && ((heap->a____x_y)->staticArray == false)) {
				(heap->a____x_y)->refcnt--;
				MemHandleFree( heap->a____x_y );
				heap->a____x_y=NULL;
			}
			else
			 	PDAArrFree(heap->a____x_y);
		}
		heap->l_For_____N = MaxArrDimSize;
		heap->l_For_____N = LVMIN(heap->l_For_____N, ( heap->a_IMAQ_ColorImageToArray_Image_ ? FirstDim( heap->a_IMAQ_ColorImageToArray_Image_ ) : 0 ));
		if (!(heap->a__________LT = PDAArrCreateLpTunArr( (ArrDimSize)heap->l_For_____N, 0x100000 | ArrayDataType, uInt32DataType, (ArrDimSize)2 ))){
			CGenErr();
		}
		heap->a_IMAQ_ColorImageToArray_Image_1 = heap->a_IMAQ_ColorImageToArray_Image_;
		for (heap->l_For_____i_1 = 0;(heap->l_For_____i_1 < heap->l_For_____N) && !gAppStop && !gLastError; (heap->l_For_____i_1)++) {
			{
				{
					 /* Array index */
					ArrDimSize arrIndices[2] = { 0, 0 };
					Boolean bRangeError = false;
					if (!heap->a_IMAQ_ColorImageToArray_Image_1) {
						heap->a_IMAQ_ColorImageToArray_Image_1  = PDAArrNewEmptyWithNDims( uInt32DataType, (ArrDimSize)2 );
					}

					bRangeError = !PDAArrNElems(heap->a_IMAQ_ColorImageToArray_Image_1);
					if (!PDAArrIndexTopPtr(heap->a_IMAQ_ColorImageToArray_Image_1, heap->l_For_____i_1, &heap->a_IMAQ_ColorImageToArray_Imag_1, 0x150000 | ArrayDataType)) {
						CGenErr();
					}
				}
				heap->l_For_____N_1 = MaxArrDimSize;
				heap->l_For_____N_1 = LVMIN(heap->l_For_____N_1, ( heap->a_IMAQ_ColorImageToArray_Imag_1 ? FirstDim( heap->a_IMAQ_ColorImageToArray_Imag_1 ) : 0 ));
				if (!(heap->a__________LT_1 = PDAArrCreateLpTunArr( (ArrDimSize)heap->l_For_____N_1, uInt32DataType, uCharDataType, (ArrDimSize)0 ))){
					CGenErr();
				}
				heap->a_IMAQ_ColorImageToArray_Imag_2 = heap->a_IMAQ_ColorImageToArray_Imag_1;
				for (heap->l_For_____i_3 = 0;(heap->l_For_____i_3 < heap->l_For_____N_1) && !gAppStop && !gLastError; (heap->l_For_____i_3)++) {
					{
						{ /* Array Index 1D */
							int32 nIndex = 0;
							nIndex = (int32)heap->l_For_____i_3;
							if ((nIndex >= 0) && heap->a_IMAQ_ColorImageToArray_Imag_2 && (nIndex < NthDim(heap->a_IMAQ_ColorImageToArray_Imag_2, (ArrDimSize)0))) {
								heap->dw_IMAQ_ColorImageToArray_Image = *(uInt32 *)NthElemFast(heap->a_IMAQ_ColorImageToArray_Imag_2, nIndex, 4);
							}
							else {
								heap->dw_IMAQ_ColorImageToArray_Image = 0;
							}
						}
						/**/
						/* 减 */
						/**/
						PDAFltBinop( &heap->l_For_____i_1, int32DataType, &heap->n______________, doubleDataType, opMinus, &heap->n____x_y_11, doubleDataType);
						/**/
						/* 平方 */
						/**/
						PDAFltUnop( &(heap->n____x_y_11), doubleDataType, opSq, &(heap->n______x_2), doubleDataType);
						/**/
						/* 减 */
						/**/
						PDAFltBinop( &heap->l_For_____i_3, int32DataType, &heap->n______________, doubleDataType, opMinus, &heap->n____x_y_10, doubleDataType);
						/**/
						/* 平方 */
						/**/
						PDAFltUnop( &(heap->n____x_y_10), doubleDataType, opSq, &(heap->n______x_2_1), doubleDataType);
						/**/
						/* 加 */
						/**/
						PDAFltBinop( &heap->n______x_2, doubleDataType, &heap->n______x_2_1, doubleDataType, opPlus, &heap->n____x_y_9, doubleDataType);
						/**/
						/* 平方根 */
						/**/
						PDAFltUnop( &(heap->n____x_y_9), doubleDataType, opSqrt, &(heap->n________sqrt_x_), doubleDataType);
						/**/
						/* 判定范围并强制转换 */
						/**/
						PDAInRangeCoerce( &(heap->n________________Radius__Pixels), doubleDataType, &(heap->n________sqrt_x_), doubleDataType, &(heap->n____x_y), doubleDataType, true, true, &(heap->b____________________________), NULL, uCharDataType );
			{ /* Select */
							heap->b_____________________________C = heap->b____________________________;
							/* begin case */
							if ( heap->b_____________________________C ) {
								{
									heap->dw__________CT = heap->dw_IMAQ_ColorImageToArray_Image;
								}
							} /* end case */
							/* begin case */
							else {
								{
									heap->dw__________CT = 0;
								}
							} /* end case */
						} /* end switch */
						*(uInt32 *)LptunNthElem(heap->a__________LT_1) = heap->dw__________CT; 
					}
				} /* end for */
				/* FreeLoopInputs. */
	if ((heap->a_IMAQ_ColorImageToArray_Imag_2) && ((heap->a_IMAQ_ColorImageToArray_Imag_2)->refcnt > 0)) {
					if (((heap->a_IMAQ_ColorImageToArray_Imag_2)->refcnt == 1) && ((heap->a_IMAQ_ColorImageToArray_Imag_2)->staticArray == false)) {
						(heap->a_IMAQ_ColorImageToArray_Imag_2)->refcnt--;
						MemHandleFree( heap->a_IMAQ_ColorImageToArray_Imag_2 );
						heap->a_IMAQ_ColorImageToArray_Imag_2=NULL;
					}
					else
					 	PDAArrFree(heap->a_IMAQ_ColorImageToArray_Imag_2);
				}
				heap->a__________LT_1 = PDAArrCreate1DArrFromLpTunArr( heap->a__________LT_1 );
				if (!PDAArrAddElToLpTunArr( (VoidHand)(&heap->a__________LT), (VoidHand)(&heap->a__________LT_1) )){
					CGenErr();
				}
			}
		} /* end for */
		/* FreeLoopInputs. */
	if ((heap->a_IMAQ_ColorImageToArray_Image_1) && ((heap->a_IMAQ_ColorImageToArray_Image_1)->refcnt > 0)) {
			if (((heap->a_IMAQ_ColorImageToArray_Image_1)->refcnt == 1) && ((heap->a_IMAQ_ColorImageToArray_Image_1)->staticArray == false)) {
				(heap->a_IMAQ_ColorImageToArray_Image_1)->refcnt--;
				MemHandleFree( heap->a_IMAQ_ColorImageToArray_Image_1 );
				heap->a_IMAQ_ColorImageToArray_Image_1=NULL;
			}
			else
			 	PDAArrFree(heap->a_IMAQ_ColorImageToArray_Image_1);
		}
		heap->a__________LT = PDAArrCreate2DArrFromLpTunArr( heap->a__________LT );
		PDAArrIncRefCnt(heap->a__________LT, (uInt16)1); /* GenLpArrayFinales.1 */
		heap->l_For_____N_2 = MaxArrDimSize;
		heap->l_For_____N_2 = LVMIN(heap->l_For_____N_2, ( heap->a__________LT ? FirstDim( heap->a__________LT ) : 0 ));
		if (!(heap->a_IMAQ_IntegerToColorValue_Colo = PDAArrCreateLpTunArr( (ArrDimSize)heap->l_For_____N_2, 0x110000 | ArrayDataType, 0xA0000 | ClusterDataType, (ArrDimSize)2 ))){
			CGenErr();
		}
		heap->a__________LT_2 = heap->a__________LT;
		heap->l__________SR_3 = 0;
		heap->l__________SR_4 = 0;
		heap->l__________SR_5 = 0;
		for (heap->l_For_____i_4 = 0;(heap->l_For_____i_4 < heap->l_For_____N_2) && !gAppStop && !gLastError; (heap->l_For_____i_4)++) {
			{
				{
					 /* Array index */
					ArrDimSize arrIndices[2] = { 0, 0 };
					Boolean bRangeError = false;
					if (!heap->a__________LT_2) {
						heap->a__________LT_2  = PDAArrNewEmptyWithNDims( uInt32DataType, (ArrDimSize)2 );
					}

					bRangeError = !PDAArrNElems(heap->a__________LT_2);
					if (!PDAArrIndexTopPtr(heap->a__________LT_2, heap->l_For_____i_4, &heap->a__________LT_3, 0x150000 | ArrayDataType)) {
						CGenErr();
					}
				}
				heap->l_Constant_SR_2 = heap->l__________SR_3;
				heap->l_Constant_SR_1 = heap->l__________SR_4;
				heap->l_Constant_SR = heap->l__________SR_5;
				heap->l_For_____N_3 = MaxArrDimSize;
				heap->l_For_____N_3 = LVMIN(heap->l_For_____N_3, ( heap->a__________LT_3 ? FirstDim( heap->a__________LT_3 ) : 0 ));
				if (!(heap->a_IMAQ_IntegerToColorValue_Colo_1 = PDAArrCreateLpTunArr( (ArrDimSize)heap->l_For_____N_3, 0xA0000 | ClusterDataType, uCharDataType, (ArrDimSize)0 ))){
					CGenErr();
				}
				heap->a__________LT_4 = heap->a__________LT_3;
				heap->l__________SR_9 = heap->l_Constant_SR_2;
				heap->l__________SR_10 = heap->l_Constant_SR_1;
				heap->l__________SR_11 = heap->l_Constant_SR;
				for (heap->l_For_____i_5 = 0;(heap->l_For_____i_5 < heap->l_For_____N_3) && !gAppStop && !gLastError; (heap->l_For_____i_5)++) {
					{
						{ /* Array Index 1D */
							int32 nIndex = 0;
							nIndex = (int32)heap->l_For_____i_5;
							if ((nIndex >= 0) && heap->a__________LT_4 && (nIndex < NthDim(heap->a__________LT_4, (ArrDimSize)0))) {
								heap->dw__________LT = *(uInt32 *)NthElemFast(heap->a__________LT_4, nIndex, 4);
							}
							else {
								heap->dw__________LT = 0;
							}
						}
						heap->l_Constant_SR_5 = heap->l__________SR_9;
						heap->by______5 = 108;
						heap->by______4 = 255;
						heap->l_Constant_SR_4 = heap->l__________SR_10;
						heap->l_Constant_SR_3 = heap->l__________SR_11;
						heap->by______3 = 200;
						heap->by______2 = 255;
						heap->by_____ = 0;
						heap->by______1 = 50;
						{
							extern cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1_init_;
							cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1 = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1_init_;
							extern PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53_init_;
							extern PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE_init_;
							extern PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_;
							PDAArrPtr NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_ = pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_;
							extern PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_;
							PDAArrPtr NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_ = pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_;
							extern cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78_init_;
							cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78 = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78_init_;
							extern cl_A0000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15_init_;
							cl_A0000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15 = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15_init_;
							PDAClusterIncRefCnt(&NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1, 0x0 | ClusterDataType, 1);
							PDAArrIncRefCnt(pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53_init_, 1);
							PDAArrIncRefCnt(pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE_init_, 1);
							PDAArrIncRefCnt(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_, 1);
							PDAArrIncRefCnt(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_, 1);
							PDAClusterIncRefCnt(&NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78, 0x0 | ClusterDataType, 1);
							heap->c_IMAQ_IntegerToColorValue_Colo = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15;
							if ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_Run( 	0x0 | ClusterDataType, NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1,
							0x60000 | ArrayDataType, pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53_init_,
							0x100000 | ArrayDataType, pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE_init_,
							uInt32DataType, heap->dw__________LT,
							uInt16DataType, heap->n_Color_Mode,
							0x110000 | ArrayDataType, &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_,
							0x160000 | ArrayDataType, &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_,
							0x0 | ClusterDataType, &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78,
							0xA0000 | ClusterDataType, &heap->c_IMAQ_IntegerToColorValue_Colo	)) == eFail) CGenErr();
	PDAArrFree(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_);
	PDAArrFree(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_);
	/* Free Cluster NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78*/
							{
								cl_00000* cl_008 = (cl_00000*)&NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78;
				if (cl_008->el_2 && (((PDAStrPtr)cl_008->el_2)->refcnt > 0)) {
									if ((--((PDAStrPtr)cl_008->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_008->el_2)->staticStr)) {
										MemHandleFree( cl_008->el_2 );
										cl_008->el_2=NULL;
									}
								}
							}
						}
/* Unbundle by name */
						{
							cl_A0000* cl_009 = (cl_A0000*)&heap->c_IMAQ_IntegerToColorValue_Colo;
							heap->by________________Blue__or_Ligh = cl_009->el_2;
	}
						/**/
						/* 判定范围并强制转换 */
						/**/
						PDAInRangeCoerceInt( &(heap->by______1), uCharDataType, &(heap->by________________Blue__or_Ligh), uCharDataType, &(heap->by_____), uCharDataType, true, true, &(heap->b_____________________________1), NULL, uCharDataType );
			{ /* Select */
							heap->b_____________________________C_1 = heap->b_____________________________1;
							/* begin case */
							if ( heap->b_____________________________C_1 ) {
								{
									/**/
									/* 加1 */
									/**/
									heap->l__________CT = (int32)(heap->l_Constant_SR_3 + 1);
								}
							} /* end case */
							/* begin case */
							else {
								{
									heap->l__________CT = heap->l_Constant_SR_3;
								}
							} /* end case */
						} /* end switch */
						/**/
						/* 判定范围并强制转换 */
						/**/
						PDAInRangeCoerceInt( &(heap->by______2), uCharDataType, &(heap->by________________Blue__or_Ligh), uCharDataType, &(heap->by______3), uCharDataType, true, true, &(heap->b_____________________________2), NULL, uCharDataType );
			{ /* Select */
							heap->b______________________________1 = heap->b_____________________________2;
							/* begin case */
							if ( heap->b______________________________1 ) {
								{
									/**/
									/* 加1 */
									/**/
									heap->l__________CT_1 = (int32)(heap->l_Constant_SR_4 + 1);
								}
							} /* end case */
							/* begin case */
							else {
								{
									heap->l__________CT_1 = heap->l_Constant_SR_4;
								}
							} /* end case */
						} /* end switch */
						/**/
						/* 判定范围并强制转换 */
						/**/
						PDAInRangeCoerceInt( &(heap->by______4), uCharDataType, &(heap->by________________Blue__or_Ligh), uCharDataType, &(heap->by______5), uCharDataType, true, true, &(heap->b_____________________________3), NULL, uCharDataType );
			{ /* Select */
							heap->b_____________________________4 = heap->b_____________________________3;
							/* begin case */
							if ( heap->b_____________________________4 ) {
								{
									/**/
									/* 加1 */
									/**/
									heap->l__________CT_2 = (int32)(heap->l_Constant_SR_5 + 1);
								}
							} /* end case */
							/* begin case */
							else {
								{
									heap->l__________CT_2 = heap->l_Constant_SR_5;
								}
							} /* end case */
						} /* end switch */
						if (!PDAArrAddElToLpTunArr( (VoidHand)(&heap->a_IMAQ_IntegerToColorValue_Colo_1), (VoidHand)(&heap->c_IMAQ_IntegerToColorValue_Colo) )){
							CGenErr();
						}
						heap->l__________SR_9 = heap->l__________CT_2;
						heap->l__________SR_10 = heap->l__________CT_1;
						heap->l__________SR_11 = heap->l__________CT;
					}
				} /* end for */
				heap->l__________SR_8 = heap->l__________SR_9;
				heap->l__________SR_6 = heap->l__________SR_10;
				heap->l__________SR_7 = heap->l__________SR_11;
				/* FreeLoopInputs. */
	if ((heap->a__________LT_4) && ((heap->a__________LT_4)->refcnt > 0)) {
					if (((heap->a__________LT_4)->refcnt == 1) && ((heap->a__________LT_4)->staticArray == false)) {
						(heap->a__________LT_4)->refcnt--;
						MemHandleFree( heap->a__________LT_4 );
						heap->a__________LT_4=NULL;
					}
					else
					 	PDAArrFree(heap->a__________LT_4);
				}
				heap->a_IMAQ_IntegerToColorValue_Colo_1 = PDAArrCreate1DArrFromLpTunArr( heap->a_IMAQ_IntegerToColorValue_Colo_1 );
				if (!PDAArrAddElToLpTunArr( (VoidHand)(&heap->a_IMAQ_IntegerToColorValue_Colo), (VoidHand)(&heap->a_IMAQ_IntegerToColorValue_Colo_1) )){
					CGenErr();
				}
				heap->l__________SR_3 = heap->l__________SR_8;
				heap->l__________SR_4 = heap->l__________SR_6;
				heap->l__________SR_5 = heap->l__________SR_7;
			}
		} /* end for */
		heap->l__________SR_2 = heap->l__________SR_3;
		heap->l__________SR_1 = heap->l__________SR_4;
		heap->l__________SR = heap->l__________SR_5;
		/* FreeLoopInputs. */
	if ((heap->a__________LT_2) && ((heap->a__________LT_2)->refcnt > 0)) {
			if (((heap->a__________LT_2)->refcnt == 1) && ((heap->a__________LT_2)->staticArray == false)) {
				(heap->a__________LT_2)->refcnt--;
				MemHandleFree( heap->a__________LT_2 );
				heap->a__________LT_2=NULL;
			}
			else
			 	PDAArrFree(heap->a__________LT_2);
		}
		heap->a_IMAQ_IntegerToColorValue_Colo = PDAArrCreate2DArrFromLpTunArr( heap->a_IMAQ_IntegerToColorValue_Colo );
		PDAArrFree(*A_______CC5);
		if (heap->a_IMAQ_IntegerToColorValue_Colo && (heap->a_IMAQ_IntegerToColorValue_Colo->datatype == (0xA0000 | ClusterDataType))) {
			*A_______CC5 = PDAArrCopyOnModify(heap->a_IMAQ_IntegerToColorValue_Colo);
		} else 
		{
			*A_______CC5 = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtA_______CC5), ArrayDataTypeNDims(dtA_______CC5));
			if (!PDAArrSet(heap->a_IMAQ_IntegerToColorValue_Colo,A_______CC5)) {
				CGenErr();
			}
			PDAArrFree(heap->a_IMAQ_IntegerToColorValue_Colo);
		}
		*A___________6BF = heap->l__________SR_2;
		*A_______54F = heap->l__________SR_1;
		*A_______74A = heap->l__________SR;
/* Bundle by name */
		{
			cl_C0000* cl_010 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c__________________, &heap->c_Constant, sizeof( cl_C0000 ) );
			cl_010 = (cl_C0000*)&heap->c__________________;
	cl_010->el_0 = heap->l__________SR_2;
	cl_010->el_1 = heap->l__________SR_1;
	cl_010->el_2 = heap->l__________SR;
		}
		if (KB___________out_0_A________6DE) {
			PDAClusterCopyOnModify(&heap->c__________________, 0xC0000 | ClusterDataType, KB___________out_0_A________6DE);
		}
		else {
		}
		{
			PDAArrPtr inputParam0 = NULL;
			extern PDAArrPtr pIMAQ_ArrayToColorImage_in_2_Image_Pixels__U64__5C_init_;
			extern cl_00000 IMAQ_ArrayToColorImage_in_3_error_in__no_error__1_init_;
			cl_00000 IMAQ_ArrayToColorImage_in_3_error_in__no_error__1 = IMAQ_ArrayToColorImage_in_3_error_in__no_error__1_init_;
			extern CCGRCRefnumHandle IMAQ_ArrayToColorImage_out_0_Image_Out_4F_init_;
			CCGRCRefnumHandle IMAQ_ArrayToColorImage_out_0_Image_Out_4F = IMAQ_ArrayToColorImage_out_0_Image_Out_4F_init_;
			extern cl_00000 IMAQ_ArrayToColorImage_out_1_error_out_25_init_;
			cl_00000 IMAQ_ArrayToColorImage_out_1_error_out_25 = IMAQ_ArrayToColorImage_out_1_error_out_25_init_;
			inputParam0 = PDAVHCopyOnModify(heap->a__________LT,ArrayDataType);
			PDAArrIncRefCnt(pIMAQ_ArrayToColorImage_in_2_Image_Pixels__U64__5C_init_, 1);
			PDAClusterIncRefCnt(&IMAQ_ArrayToColorImage_in_3_error_in__no_error__1, 0x0 | ClusterDataType, 1);
			heap->l_IMAQ_ArrayToColorImage_Image_ = IMAQ_ArrayToColorImage_out_0_Image_Out_4F_init_;
			PDAClusterIncRefCnt(&IMAQ_ArrayToColorImage_out_1_error_out_25, 0x0 | ClusterDataType, 1);
			if ((IMAQ_ArrayToColorImage_Run( 	0x100000 | ArrayDataType, inputParam0,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Create_New_Image,
			0x130000 | ArrayDataType, pIMAQ_ArrayToColorImage_in_2_Image_Pixels__U64__5C_init_,
			0x0 | ClusterDataType, IMAQ_ArrayToColorImage_in_3_error_in__no_error__1,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_ArrayToColorImage_Image_,
			0x0 | ClusterDataType, &IMAQ_ArrayToColorImage_out_1_error_out_25	)) == eFail) CGenErr();
	/* Free Cluster IMAQ_ArrayToColorImage_out_1_error_out_25*/
			{
				cl_00000* cl_011 = (cl_00000*)&IMAQ_ArrayToColorImage_out_1_error_out_25;
				if (cl_011->el_2 && (((PDAStrPtr)cl_011->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_011->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_011->el_2)->staticStr)) {
						MemHandleFree( cl_011->el_2 );
						cl_011->el_2=NULL;
					}
				}
			}
		}
		if (KB___________out_1_image_in_2_670) {
	CCGRCRefnumFree(*KB___________out_1_image_in_2_670);
			*KB___________out_1_image_in_2_670 =heap->l_IMAQ_ArrayToColorImage_Image_;
		}
		else {
	CCGRCRefnumFree(heap->l_IMAQ_ArrayToColorImage_Image_);
		}
		/**/
		/* 减 */
		/**/
	if ((heap->a_IMAQ_ColorImageToArray_Image__1) && ((heap->a_IMAQ_ColorImageToArray_Image__1)->refcnt > 0)) {
			if (((heap->a_IMAQ_ColorImageToArray_Image__1)->refcnt == 1) && ((heap->a_IMAQ_ColorImageToArray_Image__1)->staticArray == false)) {
				(heap->a_IMAQ_ColorImageToArray_Image__1)->refcnt--;
				MemHandleFree( heap->a_IMAQ_ColorImageToArray_Image__1 );
				heap->a_IMAQ_ColorImageToArray_Image__1=NULL;
			}
			else
			 	PDAArrFree(heap->a_IMAQ_ColorImageToArray_Image__1);
		}
	if ((heap->a_IMAQ_ColorImageToArray_Image_) && ((heap->a_IMAQ_ColorImageToArray_Image_)->refcnt > 0)) {
			if (((heap->a_IMAQ_ColorImageToArray_Image_)->refcnt == 1) && ((heap->a_IMAQ_ColorImageToArray_Image_)->staticArray == false)) {
				(heap->a_IMAQ_ColorImageToArray_Image_)->refcnt--;
				MemHandleFree( heap->a_IMAQ_ColorImageToArray_Image_ );
				heap->a_IMAQ_ColorImageToArray_Image_=NULL;
			}
			else
			 	PDAArrFree(heap->a_IMAQ_ColorImageToArray_Image_);
		}
		KB___________CleanupVIGlobalConstants();
		PDAClusterFree( &fp1D2, 0xE0000 | ClusterDataType);
		PDAClusterFree( fp1A7, 0xF0000 | ClusterDataType);
		if (*Image_Pixels__U32___969 && ((*Image_Pixels__U32___969)->refcnt == 1) && ((*Image_Pixels__U32___969)->staticArray == false)) {
	if ((*Image_Pixels__U32___969) && ((*Image_Pixels__U32___969)->refcnt > 0)) {
				if (((*Image_Pixels__U32___969)->refcnt == 1) && ((*Image_Pixels__U32___969)->staticArray == false)) {
					(*Image_Pixels__U32___969)->refcnt--;
					MemHandleFree( *Image_Pixels__U32___969 );
					*Image_Pixels__U32___969=NULL;
				}
				else
				 	PDAArrFree(*Image_Pixels__U32___969);
			}
			*Image_Pixels__U32___969 = NULL;
		}
		else
		{
	if ((*Image_Pixels__U32___969) && ((*Image_Pixels__U32___969)->refcnt > 0)) {
				if (((*Image_Pixels__U32___969)->refcnt == 1) && ((*Image_Pixels__U32___969)->staticArray == false)) {
					(*Image_Pixels__U32___969)->refcnt--;
					MemHandleFree( *Image_Pixels__U32___969 );
					*Image_Pixels__U32___969=NULL;
				}
				else
				 	PDAArrFree(*Image_Pixels__U32___969);
			}
		}
		if (*A_______CC5 && ((*A_______CC5)->refcnt == 1) && ((*A_______CC5)->staticArray == false)) {
	PDAArrFree(*A_______CC5);
			*A_______CC5 = NULL;
		}
		else
		{
	PDAArrFree(*A_______CC5);
		}
		PDAClusterFree( &fp698, 0xE0000 | ClusterDataType);
		PDAClusterFree( fp676, 0xF0000 | ClusterDataType);
		PDAClusterFree( &KB___________in_0_Fitted_Circle__Inner_Find_Circular_Edge_2__2B, 0xD0000 | BigClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr KB___________VIName = "KB- \321\325\311\253\267\326\300\340.vi";

eRunStatus KB___________Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus KB___________Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	KB___________AddSubVIInstanceData();
	return KB___________Run();
}


/****** Library interface **********/


void KB(TD1 *Ind1)
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

	KB___________AddSubVIInstanceData();
	KB___________InitVIConstantList();

	/* Call top level VI main function */
	KB___________Run();
	*((cl_C0000*)Ind1) = *KB___________out_0_A________6DE;

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


