/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_StringChangeOption.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\IPI_StringChangeOption.vi
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
#include "IPI_StringChangeOptionLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IPI_StringChangeOption_heap { 
	cl_C0000 c_Edge_Options_2;
	cl_C0000 c___________________1;
	float64 n______________________________;
	int32 l______________________________;
	int32 l_______________________________1;
	int32 l______________________________1;
	int32 l______4;
	int32 l____________________________1;
	int32 l_For_____i;
	int32 l_____________________________10;
	int32 l_____________________________9;
	int32 l_____________________________8;
	int32 l_____________________________1;
	int32 l_____________________________7;
	int32 l_____________________________6;
	int32 l_____________________________5;
	int32 l______________________;
	int32 l_____________________________4;
	int32 l_____;
	int32 l______1;
	int32 l______2;
	int32 l______3;
	int32 l_For_____N;
	int32 l_____________________________2;
	int32 l_____________________________3;
	int32 l________________;
	cl_D0000* c__________________;
	cl_D0000* c_Options__Find_Straight_Edge_2;
	VoidHand s_______________6;
	VoidHand s_______________7;
	VoidHand s_______________8;
	VoidHand s_Input_String;
	VoidHand s___________;
	VoidHand s_______________________1;
	VoidHand s_Input_String_SR;
	VoidHand Args3EE_1;  
	VoidHand s_______________4;
	VoidHand s_______________5;
	VoidHand s_______________2;
	VoidHand s_______________9;
	VoidHand s_______________10;
	VoidHand s_______________11;
	VoidHand s_______________12;
	VoidHand s_______________13;
	VoidHand s_______________14;
	VoidHand s_______________1;
	VoidHand s_______________15;
	VoidHand s______________;
	VoidHand s______________________;
	VoidHand s_______________3;
	VoidHand s_______________________SR;
	VoidHand Args1B7_1;  
	PDAArrPtr a_____________________________3;
	PDAArrPtr a____________________________;
	PDAArrPtr a_____________________________2;
	PDAArrPtr a_____________________________1;
	PDAArrPtr a_______________________LT;
	Boolean b_______________3;
	Boolean b_______________2;
	Boolean b_______________1;
	Boolean b______________;
	Boolean b_For_____End;
	Boolean b_____0___x___0_;
} _DATA_SECTION __IPI_StringChangeOption_heap; /* heap */

static struct _IPI_StringChangeOption_heap _DATA_SECTION *heap = &__IPI_StringChangeOption_heap; /* heap */

struct _tIPI_StringChangeOption_GlobalConstantsHeap {
	uInt8	refCnt;
	VoidHand	i179;
	cl_D0000*	i1DF;
	cl_C0000	i38E;
} _DATA_SECTION __IPI_StringChangeOption_GlobalConstantsHeap;
static struct _tIPI_StringChangeOption_GlobalConstantsHeap _DATA_SECTION *IPI_StringChangeOption_GlobalConstantsHeapPtr = &__IPI_StringChangeOption_GlobalConstantsHeap;

struct _g_array_1 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	VoidHand	data[1];
};
_DATA_SECTION static  struct _g_array_1 g_array_1 = 
{StringDataType, 1, 1, true, 1, 0
};

_DATA_SECTION static  cl_C0000 g_cluster_1 = 
{0, 0, 0, 0.0000000000000000000E+0, 0, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_D0000 IPI_StringChangeOption_out_0_A________5C_init_ = 
{1, 1, 0, 
{0, 0, 0, 0.0000000000000000000E+0, 0, 0}, 0, 0, 0, 0, 0, 0, 0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_D0000 g_cluster_4 = 
{1, 1, 2, 
{1, 3, 1, 2.1000000000000000000E+1, 4, 0}, 1, 0, 0, 1, 65280, 255, 16776960, 16711680, (PDAStrPtr)(&g_string_2)};

_DATA_SECTION static  cl_C0000 g_cluster_6 = 
{0, 3, 3, 1.0000000000000000000E+1, 4, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_StringChangeOption_CleanupLSRs(void);
void _TEXT_SECTION IPI_StringChangeOption_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_StringChangeOption_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_StringChangeOption_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_StringChangeOption_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_StringChangeOption_AddVIGlobalConstants(void) {
	MemSet(IPI_StringChangeOption_GlobalConstantsHeapPtr,sizeof(*(IPI_StringChangeOption_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION IPI_StringChangeOption_CleanupVIGlobalConstants(void);
void _TEXT_SECTION IPI_StringChangeOption_CleanupVIGlobalConstants(void) {
	(IPI_StringChangeOption_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_StringChangeOption_InitVIConstantList(void);
void _TEXT_SECTION IPI_StringChangeOption_InitVIConstantList(void) {
	(IPI_StringChangeOption_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


static PDAArrPtr A_______2B_tmp_ = (PDAArrPtr)&g_array_1;
static PDAArrPtr *A_______2B = &A_______2B_tmp_;
static DataType dtA_______2B = 0x30000 | ArrayDataType;
cl_D0000* IPI_StringChangeOption_out_0_A________5C_tmp_ = &IPI_StringChangeOption_out_0_A________5C_init_;
static cl_D0000** IPI_StringChangeOption_out_0_A________5C = &IPI_StringChangeOption_out_0_A________5C_tmp_;
static DataType dtIPI_StringChangeOption_out_0_A________5C = 0xD0000 | BigClusterDataType;
VoidHand IPI_StringChangeOption_in_0_Input_String_13E = NULL;
static DataType dtIPI_StringChangeOption_in_0_Input_String_13E = StringDataType;
extern eRunStatus IPI_StringChangeOption_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	A_______2B_tmp_ = (PDAArrPtr)&g_array_1;
	A_______2B = (&A_______2B_tmp_);
	*IPI_StringChangeOption_out_0_A________5C = IPI_StringChangeOption_out_0_A________5C_tmp_;
	PDAClusterIncRefCnt(IPI_StringChangeOption_out_0_A________5C, 0xD0000 | BigClusterDataType, 1);
	if (!IPI_StringChangeOption_in_0_Input_String_13E) {
		IPI_StringChangeOption_in_0_Input_String_13E = PDAStrNewFromStr(_LVT(""));
	}
	IPI_StringChangeOption_InitVIConstantList();
	{
		if ( !IPI_StringChangeOption_GlobalConstantsHeapPtr->i1DF ) {
			{
				IPI_StringChangeOption_GlobalConstantsHeapPtr->i1DF = (cl_D0000*)&g_cluster_4;
			}
		}
		PDAClusterIncRefCnt(&IPI_StringChangeOption_GlobalConstantsHeapPtr->i1DF,0xD0000 | BigClusterDataType,1);
		heap->c_Options__Find_Straight_Edge_2 = IPI_StringChangeOption_GlobalConstantsHeapPtr->i1DF;
		/* Cluster Inc Ref Count:  BDConst - alloc type*/
		if(heap->c_Options__Find_Straight_Edge_2) heap->c_Options__Find_Straight_Edge_2->refcnt += 1;
		heap->l______4 = 0;
		{
			MemMove(&(IPI_StringChangeOption_GlobalConstantsHeapPtr->i38E),&g_cluster_6,GetClusterSize( 0xC0000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_6,0xC0000 | ClusterDataType,1);
		}
		heap->c_Edge_Options_2 = IPI_StringChangeOption_GlobalConstantsHeapPtr->i38E;
		heap->l______3 = 0;
		heap->l______2 = 0;
		heap->l______1 = 0;
		heap->l_____ = 0;
		heap->s_Input_String =IPI_StringChangeOption_in_0_Input_String_13E;
		PDAStrIncRefCnt(IPI_StringChangeOption_in_0_Input_String_13E,1);
		PDAStrIncRefCnt(heap->s_Input_String, (uInt16)1); /* FPTerm */
		/**/
		/* 字符串长度 */
		/**/
		heap->l________________ = (int32)PDAStrLen(heap->s_Input_String);
		heap->b_____0___x___0_ = false;
		heap->l_For_____N = heap->l________________;
		if (!(heap->a_______________________LT = PDAArrCreateLpTunArr( (ArrDimSize)heap->l_For_____N, StringDataType, uCharDataType, (ArrDimSize)0 ))){
			CGenErr();
		}
		heap->s_______________________SR = (VoidHand)heap->s_Input_String;
		for (heap->l_For_____i = 0;(heap->l_For_____i < heap->l________________) && !heap->b_____0___x___0_ && !gAppStop && !gLastError; (heap->l_For_____i)++) {
			{
				heap->s_Input_String_SR = heap->s_______________________SR;
				IPI_StringChangeOption_GlobalConstantsHeapPtr->i179 = PDAStrNewFromBuf(_LVT("[;]"),(uInt32)3);
				heap->s___________ = IPI_StringChangeOption_GlobalConstantsHeapPtr->i179;
				/**/
				/* 匹配模式 */
				/**/
				{
					PDAStrLen_t ofstpst;
					if (!PDAStrMatchPattern(heap->s___________, heap->s_Input_String_SR, NULL, uCharDataType, &(heap->s______________________), (VoidHand *)NULL, &(heap->s_______________________1), &ofstpst)) {
						CGenErr();
					}
					heap->l______________________ = ofstpst;
				}
				/**/
				/* 小于0？ */
				/**/
				heap->b_____0___x___0_ = (Boolean)(heap->l______________________ < 0);
				heap->b_____0___x___0_ = heap->b_____0___x___0_;
				heap->s_______________________SR = heap->s_______________________1;
				if (!PDAArrAddElToLpTunArr( (VoidHand)(&heap->a_______________________LT), (VoidHand)(&heap->s______________________) )){
					CGenErr();
				}
			}
		} /* end for */
		/* Free Unwired RSRs. */
	if (heap->s_______________________SR && (((PDAStrPtr)heap->s_______________________SR)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________________SR)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________________SR)->staticStr)) {
				MemHandleFree( heap->s_______________________SR );
				heap->s_______________________SR=NULL;
			}
		}
		heap->a_______________________LT = PDAArrCreate1DArrFromLpTunArr( heap->a_______________________LT );
		PDAArrIncRefCnt(heap->a_______________________LT, (uInt16)1); /* GenLpArrayFinales.1 */
		PDAArrFree(*A_______2B);
		if (heap->a_______________________LT && (heap->a_______________________LT->datatype == (StringDataType))) {
			*A_______2B = PDAArrCopyOnModify(heap->a_______________________LT);
		} else 
		{
			*A_______2B = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtA_______2B), ArrayDataTypeNDims(dtA_______2B));
			if (!PDAArrSet(heap->a_______________________LT,A_______2B)) {
				CGenErr();
			}
			PDAArrFree(heap->a_______________________LT);
		}
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = (int32)heap->l______4;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________15 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________15, (uInt16)1);
			}
			else {
				heap->s_______________15 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________14 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________14, (uInt16)1);
			}
			else {
				heap->s_______________14 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________13 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________13, (uInt16)1);
			}
			else {
				heap->s_______________13 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________12 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________12, (uInt16)1);
			}
			else {
				heap->s_______________12 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________11 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________11, (uInt16)1);
			}
			else {
				heap->s_______________11 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________10 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________10, (uInt16)1);
			}
			else {
				heap->s_______________10 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________9 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________9, (uInt16)1);
			}
			else {
				heap->s_______________9 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________8 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________8, (uInt16)1);
			}
			else {
				heap->s_______________8 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________7 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________7, (uInt16)1);
			}
			else {
				heap->s_______________7 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________6 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________6, (uInt16)1);
			}
			else {
				heap->s_______________6 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________5 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________5, (uInt16)1);
			}
			else {
				heap->s_______________5 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________4 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________4, (uInt16)1);
			}
			else {
				heap->s_______________4 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________3 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________3, (uInt16)1);
			}
			else {
				heap->s_______________3 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________2 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________2, (uInt16)1);
			}
			else {
				heap->s_______________2 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s_______________1 = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s_______________1, (uInt16)1);
			}
			else {
				heap->s_______________1 = NULL;
			}
			nIndex += 1;
			if ((nIndex >= 0) && heap->a_______________________LT && (nIndex < NthDim(heap->a_______________________LT, (ArrDimSize)0))) {
				heap->s______________ = *(VoidHand *)NthElem(heap->a_______________________LT, nIndex);
				PDAStrIncRefCnt(heap->s______________, (uInt16)1);
			}
			else {
				heap->s______________ = NULL;
			}
		}
	PDAArrFree(heap->a_______________________LT);
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________1), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l______________________________), int32DataType );
	if (heap->s_______________1 && (((PDAStrPtr)heap->s_______________1)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________1)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________1)->staticStr)) {
				MemHandleFree( heap->s_______________1 );
				heap->s_______________1=NULL;
			}
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________2), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_______________________________1), int32DataType );
	if (heap->s_______________2 && (((PDAStrPtr)heap->s_______________2)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________2)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________2)->staticStr)) {
				MemHandleFree( heap->s_______________2 );
				heap->s_______________2=NULL;
			}
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________3), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l______________________________1), int32DataType );
	if (heap->s_______________3 && (((PDAStrPtr)heap->s_______________3)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________3)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________3)->staticStr)) {
				MemHandleFree( heap->s_______________3 );
				heap->s_______________3=NULL;
			}
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________4), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________1), int32DataType );
	if (heap->s_______________4 && (((PDAStrPtr)heap->s_______________4)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________4)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________4)->staticStr)) {
				MemHandleFree( heap->s_______________4 );
				heap->s_______________4=NULL;
			}
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________5), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________2), int32DataType );
	if (heap->s_______________5 && (((PDAStrPtr)heap->s_______________5)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________5)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________5)->staticStr)) {
				MemHandleFree( heap->s_______________5 );
				heap->s_______________5=NULL;
			}
		}
		/**/
		/* 数值至布尔数组转换 */
		/**/
		if (!PDAArrNumToBoolArr(&(heap->l_____________________________2), int32DataType, &(heap->a____________________________))){
			CGenErr();
		}
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = (int32)heap->l_____;
			if ((nIndex >= 0) && heap->a____________________________ && (nIndex < NthDim(heap->a____________________________, (ArrDimSize)0))) {
				heap->b______________ = *(Boolean *)NthElemFast(heap->a____________________________, nIndex, 1);
			}
			else {
				heap->b______________ = false;
			}
		}
	if ((heap->a____________________________) && ((heap->a____________________________)->refcnt > 0)) {
			if (((heap->a____________________________)->refcnt == 1) && ((heap->a____________________________)->staticArray == false)) {
				(heap->a____________________________)->refcnt--;
				MemHandleFree( heap->a____________________________ );
				heap->a____________________________=NULL;
			}
			else
			 	PDAArrFree(heap->a____________________________);
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________6), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________3), int32DataType );
	if (heap->s_______________6 && (((PDAStrPtr)heap->s_______________6)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________6)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________6)->staticStr)) {
				MemHandleFree( heap->s_______________6 );
				heap->s_______________6=NULL;
			}
		}
		/**/
		/* 数值至布尔数组转换 */
		/**/
		if (!PDAArrNumToBoolArr(&(heap->l_____________________________3), int32DataType, &(heap->a_____________________________1))){
			CGenErr();
		}
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = (int32)heap->l______1;
			if ((nIndex >= 0) && heap->a_____________________________1 && (nIndex < NthDim(heap->a_____________________________1, (ArrDimSize)0))) {
				heap->b_______________1 = *(Boolean *)NthElemFast(heap->a_____________________________1, nIndex, 1);
			}
			else {
				heap->b_______________1 = false;
			}
		}
	if ((heap->a_____________________________1) && ((heap->a_____________________________1)->refcnt > 0)) {
			if (((heap->a_____________________________1)->refcnt == 1) && ((heap->a_____________________________1)->staticArray == false)) {
				(heap->a_____________________________1)->refcnt--;
				MemHandleFree( heap->a_____________________________1 );
				heap->a_____________________________1=NULL;
			}
			else
			 	PDAArrFree(heap->a_____________________________1);
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________7), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________4), int32DataType );
	if (heap->s_______________7 && (((PDAStrPtr)heap->s_______________7)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________7)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________7)->staticStr)) {
				MemHandleFree( heap->s_______________7 );
				heap->s_______________7=NULL;
			}
		}
		/**/
		/* 数值至布尔数组转换 */
		/**/
		if (!PDAArrNumToBoolArr(&(heap->l_____________________________4), int32DataType, &(heap->a_____________________________2))){
			CGenErr();
		}
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = (int32)heap->l______2;
			if ((nIndex >= 0) && heap->a_____________________________2 && (nIndex < NthDim(heap->a_____________________________2, (ArrDimSize)0))) {
				heap->b_______________2 = *(Boolean *)NthElemFast(heap->a_____________________________2, nIndex, 1);
			}
			else {
				heap->b_______________2 = false;
			}
		}
	if ((heap->a_____________________________2) && ((heap->a_____________________________2)->refcnt > 0)) {
			if (((heap->a_____________________________2)->refcnt == 1) && ((heap->a_____________________________2)->staticArray == false)) {
				(heap->a_____________________________2)->refcnt--;
				MemHandleFree( heap->a_____________________________2 );
				heap->a_____________________________2=NULL;
			}
			else
			 	PDAArrFree(heap->a_____________________________2);
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________8), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________5), int32DataType );
	if (heap->s_______________8 && (((PDAStrPtr)heap->s_______________8)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________8)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________8)->staticStr)) {
				MemHandleFree( heap->s_______________8 );
				heap->s_______________8=NULL;
			}
		}
		/**/
		/* 数值至布尔数组转换 */
		/**/
		if (!PDAArrNumToBoolArr(&(heap->l_____________________________5), int32DataType, &(heap->a_____________________________3))){
			CGenErr();
		}
		{ /* Array Index 1D */
			int32 nIndex = 0;
			nIndex = (int32)heap->l______3;
			if ((nIndex >= 0) && heap->a_____________________________3 && (nIndex < NthDim(heap->a_____________________________3, (ArrDimSize)0))) {
				heap->b_______________3 = *(Boolean *)NthElemFast(heap->a_____________________________3, nIndex, 1);
			}
			else {
				heap->b_______________3 = false;
			}
		}
	if ((heap->a_____________________________3) && ((heap->a_____________________________3)->refcnt > 0)) {
			if (((heap->a_____________________________3)->refcnt == 1) && ((heap->a_____________________________3)->staticArray == false)) {
				(heap->a_____________________________3)->refcnt--;
				MemHandleFree( heap->a_____________________________3 );
				heap->a_____________________________3=NULL;
			}
			else
			 	PDAArrFree(heap->a_____________________________3);
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________9), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________6), int32DataType );
	if (heap->s_______________9 && (((PDAStrPtr)heap->s_______________9)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________9)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________9)->staticStr)) {
				MemHandleFree( heap->s_______________9 );
				heap->s_______________9=NULL;
			}
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________10), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________7), int32DataType );
	if (heap->s_______________10 && (((PDAStrPtr)heap->s_______________10)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________10)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________10)->staticStr)) {
				MemHandleFree( heap->s_______________10 );
				heap->s_______________10=NULL;
			}
		}
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________11), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n______________________________), doubleDataType );
	if (heap->s_______________11 && (((PDAStrPtr)heap->s_______________11)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________11)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________11)->staticStr)) {
				MemHandleFree( heap->s_______________11 );
				heap->s_______________11=NULL;
			}
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________12), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________8), int32DataType );
	if (heap->s_______________12 && (((PDAStrPtr)heap->s_______________12)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________12)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________12)->staticStr)) {
				MemHandleFree( heap->s_______________12 );
				heap->s_______________12=NULL;
			}
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________13), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________9), int32DataType );
	if (heap->s_______________13 && (((PDAStrPtr)heap->s_______________13)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________13)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________13)->staticStr)) {
				MemHandleFree( heap->s_______________13 );
				heap->s_______________13=NULL;
			}
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________14), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l_____________________________10), int32DataType );
	if (heap->s_______________14 && (((PDAStrPtr)heap->s_______________14)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________14)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________14)->staticStr)) {
				MemHandleFree( heap->s_______________14 );
				heap->s_______________14=NULL;
			}
		}
/* Bundle by name */
		{
			cl_C0000* cl_002 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c___________________1, &heap->c_Edge_Options_2, sizeof( cl_C0000 ) );
			cl_002 = (cl_C0000*)&heap->c___________________1;
	cl_002->el_0 = heap->l_____________________________10;
	cl_002->el_1 = heap->l_____________________________9;
	cl_002->el_2 = heap->l_____________________________8;
	cl_002->el_3 = heap->n______________________________;
	cl_002->el_4 = heap->l_____________________________7;
	cl_002->el_5 = heap->l_____________________________6;
		}
		/**/
		/* 十进制数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_______________15), StringDataType, 'd', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->l____________________________1), int32DataType );
	if (heap->s_______________15 && (((PDAStrPtr)heap->s_______________15)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_______________15)->refcnt == 0) && (!((PDAStrPtr)heap->s_______________15)->staticStr)) {
				MemHandleFree( heap->s_______________15 );
				heap->s_______________15=NULL;
			}
		}
/* Bundle by name */
		{
			cl_D0000* cl_003 = NULL;
			/* Cluster CopyOnModify */
			PDAClusterCopyOnModify( &heap->c_Options__Find_Straight_Edge_2, 0xD0000 | BigClusterDataType, &heap->c__________________ );
			cl_003 = (cl_D0000*)heap->c__________________;
	cl_003->el_0 = heap->l____________________________1;
	cl_003->el_1 = heap->c___________________1;
	cl_003->el_2 = heap->b_______________3;
	cl_003->el_3 = heap->b_______________2;
	cl_003->el_4 = heap->b_______________1;
	cl_003->el_5 = heap->b______________;
	cl_003->el_6 = heap->l_____________________________1;
	cl_003->el_7 = heap->l______________________________1;
	cl_003->el_8 = heap->l_______________________________1;
	cl_003->el_9 = heap->l______________________________;
	if (cl_003->el_10 && (((PDAStrPtr)cl_003->el_10)->refcnt > 0)) {
				if ((--((PDAStrPtr)cl_003->el_10)->refcnt == 0) && (!((PDAStrPtr)cl_003->el_10)->staticStr)) {
					MemHandleFree( cl_003->el_10 );
					cl_003->el_10=NULL;
				}
			}
			cl_003->el_10 = heap->s______________;
		}
		if (IPI_StringChangeOption_out_0_A________5C) {
			/* Free Cluster IPI_StringChangeOption_out_0_A________5C*/
			PDAClusterFree( IPI_StringChangeOption_out_0_A________5C, 0xD0000 | BigClusterDataType );
			PDAClusterCopyOnModify(&heap->c__________________, 0xD0000 | BigClusterDataType, IPI_StringChangeOption_out_0_A________5C);
		}
		else {
		}
		IPI_StringChangeOption_CleanupVIGlobalConstants();
		if (*A_______2B && ((*A_______2B)->refcnt == 1) && ((*A_______2B)->staticArray == false)) {
	PDAArrFree(*A_______2B);
			*A_______2B = NULL;
		}
		else
		{
	PDAArrFree(*A_______2B);
		}
		if (IPI_StringChangeOption_in_0_Input_String_13E && (((PDAStrPtr)IPI_StringChangeOption_in_0_Input_String_13E)->refcnt == 1) && (((PDAStrPtr)IPI_StringChangeOption_in_0_Input_String_13E)->staticStr == false)) {
	if (IPI_StringChangeOption_in_0_Input_String_13E && (((PDAStrPtr)IPI_StringChangeOption_in_0_Input_String_13E)->refcnt > 0)) {
				if ((--((PDAStrPtr)IPI_StringChangeOption_in_0_Input_String_13E)->refcnt == 0) && (!((PDAStrPtr)IPI_StringChangeOption_in_0_Input_String_13E)->staticStr)) {
					MemHandleFree( IPI_StringChangeOption_in_0_Input_String_13E );
					IPI_StringChangeOption_in_0_Input_String_13E=NULL;
				}
			}
			IPI_StringChangeOption_in_0_Input_String_13E = NULL;
		}
		else
		{
	if (IPI_StringChangeOption_in_0_Input_String_13E && (((PDAStrPtr)IPI_StringChangeOption_in_0_Input_String_13E)->refcnt > 0)) {
				if ((--((PDAStrPtr)IPI_StringChangeOption_in_0_Input_String_13E)->refcnt == 0) && (!((PDAStrPtr)IPI_StringChangeOption_in_0_Input_String_13E)->staticStr)) {
					MemHandleFree( IPI_StringChangeOption_in_0_Input_String_13E );
					IPI_StringChangeOption_in_0_Input_String_13E=NULL;
				}
			}
		}
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_StringChangeOption_VIName = "IPI_StringChangeOption.vi";

eRunStatus IPI_StringChangeOption_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_StringChangeOption_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_StringChangeOption_AddSubVIInstanceData();
	return IPI_StringChangeOption_Run();
}


/****** Library interface **********/


void IPI_StringChangeOption(Char InputString[])
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

	IPI_StringChangeOption_AddSubVIInstanceData();
	IPI_StringChangeOption_InitVIConstantList();

	IPI_StringChangeOption_in_0_Input_String_13E = PDAStrNewFromBuf( InputString, StrLen(InputString) );
	/* Call top level VI main function */
	IPI_StringChangeOption_Run();

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


