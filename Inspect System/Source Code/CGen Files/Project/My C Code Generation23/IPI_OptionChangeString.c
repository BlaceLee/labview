/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_OptionChangeString.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\IPI_OptionChangeString.vi
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
#include "IPI_OptionChangeStringLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IPI_OptionChangeString_heap { 
	cl_C0000 c________________Edge_Options;
	cl_C0000 c________________Edge_Options_1;
	uInt32 dw________________Search_Direct;
	uInt32 dw________________Edge_Location;
	uInt32 dw________________Result_Color;
	uInt32 dw________________Width;
	uInt32 dw________________Kernel_Size;
	uInt32 dw________________Search_Lines_;
	uInt32 dw________________Search_Direct_1;
	uInt32 dw________________Edge_Polarity;
	uInt32 dw________________Search_Area_C;
	float32 n________________Minimum_Edge_S;
	cl_E0000* c_Options_;
	cl_D0000* c_Options__Find_Straight_Edge_2;
	cl_D0000* c__________________;
	VoidHand s_____________________________1;
	VoidHand s_____________________________2;
	VoidHand s_____________________________3;
	VoidHand s_____________________________4;
	VoidHand s______________________________1;
	VoidHand Args384_1;  
	VoidHand Args31F_1;  
	VoidHand Args7CD_1;  
	VoidHand Args812_1;  
	VoidHand Args51A_1;  
	VoidHand s_______________________________1;
	VoidHand s______________________________;
	VoidHand s_Constant;
	VoidHand s_____________________________6;
	VoidHand s_____________________________7;
	VoidHand s______________________F_______;
	VoidHand s_____________________________8;
	VoidHand s_____________________________9;
	VoidHand s_____________________________10;
	VoidHand s____________________________1;
	VoidHand s________________Overlay_Group_;
	VoidHand s________________________;
	VoidHand s_____________________________5;
	Enum32 e________________Interpolation_;
	Enum32 e________________Data_Processin;
	int16 i______6_;
	int16 i__________0_1______0__1;
	int16 i__________0_1______0__1_3;
	int16 i__________0_1______0__1_2;
	int16 i__________0_1______0__1_1;
	Boolean b________________Show_Search_Ar;
	Boolean b________________Show_Result;
	Boolean b________________Show_Search_Li;
	Boolean b________________Show_Edges_Fou;
} _DATA_SECTION __IPI_OptionChangeString_heap; /* heap */

static struct _IPI_OptionChangeString_heap _DATA_SECTION *heap = &__IPI_OptionChangeString_heap; /* heap */

struct _tIPI_OptionChangeString_GlobalConstantsHeap {
	uInt8	refCnt;
	VoidHand	i573;
	cl_D0000*	i194A;
} _DATA_SECTION __IPI_OptionChangeString_GlobalConstantsHeap;
static struct _tIPI_OptionChangeString_GlobalConstantsHeap _DATA_SECTION *IPI_OptionChangeString_GlobalConstantsHeapPtr = &__IPI_OptionChangeString_GlobalConstantsHeap;

_DATA_SECTION static  cl_C0000 g_cluster_1 = 
{1, 3, 1, 2.1000000000000000000E+1, 4, 0};

_DATA_SECTION  cl_E0000 IPI_OptionChangeString_in_0_Options_7D4_init_ = 
{1, 1, 2, 
{1, 3, 1, 2.1000000000000000000E+1, 4, 0}};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_D0000 g_cluster_4 = 
{1, 1, 2, 
{1, 3, 1, 2.1000000000000000000E+1, 4, 0}, 1, 0, 0, 1, 65280, 255, 16776960, 16711680, (PDAStrPtr)(&g_string_1)};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_OptionChangeString_CleanupLSRs(void);
void _TEXT_SECTION IPI_OptionChangeString_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_OptionChangeString_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_OptionChangeString_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_OptionChangeString_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_OptionChangeString_AddVIGlobalConstants(void) {
	MemSet(IPI_OptionChangeString_GlobalConstantsHeapPtr,sizeof(*(IPI_OptionChangeString_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION IPI_OptionChangeString_CleanupVIGlobalConstants(void);
void _TEXT_SECTION IPI_OptionChangeString_CleanupVIGlobalConstants(void) {
	(IPI_OptionChangeString_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_OptionChangeString_InitVIConstantList(void);
void _TEXT_SECTION IPI_OptionChangeString_InitVIConstantList(void) {
	(IPI_OptionChangeString_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


VoidHand IPI_OptionChangeString_out_0_string_32_init_ = NULL;
static VoidHand *IPI_OptionChangeString_out_0_string_32 = &IPI_OptionChangeString_out_0_string_32_init_;
static DataType dtIPI_OptionChangeString_out_0_string_32 = StringDataType;
cl_E0000* IPI_OptionChangeString_in_0_Options_7D4 = &IPI_OptionChangeString_in_0_Options_7D4_init_;
static DataType dtIPI_OptionChangeString_in_0_Options_7D4 = 0xE0000 | BigClusterDataType;
extern eRunStatus IPI_OptionChangeString_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	if (!IPI_OptionChangeString_out_0_string_32) {
		 	IPI_OptionChangeString_out_0_string_32 = LVPDAMemHandleNew( sizeof(PDAStrPtr), NULL );
		 	*IPI_OptionChangeString_out_0_string_32 = NULL;
	}
	if (!(*IPI_OptionChangeString_out_0_string_32)) {
		*IPI_OptionChangeString_out_0_string_32 = PDAStrNewFromStr(_LVT(""));
	}
	IPI_OptionChangeString_InitVIConstantList();
	{
		heap->i______6_ = 3;
		IPI_OptionChangeString_GlobalConstantsHeapPtr->i573 = PDAStrNewFromBuf(_LVT(";"),(uInt32)1);
		heap->s_Constant = IPI_OptionChangeString_GlobalConstantsHeapPtr->i573;
		PDAStrIncRefCnt(heap->s_Constant, (uInt16)14); /* BDConst - alloc type */
		if ( !IPI_OptionChangeString_GlobalConstantsHeapPtr->i194A ) {
			{
				IPI_OptionChangeString_GlobalConstantsHeapPtr->i194A = (cl_D0000*)&g_cluster_4;
			}
		}
		PDAClusterIncRefCnt(&IPI_OptionChangeString_GlobalConstantsHeapPtr->i194A,0xD0000 | BigClusterDataType,1);
		heap->c_Options__Find_Straight_Edge_2 = IPI_OptionChangeString_GlobalConstantsHeapPtr->i194A;
		/* Cluster Inc Ref Count:  BDConst - alloc type*/
		if(heap->c_Options__Find_Straight_Edge_2) heap->c_Options__Find_Straight_Edge_2->refcnt += 1;
		heap->c_Options_ = (cl_E0000*)IPI_OptionChangeString_in_0_Options_7D4;
		PDAClusterIncRefCnt(&IPI_OptionChangeString_in_0_Options_7D4,0xE0000 | BigClusterDataType,1);
/* Unbundle by name */
		{
			cl_E0000* cl_002;
			if (!heap->c_Options_) heap->c_Options_ = PDAClusterNewEmpty( 0xE0000 | BigClusterDataType );
			cl_002 = (cl_E0000*)heap->c_Options_;
			heap->dw________________Search_Direct = cl_002->el_0;
			memcpy( &heap->c________________Edge_Options, &(cl_002->el_1), sizeof(cl_C0000) );
	/* Free Cluster heap->c_Options_*/
			PDAClusterFree( &heap->c_Options_, 0xE0000 | BigClusterDataType );
		}
/* Bundle by name */
		{
			cl_D0000* cl_004 = NULL;
			/* Cluster CopyOnModify */
			PDAClusterCopyOnModify( &heap->c_Options__Find_Straight_Edge_2, 0xD0000 | BigClusterDataType, &heap->c__________________ );
			cl_004 = (cl_D0000*)heap->c__________________;
	cl_004->el_0 = heap->dw________________Search_Direct;
	cl_004->el_1 = heap->c________________Edge_Options;
		}
/* Unbundle by name */
		{
			cl_D0000* cl_005;
			if (!heap->c__________________) heap->c__________________ = PDAClusterNewEmpty( 0xD0000 | BigClusterDataType );
			cl_005 = (cl_D0000*)heap->c__________________;
			heap->dw________________Search_Direct_1 = cl_005->el_0;
			memcpy( &heap->c________________Edge_Options_1, &(cl_005->el_1), sizeof(cl_C0000) );
			heap->b________________Show_Search_Ar = cl_005->el_2;
			heap->b________________Show_Search_Li = cl_005->el_3;
			heap->b________________Show_Edges_Fou = cl_005->el_4;
			heap->b________________Show_Result = cl_005->el_5;
			heap->dw________________Search_Area_C = cl_005->el_6;
			heap->dw________________Search_Lines_ = cl_005->el_7;
			heap->dw________________Edge_Location = cl_005->el_8;
			heap->dw________________Result_Color = cl_005->el_9;
			PDAStrIncRefCnt(cl_005->el_10, (uInt16)1); /*  */
			heap->s________________Overlay_Group_ = cl_005->el_10;
	/* Free Cluster heap->c__________________*/
			PDAClusterFree( &heap->c__________________, 0xD0000 | BigClusterDataType );
		}
		/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->dw________________Result_Color), uInt32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s______________________________), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->dw________________Edge_Location), uInt32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s_______________________________1), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->dw________________Search_Lines_), uInt32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s______________________________1), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->dw________________Search_Area_C), uInt32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s_____________________________1), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 布尔值至(0,1)转换 */
		/**/
		heap->i__________0_1______0__1 = (int16)(int32)((heap->b________________Show_Result)?1:0);
		/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->i__________0_1______0__1), int16DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'d', &(heap->s_____________________________2), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 布尔值至(0,1)转换 */
		/**/
		heap->i__________0_1______0__1_1 = (int16)(int32)((heap->b________________Show_Edges_Fou)?1:0);
		/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->i__________0_1______0__1_1), int16DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'d', &(heap->s_____________________________3), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 布尔值至(0,1)转换 */
		/**/
		heap->i__________0_1______0__1_2 = (int16)(int32)((heap->b________________Show_Search_Li)?1:0);
		/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->i__________0_1______0__1_2), int16DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'d', &(heap->s_____________________________4), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 布尔值至(0,1)转换 */
		/**/
		heap->i__________0_1______0__1_3 = (int16)(int32)((heap->b________________Show_Search_Ar)?1:0);
		/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->i__________0_1______0__1_3), int16DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'d', &(heap->s_____________________________5), StringDataType ))){
			CGenErr();
		}
/* Unbundle by name */
		{
			cl_C0000* cl_007 = (cl_C0000*)&heap->c________________Edge_Options_1;
			heap->dw________________Edge_Polarity = cl_007->el_0;
			heap->dw________________Kernel_Size = cl_007->el_1;
			heap->dw________________Width = cl_007->el_2;
			heap->n________________Minimum_Edge_S = cl_007->el_3;
			heap->e________________Interpolation_ = cl_007->el_4;
			heap->e________________Data_Processin = cl_007->el_5;
	}
		/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->e________________Data_Processin), 0xB0000 | Enum32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s_____________________________6), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->e________________Interpolation_), 0xA0000 | Enum32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s_____________________________7), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->dw________________Width), uInt32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s_____________________________8), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->dw________________Kernel_Size), uInt32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s_____________________________9), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->dw________________Edge_Polarity), uInt32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s_____________________________10), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至十进制数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->dw________________Search_Direct_1), uInt32DataType, NULL, uCharDataType, NULL, UCharDataType, (int8)'u', &(heap->s____________________________1), StringDataType ))){
			CGenErr();
		}
	/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n________________Minimum_Edge_S), floatDataType, NULL, uCharDataType, &(heap->i______6_), int16DataType, (int8)'f', &(heap->s______________________F_______), StringDataType ))){
			CGenErr();
		}
	{
			ControlDataItemPtr cdPtr = LVGetCurrentControlData();
			CreateArgListStatic(heap->Args51A_1, 31, 1 );
			argIn(heap->Args51A_1, 0).nType = StringDataType;
			argIn(heap->Args51A_1, 0).pValue = (void *)&heap->s____________________________1;
			argIn(heap->Args51A_1, 1).nType = StringDataType;
			argIn(heap->Args51A_1, 1).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 2).nType = StringDataType;
			argIn(heap->Args51A_1, 2).pValue = (void *)&heap->s_____________________________10;
			argIn(heap->Args51A_1, 3).nType = StringDataType;
			argIn(heap->Args51A_1, 3).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 4).nType = StringDataType;
			argIn(heap->Args51A_1, 4).pValue = (void *)&heap->s_____________________________9;
			argIn(heap->Args51A_1, 5).nType = StringDataType;
			argIn(heap->Args51A_1, 5).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 6).nType = StringDataType;
			argIn(heap->Args51A_1, 6).pValue = (void *)&heap->s_____________________________8;
			argIn(heap->Args51A_1, 7).nType = StringDataType;
			argIn(heap->Args51A_1, 7).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 8).nType = StringDataType;
			argIn(heap->Args51A_1, 8).pValue = (void *)&heap->s______________________F_______;
			argIn(heap->Args51A_1, 9).nType = StringDataType;
			argIn(heap->Args51A_1, 9).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 10).nType = StringDataType;
			argIn(heap->Args51A_1, 10).pValue = (void *)&heap->s_____________________________7;
			argIn(heap->Args51A_1, 11).nType = StringDataType;
			argIn(heap->Args51A_1, 11).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 12).nType = StringDataType;
			argIn(heap->Args51A_1, 12).pValue = (void *)&heap->s_____________________________6;
			argIn(heap->Args51A_1, 13).nType = StringDataType;
			argIn(heap->Args51A_1, 13).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 14).nType = StringDataType;
			argIn(heap->Args51A_1, 14).pValue = (void *)&heap->s_____________________________5;
			argIn(heap->Args51A_1, 15).nType = StringDataType;
			argIn(heap->Args51A_1, 15).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 16).nType = StringDataType;
			argIn(heap->Args51A_1, 16).pValue = (void *)&heap->s_____________________________4;
			argIn(heap->Args51A_1, 17).nType = StringDataType;
			argIn(heap->Args51A_1, 17).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 18).nType = StringDataType;
			argIn(heap->Args51A_1, 18).pValue = (void *)&heap->s_____________________________3;
			argIn(heap->Args51A_1, 19).nType = StringDataType;
			argIn(heap->Args51A_1, 19).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 20).nType = StringDataType;
			argIn(heap->Args51A_1, 20).pValue = (void *)&heap->s_____________________________2;
			argIn(heap->Args51A_1, 21).nType = StringDataType;
			argIn(heap->Args51A_1, 21).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 22).nType = StringDataType;
			argIn(heap->Args51A_1, 22).pValue = (void *)&heap->s_____________________________1;
			argIn(heap->Args51A_1, 23).nType = StringDataType;
			argIn(heap->Args51A_1, 23).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 24).nType = StringDataType;
			argIn(heap->Args51A_1, 24).pValue = (void *)&heap->s______________________________1;
			argIn(heap->Args51A_1, 25).nType = StringDataType;
			argIn(heap->Args51A_1, 25).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 26).nType = StringDataType;
			argIn(heap->Args51A_1, 26).pValue = (void *)&heap->s_______________________________1;
			argIn(heap->Args51A_1, 27).nType = StringDataType;
			argIn(heap->Args51A_1, 27).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 28).nType = StringDataType;
			argIn(heap->Args51A_1, 28).pValue = (void *)&heap->s______________________________;
			argIn(heap->Args51A_1, 29).nType = StringDataType;
			argIn(heap->Args51A_1, 29).pValue = (void *)&heap->s_Constant;
			argIn(heap->Args51A_1, 30).nType = StringDataType;
			argIn(heap->Args51A_1, 30).pValue = (void *)&heap->s________________Overlay_Group_;
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
		PDAStrFree(*IPI_OptionChangeString_out_0_string_32);
		*IPI_OptionChangeString_out_0_string_32 = PDAStrCopyOnModify(heap->s________________________);
		IPI_OptionChangeString_CleanupVIGlobalConstants();
		PDAClusterFree( &IPI_OptionChangeString_in_0_Options_7D4, 0xE0000 | BigClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_OptionChangeString_VIName = "IPI_OptionChangeString.vi";

eRunStatus IPI_OptionChangeString_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_OptionChangeString_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_OptionChangeString_AddSubVIInstanceData();
	return IPI_OptionChangeString_Run();
}


/****** Library interface **********/


void IPI_OptionChangeString(Char **string)
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

	IPI_OptionChangeString_AddSubVIInstanceData();
	IPI_OptionChangeString_InitVIConstantList();

	/* Call top level VI main function */
	IPI_OptionChangeString_Run();
	*string = PDAStrCStrFromLVStr( IPI_OptionChangeString_out_0_string_32 );

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


