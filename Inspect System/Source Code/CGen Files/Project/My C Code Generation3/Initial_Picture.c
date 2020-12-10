/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: Initial Picture.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\Initial Picture.vi
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
#include "Initial_PictureLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _Initial_Picture_heap { 
	cl_B0000 c_Bounding_Rectangle;
	cl_B0000 c__________________;
	cl_B0000 c___________________1;
	cl_B0000 c___________________2;
	cl_B0000 c___________________3;
	cl_00000 c_IMAQ_Overlay_Arc_error_out_5;
	cl_00000 c_IMAQ_Overlay_Arc_error_out_8;
	cl_00000 c_IMAQ_Clear_Overlay_error_out;
	cl_00000 c_error_in__no_error_;
	cl_00000 c_IMAQ_Overlay_Arc_error_out_3;
	cl_00000 c_IMAQ_Overlay_Arc_error_out_6;
	cl_00000 c_IMAQ_Overlay_Arc_error_out_7;
	cl_00000 c_IMAQ_Overlay_Arc_error_out;
	cl_00000 c_IMAQ_Overlay_Arc_error_out_2;
	cl_00000 c_IMAQ_Overlay_Arc_error_out_1;
	cl_00000 c_IMAQ_Overlay_Arc_error_out_4;
	float64 n________________Start_OutSide;
	float64 n____x_y_8;
	float64 n________________Start_InSide;
	float64 n____x_y_9;
	float64 n________________Big1_R;
	float64 n_Start_Angle__degrees_;
	float64 n_End_Angle__degrees_;
	float64 n_End_Angle__degrees__4;
	float64 n_Start_Angle__degrees__6;
	float64 n____x_y_10;
	float64 n_End_Angle__degrees__3;
	float64 n_Start_Angle__degrees__1;
	float64 n_Start_Angle__degrees__2;
	float64 n_End_Angle__degrees__1;
	float64 n____x_y_11;
	float64 n____x_y_12;
	float64 n____x_y_7;
	float64 n____x_y_13;
	float64 n____x_y_14;
	float64 n____x_y_6;
	float64 n____x_y_5;
	float64 n____x_y_4;
	float64 n_End_Angle__degrees__2;
	float64 n_Start_Angle__degrees__3;
	float64 n_Start_Angle__degrees__4;
	float64 n____x_y_3;
	float64 n____x_y_2;
	float64 n____x_y_15;
	float64 n_Start_Angle__degrees__7;
	float64 n_End_Angle__degrees__5;
	float64 n____x_y_1;
	float64 n_End_Angle__degrees__6;
	float64 n____x_y;
	float64 n_Start_Angle__degrees__8;
	float64 n_Start_Angle__degrees__5;
	float64 n________________Small2_R;
	float64 n________________Big2_R;
	float64 n________________Cent_X;
	float64 n________________Small1_R;
	float64 n________________Cent_Y;
	uInt32 dw_Color_6;
	uInt32 dw_Color_7;
	uInt32 dw_Color_4;
	uInt32 dw_Drawing_Mode__Frame__4;
	uInt32 dw_Drawing_Mode__Frame__3;
	uInt32 dw_Color_3;
	uInt32 dw_Drawing_Mode__Frame__7;
	uInt32 dw_Drawing_Mode__Frame__8;
	uInt32 dw_Color_2;
	uInt32 dw_Drawing_Mode__Frame__2;
	uInt32 dw_Color_8;
	uInt32 dw_Color_5;
	uInt32 dw_Drawing_Mode__Frame__5;
	uInt32 dw_Drawing_Mode__Frame__1;
	uInt32 dw_Color_1;
	uInt32 dw_Drawing_Mode__Frame__6;
	uInt32 dw_Color;
	uInt32 dw_Drawing_Mode__Frame_;
	int32 l_fail;
	int32 l_Pass;
	cl_A0000* c_________;
	VoidHand s_______________________________1;
	VoidHand s________3;
	VoidHand Args770_1;  
	VoidHand s______________________________;
	VoidHand Args51A_1;  
	VoidHand Args4D0_1;  
	VoidHand s_________________________1;
	VoidHand s________________________;
	VoidHand Args786_1;  
	VoidHand Args309_1;  
	VoidHand s________1;
	VoidHand Args7C6_1;  
	VoidHand s_______;
	VoidHand s_Constant;
	VoidHand ArgsAED_1;  
	VoidHand Args9A9_1;  
	VoidHand s________2;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out_8;
	CCGRCRefnumHandle l_Image_In;
	CCGRCRefnumHandle l_IMAQ_Clear_Overlay_Image_Out;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out_1;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out_7;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out_6;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out_2;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out_3;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out_4;
	CCGRCRefnumHandle l_IMAQ_Overlay_Arc_Image_Out_5;
} _DATA_SECTION __Initial_Picture_heap; /* heap */

static struct _Initial_Picture_heap _DATA_SECTION *heap = &__Initial_Picture_heap; /* heap */

struct _tInitial_Picture_GlobalConstantsHeap {
	uInt8	refCnt;
	VoidHand	i3A1;
	cl_B0000	i47D;
	VoidHand	i4DE;
	VoidHand	i552;
	VoidHand	i5E6;
	VoidHand	i651;
} _DATA_SECTION __Initial_Picture_GlobalConstantsHeap;
static struct _tInitial_Picture_GlobalConstantsHeap _DATA_SECTION *Initial_Picture_GlobalConstantsHeapPtr = &__Initial_Picture_GlobalConstantsHeap;

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

_DATA_SECTION static  cl_C0000 g_cluster_3 = 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_D0000 g_cluster_4 = 
{(PDAStrPtr)(&g_string_2)};

_DATA_SECTION  cl_A0000 Initial_Picture_in_3_A__________61E_init_ = 
{1, 1, 2.7300000000000000000E+2, 2.5500000000000000000E+2, 2.5000000000000000000E+2, 1.7000000000000000000E+2, 1.5000000000000000000E+2, 7.0000000000000000000E+1, 5.0000000000000000000E+0, 9.0000000000000000000E+0};

struct _g_string_3 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 Initial_Picture_in_0_error_in__no_error__5C4 = 
{0, 0, (PDAStrPtr)(&g_string_3)};

struct _g_string_4 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_4 g_string_4 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 Initial_Picture_out_3_error_out_6D0_init_ = 
{0, 0, (PDAStrPtr)(&g_string_4)};

_DATA_SECTION static  cl_B0000 g_cluster_8 = 
{0, 0, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION Initial_Picture_CleanupLSRs(void);
void _TEXT_SECTION Initial_Picture_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION Initial_Picture_AddSubVIInstanceData(void);
void _TEXT_SECTION Initial_Picture_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION Initial_Picture_AddVIGlobalConstants(void);
void _TEXT_SECTION Initial_Picture_AddVIGlobalConstants(void) {
	MemSet(Initial_Picture_GlobalConstantsHeapPtr,sizeof(*(Initial_Picture_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION Initial_Picture_CleanupVIGlobalConstants(void);
void _TEXT_SECTION Initial_Picture_CleanupVIGlobalConstants(void) {
	(Initial_Picture_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION Initial_Picture_InitVIConstantList(void);
void _TEXT_SECTION Initial_Picture_InitVIConstantList(void) {
	(Initial_Picture_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static cl_C0000 fp4F;
static DataType dtfp4F = 0xC0000 | ClusterDataType;
static cl_D0000 fp34_init_;
static cl_D0000* fp34 = &fp34_init_;
static DataType dtfp34 = 0xD0000 | ClusterDataType;
static cl_C0000 fp22F;
static DataType dtfp22F = 0xC0000 | ClusterDataType;
static cl_D0000 fp214_init_;
static cl_D0000* fp214 = &fp214_init_;
static DataType dtfp214 = 0xD0000 | ClusterDataType;
cl_A0000* Initial_Picture_in_3_A__________61E = &Initial_Picture_in_3_A__________61E_init_;
static DataType dtInitial_Picture_in_3_A__________61E = 0xA0000 | BigClusterDataType;
VoidHand Initial_Picture_out_1_fail_5C6_init_ = NULL;
static VoidHand *Initial_Picture_out_1_fail_5C6 = &Initial_Picture_out_1_fail_5C6_init_;
static DataType dtInitial_Picture_out_1_fail_5C6 = StringDataType;
VoidHand Initial_Picture_out_0_pass_63C_init_ = NULL;
static VoidHand *Initial_Picture_out_0_pass_63C = &Initial_Picture_out_0_pass_63C_init_;
static DataType dtInitial_Picture_out_0_pass_63C = StringDataType;
int32 Initial_Picture_in_2_fail_662 = 0 ;
static DataType dtInitial_Picture_in_2_fail_662 = int32DataType;
int32 Initial_Picture_in_1_Pass_622 = 0 ;
static DataType dtInitial_Picture_in_1_Pass_622 = int32DataType;
static DataType dtInitial_Picture_in_0_error_in__no_error__5C4 = 0x0 | ClusterDataType;
cl_00000 Initial_Picture_out_3_error_out_6D0_tmp_;
static cl_00000* Initial_Picture_out_3_error_out_6D0 = &Initial_Picture_out_3_error_out_6D0_tmp_;
static DataType dtInitial_Picture_out_3_error_out_6D0 = 0x0 | ClusterDataType;
extern eRunStatus Initial_Picture_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	fp4F = g_cluster_1;
	PDAClusterIncRefCnt(&fp4F, 0xC0000 | ClusterDataType, 1);
	*fp34 = g_cluster_2;
	PDAClusterIncRefCnt(fp34, 0xD0000 | ClusterDataType, 1);
	fp22F = g_cluster_3;
	PDAClusterIncRefCnt(&fp22F, 0xC0000 | ClusterDataType, 1);
	*fp214 = g_cluster_4;
	PDAClusterIncRefCnt(fp214, 0xD0000 | ClusterDataType, 1);
	if (!Initial_Picture_out_1_fail_5C6) {
		 	Initial_Picture_out_1_fail_5C6 = LVPDAMemHandleNew( sizeof(PDAStrPtr), NULL );
		 	*Initial_Picture_out_1_fail_5C6 = NULL;
	}
	if (!(*Initial_Picture_out_1_fail_5C6)) {
		*Initial_Picture_out_1_fail_5C6 = PDAStrNewFromStr(_LVT(""));
	}
	if (!Initial_Picture_out_0_pass_63C) {
		 	Initial_Picture_out_0_pass_63C = LVPDAMemHandleNew( sizeof(PDAStrPtr), NULL );
		 	*Initial_Picture_out_0_pass_63C = NULL;
	}
	if (!(*Initial_Picture_out_0_pass_63C)) {
		*Initial_Picture_out_0_pass_63C = PDAStrNewFromStr(_LVT(""));
	}
	*Initial_Picture_out_3_error_out_6D0 = Initial_Picture_out_3_error_out_6D0_init_;
	PDAClusterIncRefCnt(Initial_Picture_out_3_error_out_6D0, 0x0 | ClusterDataType, 1);
	Initial_Picture_InitVIConstantList();
	{
		heap->n_Start_Angle__degrees__8 = 0.0000000000000000000E+0;
		heap->n_End_Angle__degrees__6 = 1.8000000000000000000E+2;
		heap->dw_Drawing_Mode__Frame__8 = 1;
		heap->dw_Color_8 = RGB(210, 210, 210);
		heap->n_Start_Angle__degrees__7 = 0.0000000000000000000E+0;
		heap->n_End_Angle__degrees__5 = 1.8000000000000000000E+2;
		heap->dw_Drawing_Mode__Frame__7 = 1;
		heap->dw_Color_7 = RGB(250, 250, 250);
		{
			MemMove(&(Initial_Picture_GlobalConstantsHeapPtr->i47D),&g_cluster_8,GetClusterSize( 0xB0000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_8,0xB0000 | ClusterDataType,1);
		}
		heap->c_Bounding_Rectangle = Initial_Picture_GlobalConstantsHeapPtr->i47D;
		heap->n_Start_Angle__degrees__6 = 0.0000000000000000000E+0;
		heap->n_End_Angle__degrees__4 = 1.8000000000000000000E+2;
		heap->dw_Drawing_Mode__Frame__6 = 1;
		heap->dw_Color_6 = RGB(210, 210, 210);
		heap->n_Start_Angle__degrees__5 = 0.0000000000000000000E+0;
		heap->n_End_Angle__degrees__3 = 1.8000000000000000000E+2;
		heap->dw_Drawing_Mode__Frame__5 = 1;
		heap->dw_Color_5 = RGB(250, 250, 250);
		heap->n_Start_Angle__degrees__4 = 0.0000000000000000000E+0;
		heap->dw_Drawing_Mode__Frame__4 = 1;
		heap->dw_Color_4 = RGB(100, 255, 0);
		heap->n_Start_Angle__degrees__3 = 0.0000000000000000000E+0;
		heap->n_End_Angle__degrees__2 = 1.8000000000000000000E+2;
		heap->dw_Drawing_Mode__Frame__3 = 1;
		heap->dw_Color_3 = RGB(250, 250, 250);
		heap->n_Start_Angle__degrees__1 = 0.0000000000000000000E+0;
		heap->dw_Drawing_Mode__Frame__1 = 1;
		heap->dw_Color_1 = RGB(255, 0, 0);
		heap->n_Start_Angle__degrees__2 = 0.0000000000000000000E+0;
		heap->n_End_Angle__degrees__1 = 1.8000000000000000000E+2;
		heap->dw_Drawing_Mode__Frame__2 = 1;
		heap->dw_Color_2 = RGB(250, 250, 250);
		heap->n_Start_Angle__degrees_ = 0.0000000000000000000E+0;
		heap->n_End_Angle__degrees_ = 1.8000000000000000000E+2;
		heap->dw_Drawing_Mode__Frame_ = 1;
		heap->dw_Color = RGB(210, 210, 210);
		Initial_Picture_GlobalConstantsHeapPtr->i4DE = PDAStrNewFromBuf(_LVT("%"),(uInt32)1);
		heap->s________3 = Initial_Picture_GlobalConstantsHeapPtr->i4DE;
		Initial_Picture_GlobalConstantsHeapPtr->i552 = PDAStrNewFromBuf(_LVT("%"),(uInt32)1);
		heap->s________2 = Initial_Picture_GlobalConstantsHeapPtr->i552;
		Initial_Picture_GlobalConstantsHeapPtr->i5E6 = PDAStrNewFromBuf(_LVT("Pass "),(uInt32)5);
		heap->s________1 = Initial_Picture_GlobalConstantsHeapPtr->i5E6;
		Initial_Picture_GlobalConstantsHeapPtr->i651 = PDAStrNewFromBuf(_LVT("Fail"),(uInt32)4);
		heap->s_______ = Initial_Picture_GlobalConstantsHeapPtr->i651;
		Initial_Picture_GlobalConstantsHeapPtr->i3A1 = PDAStrNewFromBuf(_LVT("\015"),(uInt32)1);
		heap->s_Constant = Initial_Picture_GlobalConstantsHeapPtr->i3A1;
		PDAStrIncRefCnt(heap->s_Constant, (uInt16)1); /* BDConst - alloc type */
		heap->l_Pass = Initial_Picture_in_1_Pass_622;
		/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->l_Pass), int32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'d', &(heap->s______________________________), StringDataType ))){
			CGenErr();
		}
	heap->l_fail = Initial_Picture_in_2_fail_662;
		/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->l_fail), int32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'d', &(heap->s_______________________________1), StringDataType ))){
			CGenErr();
		}
	{
			ControlDataItemPtr cdPtr = LVGetCurrentControlData();
			CreateArgListStatic(heap->Args51A_1, 4, 1 );
			argIn(heap->Args51A_1, 0).nType = StringDataType;
			argIn(heap->Args51A_1, 0).pValue = (void *)&heap->s________1;
			argIn(heap->Args51A_1, 1).nType = StringDataType;
			argIn(heap->Args51A_1, 1).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 2).nType = StringDataType;
			argIn(heap->Args51A_1, 2).pValue = (void *)&heap->s______________________________;
			argIn(heap->Args51A_1, 3).nType = StringDataType;
			argIn(heap->Args51A_1, 3).pValue = (void *)&heap->s________2;
			argOut(heap->Args51A_1, 0).nType = StringDataType;
			argOut(heap->Args51A_1, 0).pValue = (void *)&heap->s________________________;
			if (!PDAStrConcat( (ArgList *)((ArgList **)heap->Args51A_1)[0], (ArgList *)((ArgList **)heap->Args51A_1)[1] )) {
				CGenErr();
			}
			if (gAppStop) {
				gAppStop=true;
				return eFinished;
			}
		}
		PDAStrFree(*Initial_Picture_out_0_pass_63C);
		*Initial_Picture_out_0_pass_63C = PDAStrCopyOnModify(heap->s________________________);
		{
			ControlDataItemPtr cdPtr = LVGetCurrentControlData();
			CreateArgListStatic(heap->Args4D0_1, 4, 1 );
			argIn(heap->Args4D0_1, 0).nType = StringDataType;
			argIn(heap->Args4D0_1, 0).pValue = (void *)&heap->s_______;
			argIn(heap->Args4D0_1, 1).nType = StringDataType;
			argIn(heap->Args4D0_1, 1).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args4D0_1, 2).nType = StringDataType;
			argIn(heap->Args4D0_1, 2).pValue = (void *)&heap->s_______________________________1;
			argIn(heap->Args4D0_1, 3).nType = StringDataType;
			argIn(heap->Args4D0_1, 3).pValue = (void *)&heap->s________3;
			argOut(heap->Args4D0_1, 0).nType = StringDataType;
			argOut(heap->Args4D0_1, 0).pValue = (void *)&heap->s_________________________1;
			if (!PDAStrConcat( (ArgList *)((ArgList **)heap->Args4D0_1)[0], (ArgList *)((ArgList **)heap->Args4D0_1)[1] )) {
				CGenErr();
			}
			if (gAppStop) {
				gAppStop=true;
				return eFinished;
			}
		}
		PDAStrFree(*Initial_Picture_out_1_fail_5C6);
		*Initial_Picture_out_1_fail_5C6 = PDAStrCopyOnModify(heap->s_________________________1);
		heap->c_________ = (cl_A0000*)Initial_Picture_in_3_A__________61E;
		PDAClusterIncRefCnt(&Initial_Picture_in_3_A__________61E,0xA0000 | BigClusterDataType,1);
		/* Cluster Inc Ref Count:  FPTerm*/
		if(heap->c_________) heap->c_________->refcnt += 1;
/* Unbundle by name */
		{
			cl_A0000* cl_002;
			if (!heap->c_________) heap->c_________ = PDAClusterNewEmpty( 0xA0000 | BigClusterDataType );
			cl_002 = (cl_A0000*)heap->c_________;
			heap->n________________Start_InSide = cl_002->el_7;
			heap->n________________Start_OutSide = cl_002->el_6;
	/* Free Cluster heap->c_________*/
			PDAClusterFree( &heap->c_________, 0xA0000 | BigClusterDataType );
		}
/* Unbundle by name */
		{
			cl_A0000* cl_004;
			if (!heap->c_________) heap->c_________ = PDAClusterNewEmpty( 0xA0000 | BigClusterDataType );
			cl_004 = (cl_A0000*)heap->c_________;
			heap->n________________Cent_X = cl_004->el_0;
			heap->n________________Cent_Y = cl_004->el_1;
			heap->n________________Big1_R = cl_004->el_2;
			heap->n________________Small1_R = cl_004->el_3;
			heap->n________________Big2_R = cl_004->el_4;
			heap->n________________Small2_R = cl_004->el_5;
	/* Free Cluster heap->c_________*/
			PDAClusterFree( &heap->c_________, 0xA0000 | BigClusterDataType );
		}
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Cent_Y, doubleDataType, &heap->n________________Small2_R, doubleDataType, opPlus, &heap->n____x_y_3, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Cent_Y, doubleDataType, &heap->n________________Small2_R, doubleDataType, opMinus, &heap->n____x_y_1, doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Cent_Y, doubleDataType, &heap->n________________Big2_R, doubleDataType, opPlus, &heap->n____x_y_4, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Cent_Y, doubleDataType, &heap->n________________Big2_R, doubleDataType, opMinus, &heap->n____x_y_6, doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Cent_Y, doubleDataType, &heap->n________________Small1_R, doubleDataType, opPlus, &heap->n____x_y_8, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Cent_Y, doubleDataType, &heap->n________________Small1_R, doubleDataType, opMinus, &heap->n____x_y_10, doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Cent_Y, doubleDataType, &heap->n________________Big1_R, doubleDataType, opPlus, &heap->n____x_y_12, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Cent_Y, doubleDataType, &heap->n________________Big1_R, doubleDataType, opMinus, &heap->n____x_y_14, doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Cent_X, doubleDataType, &heap->n________________Small2_R, doubleDataType, opPlus, &heap->n____x_y_2, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Cent_X, doubleDataType, &heap->n________________Small2_R, doubleDataType, opMinus, &heap->n____x_y, doubleDataType);
/* Bundle by name */
		{
			cl_B0000* cl_006 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c___________________1, &heap->c_Bounding_Rectangle, sizeof( cl_B0000 ) );
			cl_006 = (cl_B0000*)&heap->c___________________1;
	cl_006->el_0 = heap->n____x_y;
	cl_006->el_1 = heap->n____x_y_1;
	cl_006->el_2 = heap->n____x_y_2;
	cl_006->el_3 = heap->n____x_y_3;
		}
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Cent_X, doubleDataType, &heap->n________________Big2_R, doubleDataType, opPlus, &heap->n____x_y_5, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Cent_X, doubleDataType, &heap->n________________Big2_R, doubleDataType, opMinus, &heap->n____x_y_7, doubleDataType);
/* Bundle by name */
		{
			cl_B0000* cl_007 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c__________________, &heap->c_Bounding_Rectangle, sizeof( cl_B0000 ) );
			cl_007 = (cl_B0000*)&heap->c__________________;
	cl_007->el_0 = heap->n____x_y_7;
	cl_007->el_1 = heap->n____x_y_6;
	cl_007->el_2 = heap->n____x_y_5;
	cl_007->el_3 = heap->n____x_y_4;
		}
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Cent_X, doubleDataType, &heap->n________________Small1_R, doubleDataType, opPlus, &heap->n____x_y_9, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Cent_X, doubleDataType, &heap->n________________Small1_R, doubleDataType, opMinus, &heap->n____x_y_11, doubleDataType);
/* Bundle by name */
		{
			cl_B0000* cl_008 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c___________________2, &heap->c_Bounding_Rectangle, sizeof( cl_B0000 ) );
			cl_008 = (cl_B0000*)&heap->c___________________2;
	cl_008->el_0 = heap->n____x_y_11;
	cl_008->el_1 = heap->n____x_y_10;
	cl_008->el_2 = heap->n____x_y_9;
	cl_008->el_3 = heap->n____x_y_8;
		}
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n________________Cent_X, doubleDataType, &heap->n________________Big1_R, doubleDataType, opPlus, &heap->n____x_y_13, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n________________Cent_X, doubleDataType, &heap->n________________Big1_R, doubleDataType, opMinus, &heap->n____x_y_15, doubleDataType);
/* Bundle by name */
		{
			cl_B0000* cl_009 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c___________________3, &heap->c_Bounding_Rectangle, sizeof( cl_B0000 ) );
			cl_009 = (cl_B0000*)&heap->c___________________3;
	cl_009->el_0 = heap->n____x_y_15;
	cl_009->el_1 = heap->n____x_y_14;
	cl_009->el_2 = heap->n____x_y_13;
	cl_009->el_3 = heap->n____x_y_12;
		}
		MemMove(&heap->c_error_in__no_error_, &Initial_Picture_in_0_error_in__no_error__5C4, sizeof(cl_00000));
		PDAClusterIncRefCnt(&Initial_Picture_in_0_error_in__no_error__5C4,0x0 | ClusterDataType,1);
		heap->l_Image_In = (CCGRCRefnumHandle)Initial_Picture_in_4_Image_In_2B;
		CCGRCRefnumIncRefCnt(heap->l_Image_In, 1);
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
			CCGRCRefnumHandleDataType, heap->l_Image_In,
			0x0 | ClusterDataType, &heap->c_IMAQ_Clear_Overlay_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Clear_Overlay_Image_Out	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out_8 = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out_8 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n_End_Angle__degrees__6,
			uInt32DataType, heap->dw_Color_8,
			doubleDataType, &heap->n_Start_Angle__degrees__8,
			0x0 | ClusterDataType, heap->c_IMAQ_Clear_Overlay_error_out,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__8,
			0xB0000 | ClusterDataType, heap->c___________________3,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Clear_Overlay_Image_Out,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out_8,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out_8	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out_6 = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out_7 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n_End_Angle__degrees__5,
			uInt32DataType, heap->dw_Color_7,
			doubleDataType, &heap->n_Start_Angle__degrees__7,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Arc_error_out_8,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__7,
			0xB0000 | ClusterDataType, heap->c___________________2,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Arc_Image_Out_8,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out_6,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out_7	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out_7 = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out_6 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n_End_Angle__degrees__4,
			uInt32DataType, heap->dw_Color_6,
			doubleDataType, &heap->n_Start_Angle__degrees__6,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Arc_error_out_6,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__6,
			0xB0000 | ClusterDataType, heap->c__________________,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Arc_Image_Out_7,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out_7,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out_6	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out_5 = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out_5 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n_End_Angle__degrees__3,
			uInt32DataType, heap->dw_Color_5,
			doubleDataType, &heap->n_Start_Angle__degrees__5,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Arc_error_out_7,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__5,
			0xB0000 | ClusterDataType, heap->c___________________1,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Arc_Image_Out_6,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out_5,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out_5	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out_4 = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out_3 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n________________Start_OutSide,
			uInt32DataType, heap->dw_Color_4,
			doubleDataType, &heap->n_Start_Angle__degrees__4,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Arc_error_out_5,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__4,
			0xB0000 | ClusterDataType, heap->c___________________3,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Arc_Image_Out_5,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out_4,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out_3	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out_2 = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out_1 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n_End_Angle__degrees__2,
			uInt32DataType, heap->dw_Color_3,
			doubleDataType, &heap->n_Start_Angle__degrees__3,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Arc_error_out_4,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__3,
			0xB0000 | ClusterDataType, heap->c___________________2,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Arc_Image_Out_3,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out_2,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out_1	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out_1 = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n_End_Angle__degrees_,
			uInt32DataType, heap->dw_Color,
			doubleDataType, &heap->n_Start_Angle__degrees_,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Arc_error_out_2,
			uInt32DataType, heap->dw_Drawing_Mode__Frame_,
			0xB0000 | ClusterDataType, heap->c__________________,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Arc_Image_Out_1,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out_1,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out_3 = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out_2 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n________________Start_InSide,
			uInt32DataType, heap->dw_Color_1,
			doubleDataType, &heap->n_Start_Angle__degrees__1,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Arc_error_out_1,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__1,
			0xB0000 | ClusterDataType, heap->c__________________,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Arc_Image_Out,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out_3,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out_2	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Arc_in_0_Group_12C;
			extern cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			heap->c_IMAQ_Overlay_Arc_error_out = IMAQ_Overlay_Arc_out_0_error_out_4F;
			heap->l_IMAQ_Overlay_Arc_Image_Out_4 = IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
			if ((IMAQ_Overlay_Arc_Run( 	StringDataType, IMAQ_Overlay_Arc_in_0_Group_12C,
			doubleDataType, &heap->n_End_Angle__degrees__1,
			uInt32DataType, heap->dw_Color_2,
			doubleDataType, &heap->n_Start_Angle__degrees__2,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Arc_error_out_3,
			uInt32DataType, heap->dw_Drawing_Mode__Frame__2,
			0xB0000 | ClusterDataType, heap->c___________________1,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Arc_Image_Out_2,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Arc_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Arc_Image_Out_4	)) == eFail) CGenErr();
		}
		if (Initial_Picture_out_3_error_out_6D0) {
			/* Free Cluster Initial_Picture_out_3_error_out_6D0*/
			{
				cl_00000* cl_010 = (cl_00000*)Initial_Picture_out_3_error_out_6D0;
				if (cl_010->el_2 && (((PDAStrPtr)cl_010->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_010->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_010->el_2)->staticStr)) {
						MemHandleFree( cl_010->el_2 );
						cl_010->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_IMAQ_Overlay_Arc_error_out, 0x0 | ClusterDataType, Initial_Picture_out_3_error_out_6D0);
		}
		else {
		}
		if (Initial_Picture_out_2_Image_Out_20D) {
	CCGRCRefnumFree(*Initial_Picture_out_2_Image_Out_20D);
			*Initial_Picture_out_2_Image_Out_20D =heap->l_IMAQ_Overlay_Arc_Image_Out_4;
		}
		else {
	CCGRCRefnumFree(heap->l_IMAQ_Overlay_Arc_Image_Out_4);
		}
		Initial_Picture_CleanupVIGlobalConstants();
		PDAClusterFree( &fp4F, 0xC0000 | ClusterDataType);
		PDAClusterFree( fp34, 0xD0000 | ClusterDataType);
		PDAClusterFree( &fp22F, 0xC0000 | ClusterDataType);
		PDAClusterFree( fp214, 0xD0000 | ClusterDataType);
		PDAClusterFree( &Initial_Picture_in_3_A__________61E, 0xA0000 | BigClusterDataType);
		PDAClusterFree( &Initial_Picture_in_0_error_in__no_error__5C4, 0x0 | ClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr Initial_Picture_VIName = "Initial Picture.vi";

eRunStatus Initial_Picture_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus Initial_Picture_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	Initial_Picture_AddSubVIInstanceData();
	return Initial_Picture_Run();
}


/****** Library interface **********/


void InitialPicture(TD1 *Ctrl1,
int32 fail,
int32 Pass,
Char **fail,
Char **pass)
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

	Initial_Picture_AddSubVIInstanceData();
	Initial_Picture_InitVIConstantList();

	{
		cl_A0000* cl_011 = NULL;
		cl_011 = PDAClusterNewEmpty(0xA0000 | BigClusterDataType);
		cl_011->el_0 = Ctrl1->CentX;
		cl_011->el_1 = Ctrl1->CentY;
		cl_011->el_2 = Ctrl1->Big1R;
		cl_011->el_3 = Ctrl1->Small1R;
		cl_011->el_4 = Ctrl1->Big2R;
		cl_011->el_5 = Ctrl1->Small2R;
		cl_011->el_6 = Ctrl1->Start_OutSide;
		cl_011->el_7 = Ctrl1->Start_InSide;
		Initial_Picture_in_3_A__________61E = cl_011;
	}
	Initial_Picture_in_2_fail_662 = fail;
	Initial_Picture_in_1_Pass_622 = Pass;
	/* Call top level VI main function */
	Initial_Picture_Run();
	*fail = PDAStrCStrFromLVStr( Initial_Picture_out_1_fail_5C6 );
	*pass = PDAStrCStrFromLVStr( Initial_Picture_out_0_pass_63C );

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


