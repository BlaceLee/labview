/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: CS-Aperture size display.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\CS-Aperture size display.vi
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
#include "CS_Aperture_size_displayLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _CS_Aperture_size_display_heap { 
	cl_140000 c______________________________;
	cl_150000 c_Bounding_Rectangle;
	cl_100000 c_________;
	cl_00000 c_IMAQ_Overlay_Oval_error_out;
	cl_00000 c__________________DT_1;
	cl_00000 c__________CT_1;
	cl_00000 c__________________DT_3;
	cl_00000 c__________________DT_2;
	cl_00000 c__________CT;
	cl_00000 c_IMAQ_Convert_ROI_to_Annulus_e;
	cl_00000 c_error_in__no_error_;
	cl_00000 c__________________DT;
	cl_00000 c_IMAQ_Overlay_Text_error_out;
	float64 n____x_y_1;
	float64 n____x_y;
	float64 n_________;
	float64 n________________________;
	float64 n__________________________;
	float64 n_________________________1;
	cl_130000 c_Origin;
	cl_120000 c_ROI_Descriptor;
	uInt32 dw__________CT_1;
	uInt32 dw_Drawing_Mode__Frame_;
	uInt32 dw_Color;
	uInt32 dw_BG_Color__Transparent_;
	uInt32 dw__________CT;
	cl_F0000* c_Font__Size___Style;
	VoidHand s_String_1;
	VoidHand s_Constant;
	VoidHand s_______;
	VoidHand s_String;
	VoidHand s________________________;
	VoidHand s________3;
	VoidHand s__________CT;
	VoidHand s______________________F_______;
	VoidHand Args56D_1;  
	VoidHand s________1;
	VoidHand s__________CT_1;
	VoidHand s______________________F________1;
	VoidHand s________2;
	VoidHand s______________________F_______1;
	VoidHand Args38F_1;  
	CCGRCRefnumHandle l__________________DT_3;
	CCGRCRefnumHandle l__________CT_1;
	CCGRCRefnumHandle l__________________DT_2;
	CCGRCRefnumHandle l__________IN;
	CCGRCRefnumHandle l__________________DT;
	CCGRCRefnumHandle l__________CT;
	CCGRCRefnumHandle l_IMAQ_Overlay_Text_Image_Out;
	CCGRCRefnumHandle l_IMAQ_Overlay_Oval_Image_Out;
	CCGRCRefnumHandle l__________________DT_1;
	int16 i______6__1;
	int16 i______6__2;
	int16 i______6_;
	Boolean b____________________________;
	Boolean b_____0___x___0_;
	Boolean b_____________________________C;
} _DATA_SECTION __CS_Aperture_size_display_heap; /* heap */

static struct _CS_Aperture_size_display_heap _DATA_SECTION *heap = &__CS_Aperture_size_display_heap; /* heap */

struct _tCS_Aperture_size_display_GlobalConstantsHeap {
	uInt8	refCnt;
	VoidHand	i3F5;
	VoidHand	i45C;
	VoidHand	i5BD;
	VoidHand	i5E4;
	VoidHand	i685;
	cl_F0000*	i6B7;
	cl_130000	i79F;
	VoidHand	i825;
	VoidHand	i873;
} _DATA_SECTION __CS_Aperture_size_display_GlobalConstantsHeap;
static struct _tCS_Aperture_size_display_GlobalConstantsHeap _DATA_SECTION *CS_Aperture_size_display_GlobalConstantsHeapPtr = &__CS_Aperture_size_display_GlobalConstantsHeap;

_DATA_SECTION static  cl_160000 g_cluster_1 = 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_170000 g_cluster_2 = 
{(PDAStrPtr)(&g_string_1)};

_DATA_SECTION static  cl_160000 g_cluster_3 = 
{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_170000 g_cluster_4 = 
{(PDAStrPtr)(&g_string_2)};

struct _g_string_3 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 CS_Aperture_size_display_in_1_error_in__no_error__468 = 
{0, 0, (PDAStrPtr)(&g_string_3)};

struct _g_string_4 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_4 g_string_4 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 CS_Aperture_size_display_out_0_error_out_4B0_init_ = 
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

_DATA_SECTION  cl_120000 CS_Aperture_size_display_in_3_ROI_Descriptor_6DE = 
{(PDAArrPtr)(&g_array_1), (PDAArrPtr)(&g_array_3)};

struct _g_string_5 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_5 g_string_5 = 
{1, 1, 0, _LVT("")};

struct _g_string_6 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_6 g_string_6 = 
{1, 1, 0, _LVT("")};

struct _g_string_7 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_7 g_string_7 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_100000 CS_Aperture_size_display_in_2_A__________38A = 
{(PDAStrPtr)(&g_string_5), (PDAStrPtr)(&g_string_6), (PDAStrPtr)(&g_string_7)};

_DATA_SECTION static  cl_150000 g_cluster_10 = 
{0, 0, 0, 0};

_DATA_SECTION static  cl_130000 g_cluster_11 = 
{180, 190};

struct _g_string_8 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_8 g_string_8 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_F0000 g_cluster_12 = 
{1, 1, 0, 
{(PDAStrPtr)(&g_string_8), 100, 0, 0, 0, 0, 0, 1, 0.0000000000000000000E+0}, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION CS_Aperture_size_display_CleanupLSRs(void);
void _TEXT_SECTION CS_Aperture_size_display_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION CS_Aperture_size_display_AddSubVIInstanceData(void);
void _TEXT_SECTION CS_Aperture_size_display_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION CS_Aperture_size_display_AddVIGlobalConstants(void);
void _TEXT_SECTION CS_Aperture_size_display_AddVIGlobalConstants(void) {
	MemSet(CS_Aperture_size_display_GlobalConstantsHeapPtr,sizeof(*(CS_Aperture_size_display_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION CS_Aperture_size_display_CleanupVIGlobalConstants(void);
void _TEXT_SECTION CS_Aperture_size_display_CleanupVIGlobalConstants(void) {
	(CS_Aperture_size_display_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION CS_Aperture_size_display_InitVIConstantList(void);
void _TEXT_SECTION CS_Aperture_size_display_InitVIConstantList(void) {
	(CS_Aperture_size_display_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static cl_160000 fp55;
static DataType dtfp55 = 0x160000 | ClusterDataType;
static cl_170000 fp33_init_;
static cl_170000* fp33 = &fp33_init_;
static DataType dtfp33 = 0x170000 | ClusterDataType;
static cl_160000 fp1AF;
static DataType dtfp1AF = 0x160000 | ClusterDataType;
static cl_170000 fp18D_init_;
static cl_170000* fp18D = &fp18D_init_;
static DataType dtfp18D = 0x170000 | ClusterDataType;
static cl_150000 Bounding_Rectangle__437;
static DataType dtBounding_Rectangle__437 = 0x150000 | ClusterDataType;
static VoidHand String__647_init_ = NULL;
static VoidHand *String__647 = &String__647_init_;
static DataType dtString__647 = StringDataType;
static VoidHand String_2__7B9_init_ = NULL;
static VoidHand *String_2__7B9 = &String_2__7B9_init_;
static DataType dtString_2__7B9 = StringDataType;
static DataType dtCS_Aperture_size_display_in_1_error_in__no_error__468 = 0x0 | ClusterDataType;
cl_00000 CS_Aperture_size_display_out_0_error_out_4B0_tmp_;
static cl_00000* CS_Aperture_size_display_out_0_error_out_4B0 = &CS_Aperture_size_display_out_0_error_out_4B0_tmp_;
static DataType dtCS_Aperture_size_display_out_0_error_out_4B0 = 0x0 | ClusterDataType;
static DataType dtCS_Aperture_size_display_in_3_ROI_Descriptor_6DE = 0x120000 | ClusterDataType;
static DataType dtCS_Aperture_size_display_in_2_A__________38A = 0x100000 | ClusterDataType;
float64 CS_Aperture_size_display_in_0_A__________960_init_ = 0.0000000000000000000E+0 ;
static float64* CS_Aperture_size_display_in_0_A__________960 = &CS_Aperture_size_display_in_0_A__________960_init_;
static DataType dtCS_Aperture_size_display_in_0_A__________960 = doubleDataType;
Boolean CS_Aperture_size_display_out_3_OK_NG_985_init_ = false;
static Boolean* CS_Aperture_size_display_out_3_OK_NG_985 = &CS_Aperture_size_display_out_3_OK_NG_985_init_;
static DataType dtCS_Aperture_size_display_out_3_OK_NG_985 = BooleanDataType;
Boolean CS_Aperture_size_display_out_2_A______9EF_init_ = false;
static Boolean* CS_Aperture_size_display_out_2_A______9EF = &CS_Aperture_size_display_out_2_A______9EF_init_;
static DataType dtCS_Aperture_size_display_out_2_A______9EF = BooleanDataType;
extern eRunStatus CS_Aperture_size_display_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	fp55 = g_cluster_1;
	PDAClusterIncRefCnt(&fp55, 0x160000 | ClusterDataType, 1);
	*fp33 = g_cluster_2;
	PDAClusterIncRefCnt(fp33, 0x170000 | ClusterDataType, 1);
	fp1AF = g_cluster_3;
	PDAClusterIncRefCnt(&fp1AF, 0x160000 | ClusterDataType, 1);
	*fp18D = g_cluster_4;
	PDAClusterIncRefCnt(fp18D, 0x170000 | ClusterDataType, 1);
	Bounding_Rectangle__437 = g_cluster_10;
	PDAClusterIncRefCnt(&Bounding_Rectangle__437, 0x150000 | ClusterDataType, 1);
	*String__647 = PDAStrNewFromBuf(_LVT("OK"),(uInt32)2);
	*String_2__7B9 = PDAStrNewFromBuf(_LVT("NG"),(uInt32)2);
	*CS_Aperture_size_display_out_0_error_out_4B0 = CS_Aperture_size_display_out_0_error_out_4B0_init_;
	PDAClusterIncRefCnt(CS_Aperture_size_display_out_0_error_out_4B0, 0x0 | ClusterDataType, 1);
	CS_Aperture_size_display_InitVIConstantList();
	{
		heap->dw_Color = RGB(100, 255, 0);
		{
			MemMove(&(CS_Aperture_size_display_GlobalConstantsHeapPtr->i79F),&g_cluster_11,GetClusterSize( 0x130000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_11,0x130000 | ClusterDataType,1);
		}
		heap->c_Origin = CS_Aperture_size_display_GlobalConstantsHeapPtr->i79F;
		heap->dw_BG_Color__Transparent_ = LVTransparentVal;
		heap->dw_Drawing_Mode__Frame_ = 0;
		CS_Aperture_size_display_GlobalConstantsHeapPtr->i3F5 = PDAStrNewFromBuf(_LVT("USL : "),(uInt32)6);
		heap->s________3 = CS_Aperture_size_display_GlobalConstantsHeapPtr->i3F5;
		heap->i______6__2 = 4;
		heap->i______6__1 = 4;
		CS_Aperture_size_display_GlobalConstantsHeapPtr->i5BD = PDAStrNewFromBuf(_LVT("\012"),(uInt32)1);
		heap->s_Constant = CS_Aperture_size_display_GlobalConstantsHeapPtr->i5BD;
		PDAStrIncRefCnt(heap->s_Constant, (uInt16)2); /* BDConst - alloc type */
		CS_Aperture_size_display_GlobalConstantsHeapPtr->i5E4 = PDAStrNewFromBuf(_LVT("LSL : "),(uInt32)6);
		heap->s________2 = CS_Aperture_size_display_GlobalConstantsHeapPtr->i5E4;
		CS_Aperture_size_display_GlobalConstantsHeapPtr->i685 = PDAStrNewFromBuf(_LVT("Value:"),(uInt32)6);
		heap->s________1 = CS_Aperture_size_display_GlobalConstantsHeapPtr->i685;
		CS_Aperture_size_display_GlobalConstantsHeapPtr->i45C = PDAStrNewFromBuf(_LVT("Result\243\272"),(uInt32)8);
		heap->s_______ = CS_Aperture_size_display_GlobalConstantsHeapPtr->i45C;
		if ( !CS_Aperture_size_display_GlobalConstantsHeapPtr->i6B7 ) {
			{
				CS_Aperture_size_display_GlobalConstantsHeapPtr->i6B7 = (cl_F0000*)&g_cluster_12;
			}
		}
		PDAClusterIncRefCnt(&CS_Aperture_size_display_GlobalConstantsHeapPtr->i6B7,0xF0000 | BigClusterDataType,1);
		heap->c_Font__Size___Style = CS_Aperture_size_display_GlobalConstantsHeapPtr->i6B7;
		/* Cluster Inc Ref Count:  BDConst - alloc type*/
		if(heap->c_Font__Size___Style) heap->c_Font__Size___Style->refcnt += 1;
		heap->i______6_ = 4;
		heap->n_________ = *CS_Aperture_size_display_in_0_A__________960;
		/**/
		/* 等于0？ */
		/**/
		PDAFltUnop( &(heap->n_________), doubleDataType, opEQ0, &(heap->b_____0___x___0_), BooleanDataType);
		*CS_Aperture_size_display_out_2_A______9EF =heap->b_____0___x___0_;
		/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n_________), doubleDataType, NULL, uCharDataType, &(heap->i______6_), int16DataType, (int8)'f', &(heap->s______________________F_______), StringDataType ))){
			CGenErr();
		}
	MemMove(&heap->c_________, &CS_Aperture_size_display_in_2_A__________38A, sizeof(cl_100000));
		PDAClusterIncRefCnt(&CS_Aperture_size_display_in_2_A__________38A,0x100000 | ClusterDataType,1);
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->c_________), 0x100000 | ClusterDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->c______________________________), 0x140000 | ClusterDataType );
	/* Free Cluster heap->c_________*/
		{
			cl_100000* cl_002 = (cl_100000*)&heap->c_________;
		if (cl_002->el_0 && (((PDAStrPtr)cl_002->el_0)->refcnt > 0)) {
				if ((--((PDAStrPtr)cl_002->el_0)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_0)->staticStr)) {
					MemHandleFree( cl_002->el_0 );
					cl_002->el_0=NULL;
				}
			}
	if (cl_002->el_1 && (((PDAStrPtr)cl_002->el_1)->refcnt > 0)) {
				if ((--((PDAStrPtr)cl_002->el_1)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_1)->staticStr)) {
					MemHandleFree( cl_002->el_1 );
					cl_002->el_1=NULL;
				}
			}
	if (cl_002->el_2 && (((PDAStrPtr)cl_002->el_2)->refcnt > 0)) {
				if ((--((PDAStrPtr)cl_002->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_2)->staticStr)) {
					MemHandleFree( cl_002->el_2 );
					cl_002->el_2=NULL;
				}
			}
		}
/* Unbundle by name */
		{
			cl_140000* cl_003 = (cl_140000*)&heap->c______________________________;
			heap->n_________________________1 = cl_003->el_0;
			heap->n__________________________ = cl_003->el_1;
			heap->n________________________ = cl_003->el_2;
	}
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n__________________________, doubleDataType, &heap->n________________________, doubleDataType, opMinus, &heap->n____x_y, doubleDataType);
		/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n____x_y), doubleDataType, NULL, uCharDataType, &(heap->i______6__1), int16DataType, (int8)'f', &(heap->s______________________F________1), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n_________________________1, doubleDataType, &heap->n__________________________, doubleDataType, opPlus, &heap->n____x_y_1, doubleDataType);
		/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n____x_y_1), doubleDataType, NULL, uCharDataType, &(heap->i______6__2), int16DataType, (int8)'f', &(heap->s______________________F_______1), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 判定范围并强制转换 */
		/**/
		PDAInRangeCoerce( &(heap->n____x_y_1), doubleDataType, &(heap->n_________), doubleDataType, &(heap->n____x_y), doubleDataType, true, true, &(heap->b____________________________), NULL, uCharDataType );
			*CS_Aperture_size_display_out_3_OK_NG_985 =heap->b____________________________;
		MemMove(&heap->c_error_in__no_error_, &CS_Aperture_size_display_in_1_error_in__no_error__468, sizeof(cl_00000));
		PDAClusterIncRefCnt(&CS_Aperture_size_display_in_1_error_in__no_error__468,0x0 | ClusterDataType,1);
		MemMove(&heap->c_ROI_Descriptor, &CS_Aperture_size_display_in_3_ROI_Descriptor_6DE, sizeof(cl_120000));
		PDAClusterIncRefCnt(&CS_Aperture_size_display_in_3_ROI_Descriptor_6DE,0x120000 | ClusterDataType,1);
		{
			extern cl_00000 IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A_init_;
			cl_00000 IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A = IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A_init_;
			extern cl_180000 IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42_init_;
			cl_180000* IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42 = &IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42_init_;
			heap->c_IMAQ_Convert_ROI_to_Annulus_e = IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A;
			PDAClusterIncRefCnt(&IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42, 0x180000 | BigClusterDataType, 1);
			if ((IMAQ_Convert_ROI_to_Annulus_Run( 	0x0 | ClusterDataType, heap->c_error_in__no_error_,
			0x120000 | ClusterDataType, heap->c_ROI_Descriptor,
			0x0 | ClusterDataType, &heap->c_IMAQ_Convert_ROI_to_Annulus_e,
			0x180000 | BigClusterDataType, &IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42	)) == eFail) CGenErr();
	/* Free Cluster IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42*/
			PDAClusterFree( &IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42, 0x180000 | BigClusterDataType );
		}
		heap->l__________IN = (CCGRCRefnumHandle)CS_Aperture_size_display_in_4_A__________IN_2B;
		CCGRCRefnumIncRefCnt(heap->l__________IN, 1);
		{
			heap->l__________________DT_1 = heap->l__________IN;
			MemMove( &heap->c__________________DT_1, &heap->c_IMAQ_Convert_ROI_to_Annulus_e, sizeof( cl_00000 ) );
		}
		MemMove(&heap->c_Bounding_Rectangle, &Bounding_Rectangle__437, sizeof(cl_150000));
		PDAClusterIncRefCnt(&Bounding_Rectangle__437,0x150000 | ClusterDataType,1);
		{
			extern VoidHand IMAQ_Overlay_Oval_in_1_Group_105;
			extern cl_00000 IMAQ_Overlay_Oval_out_0_error_out_41_init_;
			cl_00000 IMAQ_Overlay_Oval_out_0_error_out_41 = IMAQ_Overlay_Oval_out_0_error_out_41_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Oval_out_1_Image_Out_62 = IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			heap->c_IMAQ_Overlay_Oval_error_out = IMAQ_Overlay_Oval_out_0_error_out_41;
			heap->l_IMAQ_Overlay_Oval_Image_Out = IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
			if ((IMAQ_Overlay_Oval_Run( 	uInt32DataType, heap->dw_Color,
			StringDataType, IMAQ_Overlay_Oval_in_1_Group_105,
			0x0 | ClusterDataType, heap->c__________________DT_1,
			uInt32DataType, heap->dw_Drawing_Mode__Frame_,
			0x150000 | ClusterDataType, heap->c_Bounding_Rectangle,
			CCGRCRefnumHandleDataType, heap->l__________________DT_1,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Oval_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Oval_Image_Out	)) == eFail) CGenErr();
		}
		{ /* Select */
			heap->b_____________________________C = heap->b____________________________;
			/* begin case */
			if ( heap->b_____________________________C ) {
				{
					CS_Aperture_size_display_GlobalConstantsHeapPtr->i825 = PDAStrNewFromBuf(_LVT("OK"),(uInt32)2);
					heap->s_String_1 = CS_Aperture_size_display_GlobalConstantsHeapPtr->i825;
					PDAStrIncRefCnt(heap->s_String_1, (uInt16)1); /* BDConst - alloc type */
					heap->dw__________CT = RGB(100, 255, 0);
					heap->l__________CT = heap->l_IMAQ_Overlay_Oval_Image_Out;
					MemMove( &heap->c__________CT, &heap->c_IMAQ_Overlay_Oval_error_out, sizeof( cl_00000 ) );
					PDAStrFree(*String__647);
					*String__647 = PDAStrCopyOnModify(heap->s_String_1);
					heap->s__________CT = heap->s_String_1;
				}
			} /* end case */
			/* begin case */
			else {
				{
					CS_Aperture_size_display_GlobalConstantsHeapPtr->i873 = PDAStrNewFromBuf(_LVT("NG"),(uInt32)2);
					heap->s_String = CS_Aperture_size_display_GlobalConstantsHeapPtr->i873;
					PDAStrIncRefCnt(heap->s_String, (uInt16)1); /* BDConst - alloc type */
					heap->dw__________CT = RGB(255, 0, 0);
					heap->l__________CT = heap->l_IMAQ_Overlay_Oval_Image_Out;
					MemMove( &heap->c__________CT, &heap->c_IMAQ_Overlay_Oval_error_out, sizeof( cl_00000 ) );
					heap->s__________CT = heap->s_String;
					PDAStrFree(*String_2__7B9);
					*String_2__7B9 = PDAStrCopyOnModify(heap->s_String);
				}
			} /* end case */
		} /* end switch */
		{
			ControlDataItemPtr cdPtr = LVGetCurrentControlData();
			CreateArgListStatic(heap->Args38F_1, 11, 1 );
			argIn(heap->Args38F_1, 0).nType = StringDataType;
			argIn(heap->Args38F_1, 0).pValue = (void *)&heap->s_______;
			argIn(heap->Args38F_1, 1).nType = StringDataType;
			argIn(heap->Args38F_1, 1).pValue = (void *)&heap->s__________CT;
			argIn(heap->Args38F_1, 2).nType = StringDataType;
			argIn(heap->Args38F_1, 2).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args38F_1, 3).nType = StringDataType;
			argIn(heap->Args38F_1, 3).pValue = (void *)&heap->s________3;
			argIn(heap->Args38F_1, 4).nType = StringDataType;
			argIn(heap->Args38F_1, 4).pValue = (void *)&heap->s______________________F_______1;
			argIn(heap->Args38F_1, 5).nType = StringDataType;
			argIn(heap->Args38F_1, 5).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args38F_1, 6).nType = StringDataType;
			argIn(heap->Args38F_1, 6).pValue = (void *)&heap->s________2;
			argIn(heap->Args38F_1, 7).nType = StringDataType;
			argIn(heap->Args38F_1, 7).pValue = (void *)&heap->s______________________F________1;
			argIn(heap->Args38F_1, 8).nType = StringDataType;
			argIn(heap->Args38F_1, 8).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args38F_1, 9).nType = StringDataType;
			argIn(heap->Args38F_1, 9).pValue = (void *)&heap->s________1;
			argIn(heap->Args38F_1, 10).nType = StringDataType;
			argIn(heap->Args38F_1, 10).pValue = (void *)&heap->s______________________F_______;
			argOut(heap->Args38F_1, 0).nType = StringDataType;
			argOut(heap->Args38F_1, 0).pValue = (void *)&heap->s________________________;
			if (!PDAStrConcat( (ArgList *)((ArgList **)heap->Args38F_1)[0], (ArgList *)((ArgList **)heap->Args38F_1)[1] )) {
				CGenErr();
			}
			if (gAppStop) {
				gAppStop=true;
				return eFinished;
			}
		}
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
			StringDataType, heap->s________________________,
			0x130000 | ClusterDataType, heap->c_Origin,
			CCGRCRefnumHandleDataType, heap->l__________CT,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Text_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Text_Image_Out	)) == eFail) CGenErr();
		}
		{
			heap->l__________________DT = heap->l_IMAQ_Overlay_Text_Image_Out;
			MemMove( &heap->c__________________DT, &heap->c_IMAQ_Overlay_Text_error_out, sizeof( cl_00000 ) );
		}
		if (CS_Aperture_size_display_out_1_A__________OUT_187) {
	CCGRCRefnumFree(*CS_Aperture_size_display_out_1_A__________OUT_187);
			*CS_Aperture_size_display_out_1_A__________OUT_187 =heap->l__________________DT;
		}
		else {
	CCGRCRefnumFree(heap->l__________________DT);
		}
		if (CS_Aperture_size_display_out_0_error_out_4B0) {
			/* Free Cluster CS_Aperture_size_display_out_0_error_out_4B0*/
			{
				cl_00000* cl_005 = (cl_00000*)CS_Aperture_size_display_out_0_error_out_4B0;
				if (cl_005->el_2 && (((PDAStrPtr)cl_005->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_005->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_005->el_2)->staticStr)) {
						MemHandleFree( cl_005->el_2 );
						cl_005->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c__________________DT, 0x0 | ClusterDataType, CS_Aperture_size_display_out_0_error_out_4B0);
		}
		else {
		}
		CS_Aperture_size_display_CleanupVIGlobalConstants();
		PDAClusterFree( &fp55, 0x160000 | ClusterDataType);
		PDAClusterFree( fp33, 0x170000 | ClusterDataType);
		PDAClusterFree( &fp1AF, 0x160000 | ClusterDataType);
		PDAClusterFree( fp18D, 0x170000 | ClusterDataType);
		PDAClusterFree( &Bounding_Rectangle__437, 0x150000 | ClusterDataType);
		if (*String__647 && (((PDAStrPtr)*String__647)->refcnt == 1) && (((PDAStrPtr)*String__647)->staticStr == false)) {
	if (*String__647 && (((PDAStrPtr)*String__647)->refcnt > 0)) {
				if ((--((PDAStrPtr)*String__647)->refcnt == 0) && (!((PDAStrPtr)*String__647)->staticStr)) {
					MemHandleFree( *String__647 );
					*String__647=NULL;
				}
			}
			*String__647 = NULL;
		}
		else
		{
	if (*String__647 && (((PDAStrPtr)*String__647)->refcnt > 0)) {
				if ((--((PDAStrPtr)*String__647)->refcnt == 0) && (!((PDAStrPtr)*String__647)->staticStr)) {
					MemHandleFree( *String__647 );
					*String__647=NULL;
				}
			}
		}
		if (*String_2__7B9 && (((PDAStrPtr)*String_2__7B9)->refcnt == 1) && (((PDAStrPtr)*String_2__7B9)->staticStr == false)) {
	if (*String_2__7B9 && (((PDAStrPtr)*String_2__7B9)->refcnt > 0)) {
				if ((--((PDAStrPtr)*String_2__7B9)->refcnt == 0) && (!((PDAStrPtr)*String_2__7B9)->staticStr)) {
					MemHandleFree( *String_2__7B9 );
					*String_2__7B9=NULL;
				}
			}
			*String_2__7B9 = NULL;
		}
		else
		{
	if (*String_2__7B9 && (((PDAStrPtr)*String_2__7B9)->refcnt > 0)) {
				if ((--((PDAStrPtr)*String_2__7B9)->refcnt == 0) && (!((PDAStrPtr)*String_2__7B9)->staticStr)) {
					MemHandleFree( *String_2__7B9 );
					*String_2__7B9=NULL;
				}
			}
		}
		PDAClusterFree( &CS_Aperture_size_display_in_1_error_in__no_error__468, 0x0 | ClusterDataType);
		PDAClusterFree( &CS_Aperture_size_display_in_3_ROI_Descriptor_6DE, 0x120000 | ClusterDataType);
		PDAClusterFree( &CS_Aperture_size_display_in_2_A__________38A, 0x100000 | ClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr CS_Aperture_size_display_VIName = "CS-Aperture size display.vi";

eRunStatus CS_Aperture_size_display_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus CS_Aperture_size_display_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	CS_Aperture_size_display_AddSubVIInstanceData();
	return CS_Aperture_size_display_Run();
}


/****** Library interface **********/


void CSAperturesizedisplay(float64 Ctrl1,
Boolean *OKNG,
Boolean *Ind2)
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

	CS_Aperture_size_display_AddSubVIInstanceData();
	CS_Aperture_size_display_InitVIConstantList();

	CS_Aperture_size_display_in_0_A__________960 = &(Ctrl1);
	/* Call top level VI main function */
	CS_Aperture_size_display_Run();
	*OKNG = *CS_Aperture_size_display_out_3_OK_NG_985;
	*Ind2 = *CS_Aperture_size_display_out_2_A______9EF;

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


