/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: Gasket with or without display.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\Gasket with or without display.vi
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
#include "Gasket_with_or_without_displayLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _Gasket_with_or_without_display_heap { 
	cl_110000 c________________vi_Bounding_Re;
	cl_110000 c________________vi_Bounding_Re_1;
	cl_00000 c_IMAQ_Clear_Overlay_error_out;
	cl_00000 c_IMAQ_Convert_ROI_to_Annulus_e;
	cl_00000 c_IMAQ_Overlay_Oval_error_out_1;
	cl_00000 c_IMAQ_Overlay_Oval_error_out;
	cl_00000 c__________CT_1;
	cl_00000 c__________CT;
	cl_00000 c_IMAQ_Overlay_Text_error_out;
	cl_00000 c_error_in__no_error_;
	float64 n_________;
	float64 n___________________;
	cl_140000 c_ROI_Descriptor;
	cl_120000 c_Origin;
	uInt32 dw_BG_Color__Transparent_;
	uInt32 dw__________CT_1;
	uInt32 dw_Color_1;
	uInt32 dw_Color;
	uInt32 dw_Drawing_Mode__Frame_;
	uInt32 dw_Drawing_Mode__Frame__1;
	uInt32 dw__________CT;
	int32 l________________Inner_Radius;
	int32 l________________Center_X;
	int32 l________________Center_Y;
	int32 l________________Outer_Radius;
	cl_F0000* c_Font__Size___Style;
	cl_100000* c_IMAQ_Convert_ROI_to_Annulus_A;
	VoidHand s__________CT_1;
	VoidHand s__________CT;
	VoidHand ArgsA7B_1;  
	CCGRCRefnumHandle l_IMAQ_Overlay_Text_Image_Out;
	CCGRCRefnumHandle l__________CT_1;
	CCGRCRefnumHandle l__________CT;
	CCGRCRefnumHandle l_IMAQ_Overlay_Oval_Image_Out_1;
	CCGRCRefnumHandle l_IMAQ_Overlay_Oval_Image_Out;
	CCGRCRefnumHandle l_IMAQ_Clear_Overlay_Image_Out;
	CCGRCRefnumHandle l__________IN;
	int16 i__________0_1______0__1;
	Boolean b____________x____y__CS;
	Boolean b_____0___x___0_;
	Boolean b____________x____y_;
} _DATA_SECTION __Gasket_with_or_without_display_heap; /* heap */

static struct _Gasket_with_or_without_display_heap _DATA_SECTION *heap = &__Gasket_with_or_without_display_heap; /* heap */

struct _tGasket_with_or_without_display_GlobalConstantsHeap {
	uInt8	refCnt;
	cl_120000	i79F;
	VoidHand	i825;
	VoidHand	i873;
} _DATA_SECTION __Gasket_with_or_without_display_GlobalConstantsHeap;
static struct _tGasket_with_or_without_display_GlobalConstantsHeap _DATA_SECTION *Gasket_with_or_without_display_GlobalConstantsHeapPtr = &__Gasket_with_or_without_display_GlobalConstantsHeap;

_DATA_SECTION static  cl_150000 g_cluster_1 = 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_160000 g_cluster_2 = 
{(PDAStrPtr)(&g_string_1)};

_DATA_SECTION static  cl_150000 g_cluster_3 = 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_160000 g_cluster_4 = 
{(PDAStrPtr)(&g_string_2)};

struct _g_string_3 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 Gasket_with_or_without_display_in_2_error_in__no_error__468 = 
{0, 0, (PDAStrPtr)(&g_string_3)};

struct _g_string_4 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_4 g_string_4 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 Gasket_with_or_without_display_out_0_error_out_4B0_init_ = 
{0, 0, (PDAStrPtr)(&g_string_4)};

struct _g_array_1 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[1];
};
_DATA_SECTION static  struct _g_array_1 g_array_1 = 
{int32DataType, 1, 1, true, 1, 0
};

struct _g_array_2 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[1];
};
_DATA_SECTION static  struct _g_array_2 g_array_2 = 
{int32DataType, 1, 1, true, 1, 0
};

_DATA_SECTION static  cl_C0000 g_cluster_7 = 
{0, 0, (PDAArrPtr)(&g_array_2)};

struct _g_array_3 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	cl_C0000	data[1];
};
_DATA_SECTION static  struct _g_array_3 g_array_3 = 
{0xC0000 | ClusterDataType, 1, 1, true, 1, 0
};

_DATA_SECTION  cl_140000 Gasket_with_or_without_display_in_4_ROI_Descriptor_6DE = 
{(PDAArrPtr)(&g_array_1), (PDAArrPtr)(&g_array_3)};

_DATA_SECTION static  cl_100000 g_cluster_9 = 
{1, 1, 0, 0, 0, 0, 0.0000000000000000000E+0, 0.0000000000000000000E+0};

struct _g_string_5 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_5 g_string_5 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_F0000 Gasket_with_or_without_display_in_1_Font__Size___Style_C22_init_ = 
{1, 1, 1, 
{(PDAStrPtr)(&g_string_5), 100, 0, 0, 0, 0, 0, 1, 0.0000000000000000000E+0}, 0, 0};

_DATA_SECTION static  cl_120000 g_cluster_12 = 
{260, 260};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION Gasket_with_or_without_display_CleanupLSRs(void);
void _TEXT_SECTION Gasket_with_or_without_display_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION Gasket_with_or_without_display_AddSubVIInstanceData(void);
void _TEXT_SECTION Gasket_with_or_without_display_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION Gasket_with_or_without_display_AddVIGlobalConstants(void);
void _TEXT_SECTION Gasket_with_or_without_display_AddVIGlobalConstants(void) {
	MemSet(Gasket_with_or_without_display_GlobalConstantsHeapPtr,sizeof(*(Gasket_with_or_without_display_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION Gasket_with_or_without_display_CleanupVIGlobalConstants(void);
void _TEXT_SECTION Gasket_with_or_without_display_CleanupVIGlobalConstants(void) {
	(Gasket_with_or_without_display_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION Gasket_with_or_without_display_InitVIConstantList(void);
void _TEXT_SECTION Gasket_with_or_without_display_InitVIConstantList(void) {
	(Gasket_with_or_without_display_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static cl_150000 fp55;
static DataType dtfp55 = 0x150000 | ClusterDataType;
static cl_160000 fp33_init_;
static cl_160000* fp33 = &fp33_init_;
static DataType dtfp33 = 0x160000 | ClusterDataType;
static cl_150000 fp1AF;
static DataType dtfp1AF = 0x150000 | ClusterDataType;
static cl_160000 fp18D_init_;
static cl_160000* fp18D = &fp18D_init_;
static DataType dtfp18D = 0x160000 | ClusterDataType;
static cl_100000* Annulus__5C0_tmp_ = &g_cluster_9;
static cl_100000** Annulus__5C0 = &Annulus__5C0_tmp_;
static DataType dtAnnulus__5C0 = 0x100000 | BigClusterDataType;
static DataType dtGasket_with_or_without_display_in_2_error_in__no_error__468 = 0x0 | ClusterDataType;
cl_00000 Gasket_with_or_without_display_out_0_error_out_4B0_tmp_;
static cl_00000* Gasket_with_or_without_display_out_0_error_out_4B0 = &Gasket_with_or_without_display_out_0_error_out_4B0_tmp_;
static DataType dtGasket_with_or_without_display_out_0_error_out_4B0 = 0x0 | ClusterDataType;
static DataType dtGasket_with_or_without_display_in_4_ROI_Descriptor_6DE = 0x140000 | ClusterDataType;
float64 Gasket_with_or_without_display_in_3_A____________________2CA_init_ = 0.0000000000000000000E+0 ;
static float64* Gasket_with_or_without_display_in_3_A____________________2CA = &Gasket_with_or_without_display_in_3_A____________________2CA_init_;
static DataType dtGasket_with_or_without_display_in_3_A____________________2CA = doubleDataType;
float64 Gasket_with_or_without_display_in_0_A__________313_init_ = 0.0000000000000000000E+0 ;
static float64* Gasket_with_or_without_display_in_0_A__________313 = &Gasket_with_or_without_display_in_0_A__________313_init_;
static DataType dtGasket_with_or_without_display_in_0_A__________313 = doubleDataType;
cl_F0000* Gasket_with_or_without_display_in_1_Font__Size___Style_C22 = &Gasket_with_or_without_display_in_1_Font__Size___Style_C22_init_;
static DataType dtGasket_with_or_without_display_in_1_Font__Size___Style_C22 = 0xF0000 | BigClusterDataType;
Boolean Gasket_with_or_without_display_out_2_A___________397_init_ = false;
static Boolean* Gasket_with_or_without_display_out_2_A___________397 = &Gasket_with_or_without_display_out_2_A___________397_init_;
static DataType dtGasket_with_or_without_display_out_2_A___________397 = BooleanDataType;
Boolean Gasket_with_or_without_display_out_1_A______4FA_init_ = false;
static Boolean* Gasket_with_or_without_display_out_1_A______4FA = &Gasket_with_or_without_display_out_1_A______4FA_init_;
static DataType dtGasket_with_or_without_display_out_1_A______4FA = BooleanDataType;
extern eRunStatus Gasket_with_or_without_display_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	fp55 = g_cluster_1;
	PDAClusterIncRefCnt(&fp55, 0x150000 | ClusterDataType, 1);
	*fp33 = g_cluster_2;
	PDAClusterIncRefCnt(fp33, 0x160000 | ClusterDataType, 1);
	fp1AF = g_cluster_3;
	PDAClusterIncRefCnt(&fp1AF, 0x150000 | ClusterDataType, 1);
	*fp18D = g_cluster_4;
	PDAClusterIncRefCnt(fp18D, 0x160000 | ClusterDataType, 1);
	Annulus__5C0_tmp_ = &g_cluster_9;
	Annulus__5C0 = &Annulus__5C0_tmp_;
	PDAClusterIncRefCnt(Annulus__5C0, 0x100000 | BigClusterDataType, 1);
	*Gasket_with_or_without_display_out_0_error_out_4B0 = Gasket_with_or_without_display_out_0_error_out_4B0_init_;
	PDAClusterIncRefCnt(Gasket_with_or_without_display_out_0_error_out_4B0, 0x0 | ClusterDataType, 1);
	Gasket_with_or_without_display_InitVIConstantList();
	{
		heap->dw_Drawing_Mode__Frame__1 = 0;
		heap->dw_Drawing_Mode__Frame_ = 0;
		heap->dw_Color_1 = RGB(100, 255, 0);
		heap->dw_Color = RGB(100, 255, 0);
		{
			MemMove(&(Gasket_with_or_without_display_GlobalConstantsHeapPtr->i79F),&g_cluster_12,GetClusterSize( 0x120000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_12,0x120000 | ClusterDataType,1);
		}
		heap->c_Origin = Gasket_with_or_without_display_GlobalConstantsHeapPtr->i79F;
		heap->dw_BG_Color__Transparent_ = LVTransparentVal;
		heap->n___________________ = *Gasket_with_or_without_display_in_3_A____________________2CA;
		heap->n_________ = *Gasket_with_or_without_display_in_0_A__________313;
		/**/
		/* 大于等于？ */
		/**/
		PDAFltBinop( &heap->n_________, doubleDataType, &heap->n___________________, doubleDataType, opGE, &heap->b____________x____y_, BooleanDataType);
		*Gasket_with_or_without_display_out_2_A___________397 =heap->b____________x____y_;
		/**/
		/* 布尔值至(0,1)转换 */
		/**/
		heap->i__________0_1______0__1 = (int16)(int32)((heap->b____________x____y_)?1:0);
		/**/
		/* 等于0？ */
		/**/
		heap->b_____0___x___0_ = (Boolean)(heap->i__________0_1______0__1 == 0);
		*Gasket_with_or_without_display_out_1_A______4FA =heap->b_____0___x___0_;
		MemMove(&heap->c_error_in__no_error_, &Gasket_with_or_without_display_in_2_error_in__no_error__468, sizeof(cl_00000));
		PDAClusterIncRefCnt(&Gasket_with_or_without_display_in_2_error_in__no_error__468,0x0 | ClusterDataType,1);
		MemMove(&heap->c_ROI_Descriptor, &Gasket_with_or_without_display_in_4_ROI_Descriptor_6DE, sizeof(cl_140000));
		PDAClusterIncRefCnt(&Gasket_with_or_without_display_in_4_ROI_Descriptor_6DE,0x140000 | ClusterDataType,1);
		{
			extern cl_00000 IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A_init_;
			cl_00000 IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A = IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A_init_;
			extern cl_100000 IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42_init_;
			cl_100000* IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42 = &IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42_init_;
			heap->c_IMAQ_Convert_ROI_to_Annulus_e = IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A;
			heap->c_IMAQ_Convert_ROI_to_Annulus_A = IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42;
			if ((IMAQ_Convert_ROI_to_Annulus_Run( 	0x0 | ClusterDataType, heap->c_error_in__no_error_,
			0x140000 | ClusterDataType, heap->c_ROI_Descriptor,
			0x0 | ClusterDataType, &heap->c_IMAQ_Convert_ROI_to_Annulus_e,
			0x100000 | BigClusterDataType, &heap->c_IMAQ_Convert_ROI_to_Annulus_A	)) == eFail) CGenErr();
		}
		/* Cluster Inc Ref Count:  Func call*/
		if(heap->c_IMAQ_Convert_ROI_to_Annulus_A) heap->c_IMAQ_Convert_ROI_to_Annulus_A->refcnt += 1;
		if (Annulus__5C0) {
			/* Free Cluster Annulus__5C0*/
			PDAClusterFree( Annulus__5C0, 0x100000 | BigClusterDataType );
			PDAClusterCopyOnModify(&heap->c_IMAQ_Convert_ROI_to_Annulus_A, 0x100000 | BigClusterDataType, Annulus__5C0);
		}
		else {
		}
/* Unbundle by name */
		{
			cl_100000* cl_003;
			if (!heap->c_IMAQ_Convert_ROI_to_Annulus_A) heap->c_IMAQ_Convert_ROI_to_Annulus_A = PDAClusterNewEmpty( 0x100000 | BigClusterDataType );
			cl_003 = (cl_100000*)heap->c_IMAQ_Convert_ROI_to_Annulus_A;
			heap->l________________Center_X = cl_003->el_0;
			heap->l________________Center_Y = cl_003->el_1;
			heap->l________________Inner_Radius = cl_003->el_2;
			heap->l________________Outer_Radius = cl_003->el_3;
	/* Free Cluster heap->c_IMAQ_Convert_ROI_to_Annulus_A*/
			PDAClusterFree( &heap->c_IMAQ_Convert_ROI_to_Annulus_A, 0x100000 | BigClusterDataType );
		}
		{
			float64 castTemp0 = 0.0;
			float64 castTemp1 = 0.0;
			float64 castTemp2 = 0.0;
			extern cl_110000 A________________out_0_Bounding_Rectangle_out_72_init_;
			cl_110000 A________________out_0_Bounding_Rectangle_out_72 = A________________out_0_Bounding_Rectangle_out_72_init_;
			CopyValueFree(&heap->l________________Outer_Radius, int32DataType, &castTemp0, doubleDataType);
			CopyValueFree(&heap->l________________Center_Y, int32DataType, &castTemp1, doubleDataType);
			CopyValueFree(&heap->l________________Center_X, int32DataType, &castTemp2, doubleDataType);
			heap->c________________vi_Bounding_Re = A________________out_0_Bounding_Rectangle_out_72;
			if ((A________________Run( 	doubleDataType, &castTemp0,
			doubleDataType, &castTemp1,
			doubleDataType, &castTemp2,
			0x110000 | ClusterDataType, &heap->c________________vi_Bounding_Re	)) == eFail) CGenErr();
		}
		{
			float64 castTemp0 = 0.0;
			float64 castTemp1 = 0.0;
			float64 castTemp2 = 0.0;
			extern cl_110000 A________________out_0_Bounding_Rectangle_out_72_init_;
			cl_110000 A________________out_0_Bounding_Rectangle_out_72 = A________________out_0_Bounding_Rectangle_out_72_init_;
			CopyValueFree(&heap->l________________Inner_Radius, int32DataType, &castTemp0, doubleDataType);
			CopyValueFree(&heap->l________________Center_Y, int32DataType, &castTemp1, doubleDataType);
			CopyValueFree(&heap->l________________Center_X, int32DataType, &castTemp2, doubleDataType);
			heap->c________________vi_Bounding_Re_1 = A________________out_0_Bounding_Rectangle_out_72;
			if ((A________________Run( 	doubleDataType, &castTemp0,
			doubleDataType, &castTemp1,
			doubleDataType, &castTemp2,
			0x110000 | ClusterDataType, &heap->c________________vi_Bounding_Re_1	)) == eFail) CGenErr();
		}
		heap->l__________IN = (CCGRCRefnumHandle)Gasket_with_or_without_display_in_5_A__________IN_2B;
		CCGRCRefnumIncRefCnt(heap->l__________IN, 1);
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
			0x0 | ClusterDataType, heap->c_IMAQ_Convert_ROI_to_Annulus_e,
			CCGRCRefnumHandleDataType, heap->l__________IN,
			0x0 | ClusterDataType, &heap->c_IMAQ_Clear_Overlay_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Clear_Overlay_Image_Out	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Oval_in_1_Group_105;
			extern cl_00000 IMAQ_Overlay_Oval_out_0_error_out_41_init_;
			cl_00000 IMAQ_Overlay_Oval_out_0_error_out_41 = IMAQ_Overlay_Oval_out_0_error_out_41_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Oval_out_1_Image_Out_62 = IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			heap->c_IMAQ_Overlay_Oval_error_out_1 = IMAQ_Overlay_Oval_out_0_error_out_41;
			heap->l_IMAQ_Overlay_Oval_Image_Out_1 = IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			if ((IMAQ_Overlay_Oval_Run( 	uInt32DataType, heap->dw_Color,
			StringDataType, IMAQ_Overlay_Oval_in_1_Group_105,
			0x0 | ClusterDataType, heap->c_IMAQ_Clear_Overlay_error_out,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__1,
			0x110000 | ClusterDataType, heap->c________________vi_Bounding_Re_1,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Clear_Overlay_Image_Out,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Oval_error_out_1,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Oval_Image_Out_1	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Oval_in_1_Group_105;
			extern cl_00000 IMAQ_Overlay_Oval_out_0_error_out_41_init_;
			cl_00000 IMAQ_Overlay_Oval_out_0_error_out_41 = IMAQ_Overlay_Oval_out_0_error_out_41_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Oval_out_1_Image_Out_62 = IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			heap->c_IMAQ_Overlay_Oval_error_out = IMAQ_Overlay_Oval_out_0_error_out_41;
			heap->l_IMAQ_Overlay_Oval_Image_Out = IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			if ((IMAQ_Overlay_Oval_Run( 	uInt32DataType, heap->dw_Color_1,
			StringDataType, IMAQ_Overlay_Oval_in_1_Group_105,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Oval_error_out_1,
			uInt32DataType, heap->dw_Drawing_Mode__Frame_,
			0x110000 | ClusterDataType, heap->c________________vi_Bounding_Re,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Oval_Image_Out_1,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Oval_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Oval_Image_Out	)) == eFail) CGenErr();
		}
		{ /* Select */
			heap->b____________x____y__CS = heap->b____________x____y_;
			/* begin case */
			if ( heap->b____________x____y__CS ) {
				{
					Gasket_with_or_without_display_GlobalConstantsHeapPtr->i825 = PDAStrNewFromBuf(_LVT("\323\320\315\255\306\254"),(uInt32)6);
					heap->s__________CT = Gasket_with_or_without_display_GlobalConstantsHeapPtr->i825;
					heap->dw__________CT = RGB(100, 255, 0);
					heap->l__________CT = heap->l_IMAQ_Overlay_Oval_Image_Out;
					MemMove( &heap->c__________CT, &heap->c_IMAQ_Overlay_Oval_error_out, sizeof( cl_00000 ) );
				}
			} /* end case */
			/* begin case */
			else {
				{
					Gasket_with_or_without_display_GlobalConstantsHeapPtr->i873 = PDAStrNewFromBuf(_LVT("\316\336\315\255\306\254"),(uInt32)6);
					heap->s__________CT = Gasket_with_or_without_display_GlobalConstantsHeapPtr->i873;
					heap->dw__________CT = RGB(255, 0, 0);
					heap->l__________CT = heap->l_IMAQ_Overlay_Oval_Image_Out;
					MemMove( &heap->c__________CT, &heap->c_IMAQ_Overlay_Oval_error_out, sizeof( cl_00000 ) );
				}
			} /* end case */
		} /* end switch */
		heap->c_Font__Size___Style = (cl_F0000*)Gasket_with_or_without_display_in_1_Font__Size___Style_C22;
		PDAClusterIncRefCnt(&Gasket_with_or_without_display_in_1_Font__Size___Style_C22,0xF0000 | BigClusterDataType,1);
		{
			extern VoidHand IMAQ_Overlay_Text_in_1_Group_194;
			cl_F0000* inputParam0 = NULL;
			extern cl_00000 IMAQ_Overlay_Text_out_0_error_out_44_init_;
			cl_00000 IMAQ_Overlay_Text_out_0_error_out_44 = IMAQ_Overlay_Text_out_0_error_out_44_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Text_out_1_Image_Out_A8_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Text_out_1_Image_Out_A8 = IMAQ_Overlay_Text_out_1_Image_Out_A8_init_;
			PDAClusterCopyOnModify(&heap->c_Font__Size___Style,0xF0000 | BigClusterDataType, &inputParam0);
			heap->c_IMAQ_Overlay_Text_error_out = IMAQ_Overlay_Text_out_0_error_out_44;
			heap->l_IMAQ_Overlay_Text_Image_Out = IMAQ_Overlay_Text_out_1_Image_Out_A8_init_;
			if ((IMAQ_Overlay_Text_Run( 	uInt32DataType, heap->dw_BG_Color__Transparent_,
			StringDataType, IMAQ_Overlay_Text_in_1_Group_194,
			uInt32DataType, heap->dw__________CT,
			0xF0000 | BigClusterDataType, inputParam0,
			0x0 | ClusterDataType, heap->c__________CT,
			StringDataType, heap->s__________CT,
			0x120000 | ClusterDataType, heap->c_Origin,
			CCGRCRefnumHandleDataType, heap->l__________CT,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Text_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Text_Image_Out	)) == eFail) CGenErr();
		}
		if (Gasket_with_or_without_display_out_0_error_out_4B0) {
			/* Free Cluster Gasket_with_or_without_display_out_0_error_out_4B0*/
			{
				cl_00000* cl_005 = (cl_00000*)Gasket_with_or_without_display_out_0_error_out_4B0;
				if (cl_005->el_2 && (((PDAStrPtr)cl_005->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_005->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_005->el_2)->staticStr)) {
						MemHandleFree( cl_005->el_2 );
						cl_005->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_IMAQ_Overlay_Text_error_out, 0x0 | ClusterDataType, Gasket_with_or_without_display_out_0_error_out_4B0);
		}
		else {
		}
		if (Gasket_with_or_without_display_out_3_A__________OUT_187) {
	CCGRCRefnumFree(*Gasket_with_or_without_display_out_3_A__________OUT_187);
			*Gasket_with_or_without_display_out_3_A__________OUT_187 =heap->l_IMAQ_Overlay_Text_Image_Out;
		}
		else {
	CCGRCRefnumFree(heap->l_IMAQ_Overlay_Text_Image_Out);
		}
		Gasket_with_or_without_display_CleanupVIGlobalConstants();
		PDAClusterFree( &fp55, 0x150000 | ClusterDataType);
		PDAClusterFree( fp33, 0x160000 | ClusterDataType);
		PDAClusterFree( &fp1AF, 0x150000 | ClusterDataType);
		PDAClusterFree( fp18D, 0x160000 | ClusterDataType);
		PDAClusterFree( Annulus__5C0, 0x100000 | BigClusterDataType);
		PDAClusterFree( &Gasket_with_or_without_display_in_2_error_in__no_error__468, 0x0 | ClusterDataType);
		PDAClusterFree( &Gasket_with_or_without_display_in_4_ROI_Descriptor_6DE, 0x140000 | ClusterDataType);
		PDAClusterFree( &Gasket_with_or_without_display_in_1_Font__Size___Style_C22, 0xF0000 | BigClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr Gasket_with_or_without_display_VIName = "Gasket with or without display.vi";

eRunStatus Gasket_with_or_without_display_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus Gasket_with_or_without_display_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	Gasket_with_or_without_display_AddSubVIInstanceData();
	return Gasket_with_or_without_display_Run();
}


/****** Library interface **********/


void Gasketwithorwithoutdisplay(float64 Ctrl1,
float64 Ctrl2,
Boolean *Ind3,
Boolean *Ind4)
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

	Gasket_with_or_without_display_AddSubVIInstanceData();
	Gasket_with_or_without_display_InitVIConstantList();

	Gasket_with_or_without_display_in_3_A____________________2CA = &(Ctrl1);
	Gasket_with_or_without_display_in_0_A__________313 = &(Ctrl2);
	/* Call top level VI main function */
	Gasket_with_or_without_display_Run();
	*Ind3 = *Gasket_with_or_without_display_out_2_A___________397;
	*Ind4 = *Gasket_with_or_without_display_out_1_A______4FA;

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


