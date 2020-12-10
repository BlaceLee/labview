/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_CCD_Write_Result.vi
 *	Generated from: C:\Users\delluser001\Desktop\Í­µæÆ¬¼ì²â\LX Inspect System\Source Code\SubVIs\CCD\IPI_CCD_Write_Result.vi
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
#include "IPI_CCD_Write_ResultLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IPI_CCD_Write_Result_heap { 
	cl_A0000 c_Origin;
	uInt32 dw_Constant;
	uInt32 dw_Constant_1;
	VoidHand s________1;
	VoidHand s________________________;
	VoidHand s_Result;
	VoidHand s_______;
	VoidHand Args15C_1;  
	CCGRCRefnumHandle l_Image_in;
	CCGRCRefnumHandle l_IMAQ_Overlay_Text_Image_Out;
} _DATA_SECTION __IPI_CCD_Write_Result_heap; /* heap */

static struct _IPI_CCD_Write_Result_heap _DATA_SECTION *heap = &__IPI_CCD_Write_Result_heap; /* heap */

struct _tIPI_CCD_Write_Result_GlobalConstantsHeap {
	uInt8	refCnt;
	VoidHand	i1E7;
	VoidHand	i249;
} _DATA_SECTION __IPI_CCD_Write_Result_GlobalConstantsHeap;
static struct _tIPI_CCD_Write_Result_GlobalConstantsHeap _DATA_SECTION *IPI_CCD_Write_Result_GlobalConstantsHeapPtr = &__IPI_CCD_Write_Result_GlobalConstantsHeap;

_DATA_SECTION static  cl_B0000 g_cluster_1 = 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_C0000 g_cluster_2 = 
{(PDAStrPtr)(&g_string_1)};

_DATA_SECTION static  cl_B0000 g_cluster_3 = 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_C0000 g_cluster_4 = 
{(PDAStrPtr)(&g_string_2)};

_DATA_SECTION  cl_A0000 IPI_CCD_Write_Result_in_0_Origin_397 = 
{0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_CCD_Write_Result_CleanupLSRs(void);
void _TEXT_SECTION IPI_CCD_Write_Result_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_CCD_Write_Result_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_CCD_Write_Result_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_CCD_Write_Result_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_CCD_Write_Result_AddVIGlobalConstants(void) {
	MemSet(IPI_CCD_Write_Result_GlobalConstantsHeapPtr,sizeof(*(IPI_CCD_Write_Result_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION IPI_CCD_Write_Result_CleanupVIGlobalConstants(void);
void _TEXT_SECTION IPI_CCD_Write_Result_CleanupVIGlobalConstants(void) {
	(IPI_CCD_Write_Result_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_CCD_Write_Result_InitVIConstantList(void);
void _TEXT_SECTION IPI_CCD_Write_Result_InitVIConstantList(void) {
	(IPI_CCD_Write_Result_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static cl_B0000 fp4F;
static DataType dtfp4F = 0xB0000 | ClusterDataType;
static cl_C0000 fp34_init_;
static cl_C0000* fp34 = &fp34_init_;
static DataType dtfp34 = 0xC0000 | ClusterDataType;
static cl_B0000 fp15F;
static DataType dtfp15F = 0xB0000 | ClusterDataType;
static cl_C0000 fp144_init_;
static cl_C0000* fp144 = &fp144_init_;
static DataType dtfp144 = 0xC0000 | ClusterDataType;
static DataType dtIPI_CCD_Write_Result_in_0_Origin_397 = 0xA0000 | ClusterDataType;
VoidHand IPI_CCD_Write_Result_in_1_Result_473 = NULL;
static DataType dtIPI_CCD_Write_Result_in_1_Result_473 = StringDataType;
extern eRunStatus IPI_CCD_Write_Result_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	fp4F = g_cluster_1;
	PDAClusterIncRefCnt(&fp4F, 0xB0000 | ClusterDataType, 1);
	*fp34 = g_cluster_2;
	PDAClusterIncRefCnt(fp34, 0xC0000 | ClusterDataType, 1);
	fp15F = g_cluster_3;
	PDAClusterIncRefCnt(&fp15F, 0xB0000 | ClusterDataType, 1);
	*fp144 = g_cluster_4;
	PDAClusterIncRefCnt(fp144, 0xC0000 | ClusterDataType, 1);
	if (!IPI_CCD_Write_Result_in_1_Result_473) {
		IPI_CCD_Write_Result_in_1_Result_473 = PDAStrNewFromStr(_LVT(""));
	}
	IPI_CCD_Write_Result_InitVIConstantList();
	{
		heap->dw_Constant_1 = RGB(255, 0, 0);
		heap->dw_Constant = RGB(210, 210, 210);
		IPI_CCD_Write_Result_GlobalConstantsHeapPtr->i1E7 = PDAStrNewFromBuf(_LVT("Distance: "),(uInt32)10);
		heap->s________1 = IPI_CCD_Write_Result_GlobalConstantsHeapPtr->i1E7;
		IPI_CCD_Write_Result_GlobalConstantsHeapPtr->i249 = PDAStrNewFromBuf(_LVT("   mm"),(uInt32)5);
		heap->s_______ = IPI_CCD_Write_Result_GlobalConstantsHeapPtr->i249;
		heap->s_Result =IPI_CCD_Write_Result_in_1_Result_473;
		PDAStrIncRefCnt(IPI_CCD_Write_Result_in_1_Result_473,1);
		{
			ControlDataItemPtr cdPtr = LVGetCurrentControlData();
			CreateArgListStatic(heap->Args15C_1, 3, 1 );
			argIn(heap->Args15C_1, 0).nType = StringDataType;
			argIn(heap->Args15C_1, 0).pValue = (void *)&heap->s________1;
			argIn(heap->Args15C_1, 1).nType = StringDataType;
			argIn(heap->Args15C_1, 1).pValue = (void *)&heap->s_Result;
			argIn(heap->Args15C_1, 2).nType = StringDataType;
			argIn(heap->Args15C_1, 2).pValue = (void *)&heap->s_______;
			argOut(heap->Args15C_1, 0).nType = StringDataType;
			argOut(heap->Args15C_1, 0).pValue = (void *)&heap->s________________________;
			if (!PDAStrConcat( (ArgList *)((ArgList **)heap->Args15C_1)[0], (ArgList *)((ArgList **)heap->Args15C_1)[1] )) {
				CGenErr();
			}
			if (gAppStop) {
				gAppStop=true;
				return eFinished;
			}
		}
		MemMove(&heap->c_Origin, &IPI_CCD_Write_Result_in_0_Origin_397, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&IPI_CCD_Write_Result_in_0_Origin_397,0xA0000 | ClusterDataType,1);
		heap->l_Image_in = (CCGRCRefnumHandle)IPI_CCD_Write_Result_in_2_Image_in_2B;
		CCGRCRefnumIncRefCnt(heap->l_Image_in, 1);
		{
			extern VoidHand IMAQ_Overlay_Text_in_1_Group_194;
			extern cl_F0000 IMAQ_Overlay_Text_in_3_Font__Size___Style_61_init_;
			cl_F0000* IMAQ_Overlay_Text_in_3_Font__Size___Style_61 = &IMAQ_Overlay_Text_in_3_Font__Size___Style_61_init_;
			extern cl_00000 IMAQ_Overlay_Text_in_4_error_in__no_error__2E_init_;
			cl_00000 IMAQ_Overlay_Text_in_4_error_in__no_error__2E = IMAQ_Overlay_Text_in_4_error_in__no_error__2E_init_;
			extern cl_00000 IMAQ_Overlay_Text_out_0_error_out_44_init_;
			cl_00000 IMAQ_Overlay_Text_out_0_error_out_44 = IMAQ_Overlay_Text_out_0_error_out_44_init_;
			extern CCGRCRefnumHandle IMAQ_Overlay_Text_out_1_Image_Out_A8_init_;
			CCGRCRefnumHandle IMAQ_Overlay_Text_out_1_Image_Out_A8 = IMAQ_Overlay_Text_out_1_Image_Out_A8_init_;
			PDAClusterIncRefCnt(&IMAQ_Overlay_Text_in_3_Font__Size___Style_61, 0xF0000 | BigClusterDataType, 1);
			PDAClusterIncRefCnt(&IMAQ_Overlay_Text_in_4_error_in__no_error__2E, 0x0 | ClusterDataType, 1);
			PDAClusterIncRefCnt(&IMAQ_Overlay_Text_out_0_error_out_44, 0x0 | ClusterDataType, 1);
			heap->l_IMAQ_Overlay_Text_Image_Out = IMAQ_Overlay_Text_out_1_Image_Out_A8_init_;
			if ((IMAQ_Overlay_Text_Run( 	uInt32DataType, heap->dw_Constant,
			StringDataType, IMAQ_Overlay_Text_in_1_Group_194,
			uInt32DataType, heap->dw_Constant_1,
			0xF0000 | BigClusterDataType, IMAQ_Overlay_Text_in_3_Font__Size___Style_61,
			0x0 | ClusterDataType, IMAQ_Overlay_Text_in_4_error_in__no_error__2E,
			StringDataType, heap->s________________________,
			0xA0000 | ClusterDataType, heap->c_Origin,
			CCGRCRefnumHandleDataType, heap->l_Image_in,
			0x0 | ClusterDataType, &IMAQ_Overlay_Text_out_0_error_out_44,
			CCGRCRefnumHandleDataType, &heap->l_IMAQ_Overlay_Text_Image_Out	)) == eFail) CGenErr();
	/* Free Cluster IMAQ_Overlay_Text_out_0_error_out_44*/
			{
				cl_00000* cl_001 = (cl_00000*)&IMAQ_Overlay_Text_out_0_error_out_44;
				if (cl_001->el_2 && (((PDAStrPtr)cl_001->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_001->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_001->el_2)->staticStr)) {
						MemHandleFree( cl_001->el_2 );
						cl_001->el_2=NULL;
					}
				}
			}
		}
		if (IPI_CCD_Write_Result_out_0_Image_Out_13D) {
	CCGRCRefnumFree(*IPI_CCD_Write_Result_out_0_Image_Out_13D);
			*IPI_CCD_Write_Result_out_0_Image_Out_13D =heap->l_IMAQ_Overlay_Text_Image_Out;
		}
		else {
	CCGRCRefnumFree(heap->l_IMAQ_Overlay_Text_Image_Out);
		}
		IPI_CCD_Write_Result_CleanupVIGlobalConstants();
		PDAClusterFree( &fp4F, 0xB0000 | ClusterDataType);
		PDAClusterFree( fp34, 0xC0000 | ClusterDataType);
		PDAClusterFree( &fp15F, 0xB0000 | ClusterDataType);
		PDAClusterFree( fp144, 0xC0000 | ClusterDataType);
		PDAClusterFree( &IPI_CCD_Write_Result_in_0_Origin_397, 0xA0000 | ClusterDataType);
		if (IPI_CCD_Write_Result_in_1_Result_473 && (((PDAStrPtr)IPI_CCD_Write_Result_in_1_Result_473)->refcnt == 1) && (((PDAStrPtr)IPI_CCD_Write_Result_in_1_Result_473)->staticStr == false)) {
	if (IPI_CCD_Write_Result_in_1_Result_473 && (((PDAStrPtr)IPI_CCD_Write_Result_in_1_Result_473)->refcnt > 0)) {
				if ((--((PDAStrPtr)IPI_CCD_Write_Result_in_1_Result_473)->refcnt == 0) && (!((PDAStrPtr)IPI_CCD_Write_Result_in_1_Result_473)->staticStr)) {
					MemHandleFree( IPI_CCD_Write_Result_in_1_Result_473 );
					IPI_CCD_Write_Result_in_1_Result_473=NULL;
				}
			}
			IPI_CCD_Write_Result_in_1_Result_473 = NULL;
		}
		else
		{
	if (IPI_CCD_Write_Result_in_1_Result_473 && (((PDAStrPtr)IPI_CCD_Write_Result_in_1_Result_473)->refcnt > 0)) {
				if ((--((PDAStrPtr)IPI_CCD_Write_Result_in_1_Result_473)->refcnt == 0) && (!((PDAStrPtr)IPI_CCD_Write_Result_in_1_Result_473)->staticStr)) {
					MemHandleFree( IPI_CCD_Write_Result_in_1_Result_473 );
					IPI_CCD_Write_Result_in_1_Result_473=NULL;
				}
			}
		}
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_CCD_Write_Result_VIName = "IPI_CCD_Write_Result.vi";

eRunStatus IPI_CCD_Write_Result_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_CCD_Write_Result_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_CCD_Write_Result_AddSubVIInstanceData();
	return IPI_CCD_Write_Result_Run();
}


/****** Library interface **********/


void IPI_CCD_Write_Result(Char Result[],
TD1 *Origin)
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

	IPI_CCD_Write_Result_AddSubVIInstanceData();
	IPI_CCD_Write_Result_InitVIConstantList();

	IPI_CCD_Write_Result_in_1_Result_473 = PDAStrNewFromBuf( Result, StrLen(Result) );
	IPI_CCD_Write_Result_in_0_Origin_397 = *(cl_A0000*)Origin;
	/* Call top level VI main function */
	IPI_CCD_Write_Result_Run();

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


