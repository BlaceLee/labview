/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_PassorFail_static.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\IPI_PassorFail_static.vi
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
#include "IPI_PassorFail_staticLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IPI_PassorFail_static_heap { 
	cl_A0000 c_Static;
	float64 n____x_y_1;
	float64 n_y;
	float64 n____x_y_2;
	float64 n_y_1;
	float64 n____x_y_3;
	float64 n______________________________1;
	float64 n_______________________________1;
	float64 n______________________________;
	float64 n____x_y;
	VoidHand s_________________________1;
	VoidHand s______________________F________1;
	VoidHand Args26C_1;  
	VoidHand Args2F5_1;  
	VoidHand s________________________;
	VoidHand s_______;
	VoidHand s______________________F_______;
	VoidHand s________________Fail_Number;
	VoidHand s________________Pass_Number;
	VoidHand s________________Total_Number;
	VoidHand s________1;
	VoidHand Args91_1;  
	int16 i______6_;
	int16 i______6__1;
} _DATA_SECTION __IPI_PassorFail_static_heap; /* heap */

static struct _IPI_PassorFail_static_heap _DATA_SECTION *heap = &__IPI_PassorFail_static_heap; /* heap */

struct _tIPI_PassorFail_static_GlobalConstantsHeap {
	uInt8	refCnt;
	VoidHand	i296;
	VoidHand	i302;
} _DATA_SECTION __IPI_PassorFail_static_GlobalConstantsHeap;
static struct _tIPI_PassorFail_static_GlobalConstantsHeap _DATA_SECTION *IPI_PassorFail_static_GlobalConstantsHeapPtr = &__IPI_PassorFail_static_GlobalConstantsHeap;

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

struct _g_string_3 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_A0000 IPI_PassorFail_static_in_0_Static_2B = 
{(PDAStrPtr)(&g_string_1), (PDAStrPtr)(&g_string_2), (PDAStrPtr)(&g_string_3)};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_PassorFail_static_CleanupLSRs(void);
void _TEXT_SECTION IPI_PassorFail_static_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_PassorFail_static_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_PassorFail_static_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_PassorFail_static_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_PassorFail_static_AddVIGlobalConstants(void) {
	MemSet(IPI_PassorFail_static_GlobalConstantsHeapPtr,sizeof(*(IPI_PassorFail_static_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION IPI_PassorFail_static_CleanupVIGlobalConstants(void);
void _TEXT_SECTION IPI_PassorFail_static_CleanupVIGlobalConstants(void) {
	(IPI_PassorFail_static_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_PassorFail_static_InitVIConstantList(void);
void _TEXT_SECTION IPI_PassorFail_static_InitVIConstantList(void) {
	(IPI_PassorFail_static_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static float64 A_______B2_init_ = 0.0000000000000000000E+0 ;
static float64* A_______B2 = &A_______B2_init_;
static DataType dtA_______B2 = doubleDataType;
static float64 x_y__C0_init_ = 0.0000000000000000000E+0 ;
static float64* x_y__C0 = &x_y__C0_init_;
static DataType dtx_y__C0 = doubleDataType;
static DataType dtIPI_PassorFail_static_in_0_Static_2B = 0xA0000 | ClusterDataType;
VoidHand IPI_PassorFail_static_out_3_Pass_2AF_init_ = NULL;
static VoidHand *IPI_PassorFail_static_out_3_Pass_2AF = &IPI_PassorFail_static_out_3_Pass_2AF_init_;
static DataType dtIPI_PassorFail_static_out_3_Pass_2AF = StringDataType;
VoidHand IPI_PassorFail_static_out_2_Fail_2DB_init_ = NULL;
static VoidHand *IPI_PassorFail_static_out_2_Fail_2DB = &IPI_PassorFail_static_out_2_Fail_2DB_init_;
static DataType dtIPI_PassorFail_static_out_2_Fail_2DB = StringDataType;
float64 IPI_PassorFail_static_out_1_Pass_D5_init_ = 0.0000000000000000000E+0 ;
static float64* IPI_PassorFail_static_out_1_Pass_D5 = &IPI_PassorFail_static_out_1_Pass_D5_init_;
static DataType dtIPI_PassorFail_static_out_1_Pass_D5 = doubleDataType;
float64 IPI_PassorFail_static_out_0_Fail_B8_init_ = 0.0000000000000000000E+0 ;
static float64* IPI_PassorFail_static_out_0_Fail_B8 = &IPI_PassorFail_static_out_0_Fail_B8_init_;
static DataType dtIPI_PassorFail_static_out_0_Fail_B8 = doubleDataType;
extern eRunStatus IPI_PassorFail_static_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	if (!IPI_PassorFail_static_out_3_Pass_2AF) {
		 	IPI_PassorFail_static_out_3_Pass_2AF = LVPDAMemHandleNew( sizeof(PDAStrPtr), NULL );
		 	*IPI_PassorFail_static_out_3_Pass_2AF = NULL;
	}
	if (!(*IPI_PassorFail_static_out_3_Pass_2AF)) {
		*IPI_PassorFail_static_out_3_Pass_2AF = PDAStrNewFromStr(_LVT(""));
	}
	if (!IPI_PassorFail_static_out_2_Fail_2DB) {
		 	IPI_PassorFail_static_out_2_Fail_2DB = LVPDAMemHandleNew( sizeof(PDAStrPtr), NULL );
		 	*IPI_PassorFail_static_out_2_Fail_2DB = NULL;
	}
	if (!(*IPI_PassorFail_static_out_2_Fail_2DB)) {
		*IPI_PassorFail_static_out_2_Fail_2DB = PDAStrNewFromStr(_LVT(""));
	}
	IPI_PassorFail_static_InitVIConstantList();
	{
		heap->i______6__1 = 3;
		heap->i______6_ = 3;
		IPI_PassorFail_static_GlobalConstantsHeapPtr->i296 = PDAStrNewFromBuf(_LVT(" %"),(uInt32)2);
		heap->s________1 = IPI_PassorFail_static_GlobalConstantsHeapPtr->i296;
		IPI_PassorFail_static_GlobalConstantsHeapPtr->i302 = PDAStrNewFromBuf(_LVT(" %"),(uInt32)2);
		heap->s_______ = IPI_PassorFail_static_GlobalConstantsHeapPtr->i302;
		heap->n_y_1 = 1.0000000000000000000E+2;
		heap->n_y = 1.0000000000000000000E+2;
		MemMove(&heap->c_Static, &IPI_PassorFail_static_in_0_Static_2B, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&IPI_PassorFail_static_in_0_Static_2B,0xA0000 | ClusterDataType,1);
/* Unbundle by name */
		{
			cl_A0000* cl_001 = (cl_A0000*)&heap->c_Static;
			PDAStrIncRefCnt(cl_001->el_0, (uInt16)1); /*  */
			heap->s________________Total_Number = cl_001->el_0;
			PDAStrIncRefCnt(cl_001->el_1, (uInt16)1); /*  */
			heap->s________________Pass_Number = cl_001->el_1;
			PDAStrIncRefCnt(cl_001->el_2, (uInt16)1); /*  */
			heap->s________________Fail_Number = cl_001->el_2;
	/* Free Cluster heap->c_Static*/
			{
				cl_A0000* cl_002 = (cl_A0000*)&heap->c_Static;
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
		}
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s________________Fail_Number), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n_______________________________1), doubleDataType );
	if (heap->s________________Fail_Number && (((PDAStrPtr)heap->s________________Fail_Number)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s________________Fail_Number)->refcnt == 0) && (!((PDAStrPtr)heap->s________________Fail_Number)->staticStr)) {
				MemHandleFree( heap->s________________Fail_Number );
				heap->s________________Fail_Number=NULL;
			}
		}
		*A_______B2 = heap->n_______________________________1;
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s________________Pass_Number), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n______________________________1), doubleDataType );
	if (heap->s________________Pass_Number && (((PDAStrPtr)heap->s________________Pass_Number)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s________________Pass_Number)->refcnt == 0) && (!((PDAStrPtr)heap->s________________Pass_Number)->staticStr)) {
				MemHandleFree( heap->s________________Pass_Number );
				heap->s________________Pass_Number=NULL;
			}
		}
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s________________Total_Number), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n______________________________), doubleDataType );
	if (heap->s________________Total_Number && (((PDAStrPtr)heap->s________________Total_Number)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s________________Total_Number)->refcnt == 0) && (!((PDAStrPtr)heap->s________________Total_Number)->staticStr)) {
				MemHandleFree( heap->s________________Total_Number );
				heap->s________________Total_Number=NULL;
			}
		}
		/**/
		/* 除 */
		/**/
		PDAFltBinop( &heap->n_______________________________1, doubleDataType, &heap->n______________________________, doubleDataType, opDiv, &heap->n____x_y_1, doubleDataType);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n____x_y_1, doubleDataType, &heap->n_y, doubleDataType, opMult, &heap->n____x_y, doubleDataType);
		*IPI_PassorFail_static_out_0_Fail_B8 = heap->n____x_y;
		/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n____x_y), doubleDataType, NULL, uCharDataType, &(heap->i______6_), int16DataType, (int8)'f', &(heap->s______________________F_______), StringDataType ))){
			CGenErr();
		}
	{
			ControlDataItemPtr cdPtr = LVGetCurrentControlData();
			CreateArgListStatic(heap->Args2F5_1, 2, 1 );
			argIn(heap->Args2F5_1, 0).nType = StringDataType;
			argIn(heap->Args2F5_1, 0).pValue = (void *)&heap->s______________________F_______;
			argIn(heap->Args2F5_1, 1).nType = StringDataType;
			argIn(heap->Args2F5_1, 1).pValue = (void *)&heap->s_______;
			argOut(heap->Args2F5_1, 0).nType = StringDataType;
			argOut(heap->Args2F5_1, 0).pValue = (void *)&heap->s________________________;
			if (!PDAStrConcat( (ArgList *)((ArgList **)heap->Args2F5_1)[0], (ArgList *)((ArgList **)heap->Args2F5_1)[1] )) {
				CGenErr();
			}
			if (gAppStop) {
				gAppStop=true;
				return eFinished;
			}
		}
		PDAStrFree(*IPI_PassorFail_static_out_2_Fail_2DB);
		*IPI_PassorFail_static_out_2_Fail_2DB = PDAStrCopyOnModify(heap->s________________________);
		/**/
		/* 除 */
		/**/
		PDAFltBinop( &heap->n______________________________1, doubleDataType, &heap->n______________________________, doubleDataType, opDiv, &heap->n____x_y_3, doubleDataType);
		*x_y__C0 = heap->n____x_y_3;
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n____x_y_3, doubleDataType, &heap->n_y_1, doubleDataType, opMult, &heap->n____x_y_2, doubleDataType);
		*IPI_PassorFail_static_out_1_Pass_D5 = heap->n____x_y_2;
		/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n____x_y_2), doubleDataType, NULL, uCharDataType, &(heap->i______6__1), int16DataType, (int8)'f', &(heap->s______________________F________1), StringDataType ))){
			CGenErr();
		}
	{
			ControlDataItemPtr cdPtr = LVGetCurrentControlData();
			CreateArgListStatic(heap->Args26C_1, 2, 1 );
			argIn(heap->Args26C_1, 0).nType = StringDataType;
			argIn(heap->Args26C_1, 0).pValue = (void *)&heap->s______________________F________1;
			argIn(heap->Args26C_1, 1).nType = StringDataType;
			argIn(heap->Args26C_1, 1).pValue = (void *)&heap->s________1;
			argOut(heap->Args26C_1, 0).nType = StringDataType;
			argOut(heap->Args26C_1, 0).pValue = (void *)&heap->s_________________________1;
			if (!PDAStrConcat( (ArgList *)((ArgList **)heap->Args26C_1)[0], (ArgList *)((ArgList **)heap->Args26C_1)[1] )) {
				CGenErr();
			}
			if (gAppStop) {
				gAppStop=true;
				return eFinished;
			}
		}
		PDAStrFree(*IPI_PassorFail_static_out_3_Pass_2AF);
		*IPI_PassorFail_static_out_3_Pass_2AF = PDAStrCopyOnModify(heap->s_________________________1);
		IPI_PassorFail_static_CleanupVIGlobalConstants();
		PDAClusterFree( &IPI_PassorFail_static_in_0_Static_2B, 0xA0000 | ClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_PassorFail_static_VIName = "IPI_PassorFail_static.vi";

eRunStatus IPI_PassorFail_static_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_PassorFail_static_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_PassorFail_static_AddSubVIInstanceData();
	return IPI_PassorFail_static_Run();
}


/****** Library interface **********/


void IPI_PassorFail_static(Char **Pass,
Char **Fail,
float64 *Pass,
float64 *Fail)
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

	IPI_PassorFail_static_AddSubVIInstanceData();
	IPI_PassorFail_static_InitVIConstantList();

	/* Call top level VI main function */
	IPI_PassorFail_static_Run();
	*Pass = PDAStrCStrFromLVStr( IPI_PassorFail_static_out_3_Pass_2AF );
	*Fail = PDAStrCStrFromLVStr( IPI_PassorFail_static_out_2_Fail_2DB );
	*Pass = *IPI_PassorFail_static_out_1_Pass_D5;
	*Fail = *IPI_PassorFail_static_out_0_Fail_B8;

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


