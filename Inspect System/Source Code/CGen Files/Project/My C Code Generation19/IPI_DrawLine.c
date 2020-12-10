/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_DrawLine.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\IPI_DrawLine.vi
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
#include "IPI_DrawLineLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IPI_DrawLine_heap { 
	cl_B0000 c__________________;
	cl_B0000 c_Rectangle;
	cl_A0000 c_Start_Point_;
	cl_A0000 c___________________1;
	cl_00000 c_error_in__no_error_;
	cl_00000 c_Find_First_Error_vi_________;
	cl_00000 c_IMAQ_Overlay_Line_error_out;
	cl_00000 c_IMAQ_Overlay_Rectangle_error_;
	float64 n_______________2;
	float64 n_______________3;
	float64 n______________________________;
	float64 n_______________1;
	float64 n________________Y;
	float64 n________________X;
	float64 n______________;
	float64 n____x_y;
	uInt32 dw_Drawing_Mode__Frame_;
	uInt32 dw_Color_1;
	uInt32 dw_Color;
	int32 l_____;
	VoidHand Args553_1;  
	VoidHand Args311_1;  
	VoidHand Args578_1;  
	VoidHand s_Distance_Piex;
	PDAArrPtr a_Roi;
	CCGRCRefnumHandle l_IMAQ_Overlay_Line_Image_Out;
	CCGRCRefnumHandle l_IMAQ_Overlay_Rectangle_Image_;
	CCGRCRefnumHandle l_Image_In;
} _DATA_SECTION __IPI_DrawLine_heap; /* heap */

static struct _IPI_DrawLine_heap _DATA_SECTION *heap = &__IPI_DrawLine_heap; /* heap */

struct _tIPI_DrawLine_GlobalConstantsHeap {
	uInt8	refCnt;
	cl_B0000	i35B;
} _DATA_SECTION __IPI_DrawLine_GlobalConstantsHeap;
static struct _tIPI_DrawLine_GlobalConstantsHeap _DATA_SECTION *IPI_DrawLine_GlobalConstantsHeapPtr = &__IPI_DrawLine_GlobalConstantsHeap;

_DATA_SECTION static  cl_C0000 g_cluster_1 = 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

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

_DATA_SECTION  cl_A0000 IPI_DrawLine_in_3_Start_Point_25C = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

struct _g_string_3 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IPI_DrawLine_in_1_error_in__no_error__41C = 
{0, 0, (PDAStrPtr)(&g_string_3)};

struct _g_string_4 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_4 g_string_4 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IPI_DrawLine_out_0_error_out__no_error__4C4_init_ = 
{0, 0, (PDAStrPtr)(&g_string_4)};

struct _IPI_DrawLine_in_0_Roi_200_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float64	data[1];
};
_DATA_SECTION   struct _IPI_DrawLine_in_0_Roi_200_init_ IPI_DrawLine_in_0_Roi_200_init_ = 
{doubleDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pIPI_DrawLine_in_0_Roi_200_init_ = (PDAArrPtr)(&(IPI_DrawLine_in_0_Roi_200_init_));

_DATA_SECTION static  cl_B0000 g_cluster_8 = 
{0, 0, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_DrawLine_CleanupLSRs(void);
void _TEXT_SECTION IPI_DrawLine_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_DrawLine_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_DrawLine_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_DrawLine_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_DrawLine_AddVIGlobalConstants(void) {
	MemSet(IPI_DrawLine_GlobalConstantsHeapPtr,sizeof(*(IPI_DrawLine_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION IPI_DrawLine_CleanupVIGlobalConstants(void);
void _TEXT_SECTION IPI_DrawLine_CleanupVIGlobalConstants(void) {
	(IPI_DrawLine_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_DrawLine_InitVIConstantList(void);
void _TEXT_SECTION IPI_DrawLine_InitVIConstantList(void) {
	(IPI_DrawLine_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static cl_C0000 fp4F;
static DataType dtfp4F = 0xC0000 | ClusterDataType;
static cl_D0000 fp34_init_;
static cl_D0000* fp34 = &fp34_init_;
static DataType dtfp34 = 0xD0000 | ClusterDataType;
static cl_C0000 fp168;
static DataType dtfp168 = 0xC0000 | ClusterDataType;
static cl_D0000 fp14D_init_;
static cl_D0000* fp14D = &fp14D_init_;
static DataType dtfp14D = 0xD0000 | ClusterDataType;
static DataType dtIPI_DrawLine_in_3_Start_Point_25C = 0xA0000 | ClusterDataType;
VoidHand IPI_DrawLine_in_2_Distance_Piex_325 = NULL;
static DataType dtIPI_DrawLine_in_2_Distance_Piex_325 = StringDataType;
static DataType dtIPI_DrawLine_in_1_error_in__no_error__41C = 0x0 | ClusterDataType;
cl_00000 IPI_DrawLine_out_0_error_out__no_error__4C4_tmp_;
static cl_00000* IPI_DrawLine_out_0_error_out__no_error__4C4 = &IPI_DrawLine_out_0_error_out__no_error__4C4_tmp_;
static DataType dtIPI_DrawLine_out_0_error_out__no_error__4C4 = 0x0 | ClusterDataType;
PDAArrPtr IPI_DrawLine_in_0_Roi_200 = (PDAArrPtr)&IPI_DrawLine_in_0_Roi_200_init_;
static DataType dtIPI_DrawLine_in_0_Roi_200 = 0x40000 | ArrayDataType;
extern eRunStatus IPI_DrawLine_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	fp4F = g_cluster_1;
	PDAClusterIncRefCnt(&fp4F, 0xC0000 | ClusterDataType, 1);
	*fp34 = g_cluster_2;
	PDAClusterIncRefCnt(fp34, 0xD0000 | ClusterDataType, 1);
	fp168 = g_cluster_3;
	PDAClusterIncRefCnt(&fp168, 0xC0000 | ClusterDataType, 1);
	*fp14D = g_cluster_4;
	PDAClusterIncRefCnt(fp14D, 0xD0000 | ClusterDataType, 1);
	if (!IPI_DrawLine_in_2_Distance_Piex_325) {
		IPI_DrawLine_in_2_Distance_Piex_325 = PDAStrNewFromStr(_LVT(""));
	}
	*IPI_DrawLine_out_0_error_out__no_error__4C4 = IPI_DrawLine_out_0_error_out__no_error__4C4_init_;
	PDAClusterIncRefCnt(IPI_DrawLine_out_0_error_out__no_error__4C4, 0x0 | ClusterDataType, 1);
	IPI_DrawLine_InitVIConstantList();
	{
		heap->dw_Color_1 = RGB(100, 255, 0);
		{
			MemMove(&(IPI_DrawLine_GlobalConstantsHeapPtr->i35B),&g_cluster_8,GetClusterSize( 0xB0000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_8,0xB0000 | ClusterDataType,1);
		}
		heap->c_Rectangle = IPI_DrawLine_GlobalConstantsHeapPtr->i35B;
		heap->l_____ = 0;
		heap->dw_Drawing_Mode__Frame_ = 0;
		heap->dw_Color = RGB(255, 0, 0);
		if (dtIPI_DrawLine_in_0_Roi_200 == (0x40000 | ArrayDataType)) {
			MemMove(&heap->a_Roi, &IPI_DrawLine_in_0_Roi_200, DataSize((0x40000 | ArrayDataType)));
			PDAArrIncRefCnt(IPI_DrawLine_in_0_Roi_200,1);
		}
		else {
			heap->a_Roi = PDAArrNewEmptyWithNDims( doubleDataType, (ArrDimSize)1 );
			if (!PDAArrSet(IPI_DrawLine_in_0_Roi_200, &heap->a_Roi)) {
				CGenErr();
			}
		}
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = (int32)heap->l_____;
			if ((nIndex >= 0) && heap->a_Roi && (nIndex < NthDim(heap->a_Roi, (ArrDimSize)0))) {
				heap->n_______________3 = *(float64 *)NthElemFast(heap->a_Roi, nIndex, 8);
			}
			else {
				heap->n_______________3 = 0.0;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_Roi && (nIndex < NthDim(heap->a_Roi, (ArrDimSize)0))) {
				heap->n_______________2 = *(float64 *)NthElemFast(heap->a_Roi, nIndex, 8);
			}
			else {
				heap->n_______________2 = 0.0;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_Roi && (nIndex < NthDim(heap->a_Roi, (ArrDimSize)0))) {
				heap->n_______________1 = *(float64 *)NthElemFast(heap->a_Roi, nIndex, 8);
			}
			else {
				heap->n_______________1 = 0.0;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_Roi && (nIndex < NthDim(heap->a_Roi, (ArrDimSize)0))) {
				heap->n______________ = *(float64 *)NthElemFast(heap->a_Roi, nIndex, 8);
			}
			else {
				heap->n______________ = 0.0;
			}
		}
	if ((heap->a_Roi) && ((heap->a_Roi)->refcnt > 0)) {
			if (((heap->a_Roi)->refcnt == 1) && ((heap->a_Roi)->staticArray == false)) {
				(heap->a_Roi)->refcnt--;
				MemHandleFree( heap->a_Roi );
				heap->a_Roi=NULL;
			}
			else
			 	PDAArrFree(heap->a_Roi);
		}
/* Bundle by name */
		{
			cl_B0000* cl_001 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c__________________, &heap->c_Rectangle, sizeof( cl_B0000 ) );
			cl_001 = (cl_B0000*)&heap->c__________________;
	cl_001->el_0 = heap->n_______________3;
	cl_001->el_1 = heap->n_______________2;
	cl_001->el_2 = heap->n_______________1;
	cl_001->el_3 = heap->n______________;
		}
		heap->s_Distance_Piex =IPI_DrawLine_in_2_Distance_Piex_325;
		PDAStrIncRefCnt(IPI_DrawLine_in_2_Distance_Piex_325,1);
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_Distance_Piex), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n______________________________), doubleDataType );
	if (heap->s_Distance_Piex && (((PDAStrPtr)heap->s_Distance_Piex)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_Distance_Piex)->refcnt == 0) && (!((PDAStrPtr)heap->s_Distance_Piex)->staticStr)) {
				MemHandleFree( heap->s_Distance_Piex );
				heap->s_Distance_Piex=NULL;
			}
		}
		MemMove(&heap->c_Start_Point_, &IPI_DrawLine_in_3_Start_Point_25C, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&IPI_DrawLine_in_3_Start_Point_25C,0xA0000 | ClusterDataType,1);
/* Unbundle by name */
		{
			cl_A0000* cl_002 = (cl_A0000*)&heap->c_Start_Point_;
			heap->n________________X = cl_002->el_0;
			heap->n________________Y = cl_002->el_1;
	}
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n______________________________, doubleDataType, &heap->n________________Y, doubleDataType, opPlus, &heap->n____x_y, doubleDataType);
/* Bundle by name */
		{
			cl_A0000* cl_003 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c___________________1, &heap->c_Start_Point_, sizeof( cl_A0000 ) );
			cl_003 = (cl_A0000*)&heap->c___________________1;
	cl_003->el_0 = heap->n________________X;
	cl_003->el_1 = heap->n____x_y;
		}
		MemMove(&heap->c_error_in__no_error_, &IPI_DrawLine_in_1_error_in__no_error__41C, sizeof(cl_00000));
		PDAClusterIncRefCnt(&IPI_DrawLine_in_1_error_in__no_error__41C,0x0 | ClusterDataType,1);
		heap->l_Image_In = (CCGRCRefnumHandle)IPI_DrawLine_in_4_Image_In_2B;
		CCGRCRefnumIncRefCnt(heap->l_Image_In, 1);
		{
			extern VoidHand IMAQ_Overlay_Line_in_1_Group_112;
			cl_E0000 castTemp0 = {0};
			cl_E0000 castTemp1 = {0};
			extern cl_00000 IMAQ_Overlay_Line_out_0_error_out_48_init_;
			cl_00000 IMAQ_Overlay_Line_out_0_error_out_48 = IMAQ_Overlay_Line_out_0_error_out_48_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Line_out_1_Image_Out_2 = IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			CopyValueFree(&heap->c___________________1, 0xA0000 | ClusterDataType, &castTemp0, 0xE0000 | ClusterDataType);
			CopyValueFree(&heap->c_Start_Point_, 0xA0000 | ClusterDataType, &castTemp1, 0xE0000 | ClusterDataType);
			heap->c_IMAQ_Overlay_Line_error_out = IMAQ_Overlay_Line_out_0_error_out_48;
			heap->l_IMAQ_Overlay_Line_Image_Out = IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
			if ((IMAQ_Overlay_Line_Run( 	uInt32DataType, heap->dw_Color_1,
			StringDataType, IMAQ_Overlay_Line_in_1_Group_112,
			0x0 | ClusterDataType, heap->c_error_in__no_error_,
			0xE0000 | ClusterDataType, castTemp0,
			0xE0000 | ClusterDataType, castTemp1,
			CCGRCRefnumHandleDataType, heap->l_Image_In,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Line_error_out,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Line_Image_Out	)) == eFail) CGenErr();
		}
		{
			extern VoidHand IMAQ_Overlay_Rectangle_in_1_Group_105;
			extern cl_00000 IMAQ_Overlay_Rectangle_out_0_error_out_41_init_;
			cl_00000 IMAQ_Overlay_Rectangle_out_0_error_out_41 = IMAQ_Overlay_Rectangle_out_0_error_out_41_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Rectangle_out_1_Image_Out_62_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Rectangle_out_1_Image_Out_62 = IMAQ_Overlay_Rectangle_out_1_Image_Out_62_init_;
			heap->c_IMAQ_Overlay_Rectangle_error_ = IMAQ_Overlay_Rectangle_out_0_error_out_41;
			heap->l_IMAQ_Overlay_Rectangle_Image_ = IMAQ_Overlay_Rectangle_out_1_Image_Out_62_init_;
			if ((IMAQ_Overlay_Rectangle_Run( 	uInt32DataType, heap->dw_Color,
			StringDataType, IMAQ_Overlay_Rectangle_in_1_Group_105,
			0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Line_error_out,
			uInt32DataType, heap->dw_Drawing_Mode__Frame_,
			0xB0000 | ClusterDataType, heap->c__________________,
			CCGRCRefnumHandleDataType, heap->l_IMAQ_Overlay_Line_Image_Out,
			0x0 | ClusterDataType, &heap->c_IMAQ_Overlay_Rectangle_error_,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Rectangle_Image_	)) == eFail) CGenErr();
		}
		if (IPI_DrawLine_out_1_Image_Out_146) {
	CCGRCRefnumFree(*IPI_DrawLine_out_1_Image_Out_146);
			*IPI_DrawLine_out_1_Image_Out_146 =heap->l_IMAQ_Overlay_Rectangle_Image_;
		}
		else {
	CCGRCRefnumFree(heap->l_IMAQ_Overlay_Rectangle_Image_);
		}
		{
			extern VoidHand Find_First_Error_in_1_source_messages_20;
			extern PDAArrPtr pFind_First_Error_in_2_error_codes_77_init_;
			extern cl_00000 Find_First_Error_out_0_error_out_28_init_;
			cl_00000 Find_First_Error_out_0_error_out_28 = Find_First_Error_out_0_error_out_28_init_;
			extern Boolean Find_First_Error_out_1_error__61_init_;
			Boolean Find_First_Error_out_1_error__61 = Find_First_Error_out_1_error__61_init_;
			PDAArrIncRefCnt(pFind_First_Error_in_2_error_codes_77_init_, 1);
			heap->c_Find_First_Error_vi_________ = Find_First_Error_out_0_error_out_28;
			if ((Find_First_Error_Run( 	0x0 | ClusterDataType, heap->c_IMAQ_Overlay_Rectangle_error_,
			StringDataType, Find_First_Error_in_1_source_messages_20,
			0xF0000 | ArrayDataType, pFind_First_Error_in_2_error_codes_77_init_,
			0x0 | ClusterDataType, &heap->c_Find_First_Error_vi_________,
			BooleanDataType, &Find_First_Error_out_1_error__61	)) == eFail) CGenErr();
	}
		if (IPI_DrawLine_out_0_error_out__no_error__4C4) {
			/* Free Cluster IPI_DrawLine_out_0_error_out__no_error__4C4*/
			{
				cl_00000* cl_004 = (cl_00000*)IPI_DrawLine_out_0_error_out__no_error__4C4;
				if (cl_004->el_2 && (((PDAStrPtr)cl_004->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_004->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_004->el_2)->staticStr)) {
						MemHandleFree( cl_004->el_2 );
						cl_004->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_Find_First_Error_vi_________, 0x0 | ClusterDataType, IPI_DrawLine_out_0_error_out__no_error__4C4);
		}
		else {
		}
		IPI_DrawLine_CleanupVIGlobalConstants();
		PDAClusterFree( &fp4F, 0xC0000 | ClusterDataType);
		PDAClusterFree( fp34, 0xD0000 | ClusterDataType);
		PDAClusterFree( &fp168, 0xC0000 | ClusterDataType);
		PDAClusterFree( fp14D, 0xD0000 | ClusterDataType);
		PDAClusterFree( &IPI_DrawLine_in_3_Start_Point_25C, 0xA0000 | ClusterDataType);
		if (IPI_DrawLine_in_2_Distance_Piex_325 && (((PDAStrPtr)IPI_DrawLine_in_2_Distance_Piex_325)->refcnt == 1) && (((PDAStrPtr)IPI_DrawLine_in_2_Distance_Piex_325)->staticStr == false)) {
	if (IPI_DrawLine_in_2_Distance_Piex_325 && (((PDAStrPtr)IPI_DrawLine_in_2_Distance_Piex_325)->refcnt > 0)) {
				if ((--((PDAStrPtr)IPI_DrawLine_in_2_Distance_Piex_325)->refcnt == 0) && (!((PDAStrPtr)IPI_DrawLine_in_2_Distance_Piex_325)->staticStr)) {
					MemHandleFree( IPI_DrawLine_in_2_Distance_Piex_325 );
					IPI_DrawLine_in_2_Distance_Piex_325=NULL;
				}
			}
			IPI_DrawLine_in_2_Distance_Piex_325 = NULL;
		}
		else
		{
	if (IPI_DrawLine_in_2_Distance_Piex_325 && (((PDAStrPtr)IPI_DrawLine_in_2_Distance_Piex_325)->refcnt > 0)) {
				if ((--((PDAStrPtr)IPI_DrawLine_in_2_Distance_Piex_325)->refcnt == 0) && (!((PDAStrPtr)IPI_DrawLine_in_2_Distance_Piex_325)->staticStr)) {
					MemHandleFree( IPI_DrawLine_in_2_Distance_Piex_325 );
					IPI_DrawLine_in_2_Distance_Piex_325=NULL;
				}
			}
		}
		PDAClusterFree( &IPI_DrawLine_in_1_error_in__no_error__41C, 0x0 | ClusterDataType);
		if (IPI_DrawLine_in_0_Roi_200 && ((IPI_DrawLine_in_0_Roi_200)->refcnt == 1) && ((IPI_DrawLine_in_0_Roi_200)->staticArray == false)) {
	if ((IPI_DrawLine_in_0_Roi_200) && ((IPI_DrawLine_in_0_Roi_200)->refcnt > 0)) {
				if (((IPI_DrawLine_in_0_Roi_200)->refcnt == 1) && ((IPI_DrawLine_in_0_Roi_200)->staticArray == false)) {
					(IPI_DrawLine_in_0_Roi_200)->refcnt--;
					MemHandleFree( IPI_DrawLine_in_0_Roi_200 );
					IPI_DrawLine_in_0_Roi_200=NULL;
				}
				else
				 	PDAArrFree(IPI_DrawLine_in_0_Roi_200);
			}
			IPI_DrawLine_in_0_Roi_200 = NULL;
		}
		else
		{
	if ((IPI_DrawLine_in_0_Roi_200) && ((IPI_DrawLine_in_0_Roi_200)->refcnt > 0)) {
				if (((IPI_DrawLine_in_0_Roi_200)->refcnt == 1) && ((IPI_DrawLine_in_0_Roi_200)->staticArray == false)) {
					(IPI_DrawLine_in_0_Roi_200)->refcnt--;
					MemHandleFree( IPI_DrawLine_in_0_Roi_200 );
					IPI_DrawLine_in_0_Roi_200=NULL;
				}
				else
				 	PDAArrFree(IPI_DrawLine_in_0_Roi_200);
			}
		}
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_DrawLine_VIName = "IPI_DrawLine.vi";

eRunStatus IPI_DrawLine_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_DrawLine_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_DrawLine_AddSubVIInstanceData();
	return IPI_DrawLine_Run();
}


/****** Library interface **********/


void IPI_DrawLine(TD1 *StartPoint,
Char DistancePiex[],
float64 Roi[],
int32 len)
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

	IPI_DrawLine_AddSubVIInstanceData();
	IPI_DrawLine_InitVIConstantList();

	IPI_DrawLine_in_3_Start_Point_25C = *(cl_A0000*)StartPoint;
	IPI_DrawLine_in_2_Distance_Piex_325 = PDAStrNewFromBuf( DistancePiex, StrLen(DistancePiex) );
	IPI_DrawLine_in_0_Roi_200 = PDAArrNewFromCArray( Roi, 0x40000 | ArrayDataType, len );
	/* Call top level VI main function */
	IPI_DrawLine_Run();

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


