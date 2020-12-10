/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_ROI_Set.vi
 *	Generated from: C:\Users\delluser001\Desktop\Í­µæÆ¬¼ì²â\LX Inspect System\Source Code\SubVIs\CCD\IPI_ROI_Set.vi
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
#include "IPI_ROI_SetLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IPI_ROI_Set_heap { 
	cl_C0000 c_Constant;
	cl_C0000 c___________________1;
	cl_F0000 c_XYCenter;
	cl_E0000 c_ROI_Descriptor__Find_Straight;
	cl_E0000 c__________________;
	int32 l_Y;
	int32 l_X;
	int32 l______2;
	int32 l____x_y_1;
	int32 l____x_y_2;
	int32 l____x_y_3;
	int32 l______1;
	int32 l________________X;
	int32 l_____;
	int32 l____x_y;
	int32 l________________Y;
	VoidHand Args41_1;  
	VoidHand Args1F0_1;  
	VoidHand Args2B_1;  
	PDAArrPtr a____________________;
	PDAArrPtr a__________________________;
	PDAArrPtr a_____________________1;
} _DATA_SECTION __IPI_ROI_Set_heap; /* heap */

static struct _IPI_ROI_Set_heap _DATA_SECTION *heap = &__IPI_ROI_Set_heap; /* heap */

struct _tIPI_ROI_Set_GlobalConstantsHeap {
	uInt8	refCnt;
	cl_E0000	i54;
	cl_C0000	i14B;
} _DATA_SECTION __IPI_ROI_Set_GlobalConstantsHeap;
static struct _tIPI_ROI_Set_GlobalConstantsHeap _DATA_SECTION *IPI_ROI_Set_GlobalConstantsHeapPtr = &__IPI_ROI_Set_GlobalConstantsHeap;

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

_DATA_SECTION static  cl_C0000 g_cluster_1 = 
{0, 0, (PDAArrPtr)(&g_array_1)};

struct _g_array_2 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	cl_C0000	data[1];
};
_DATA_SECTION static  struct _g_array_2 g_array_2 = 
{0xC0000 | ClusterDataType, 1, 1, true, 1, 0
};

struct _g_array_3 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[1];
};
_DATA_SECTION static  struct _g_array_3 g_array_3 = 
{int32DataType, 1, 1, true, 1, 0
};

_DATA_SECTION  cl_E0000 IPI_ROI_Set_out_0_ROI_22C_init_ = 
{(PDAArrPtr)(&g_array_3), (PDAArrPtr)(&g_array_2)};

_DATA_SECTION  cl_F0000 IPI_ROI_Set_in_3_XYCenter_139 = 
{0, 0};

struct _g_array_4 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[4];
};
_DATA_SECTION static  struct _g_array_4 g_array_4 = 
{int32DataType, 1, 1, true, 1, 4,
	{964, 373, 1213, 1558
	}
};

struct _g_array_6 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[5];
};
_DATA_SECTION static  struct _g_array_6 g_array_6 = 
{int32DataType, 1, 1, true, 1, 5,
	{983, 377, 1194, 1554, 1829
	}
};

struct _g_array_5 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	cl_C0000	data[1];
};
_DATA_SECTION static  struct _g_array_5 g_array_5 = 
{0xC0000 | ClusterDataType, 1, 1, true, 1, 1,
	{
{0, 12, (PDAArrPtr)(&g_array_6)}
	}
};

_DATA_SECTION static  cl_E0000 g_cluster_4 = 
{(PDAArrPtr)(&g_array_4), (PDAArrPtr)(&g_array_5)};

struct _g_array_7 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[5];
};
_DATA_SECTION static  struct _g_array_7 g_array_7 = 
{int32DataType, 1, 1, true, 1, 5,
	{983, 377, 1194, 1554, 1829
	}
};

_DATA_SECTION static  cl_C0000 g_cluster_6 = 
{0, 12, (PDAArrPtr)(&g_array_7)};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_ROI_Set_CleanupLSRs(void);
void _TEXT_SECTION IPI_ROI_Set_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_ROI_Set_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_ROI_Set_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_ROI_Set_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_ROI_Set_AddVIGlobalConstants(void) {
	MemSet(IPI_ROI_Set_GlobalConstantsHeapPtr,sizeof(*(IPI_ROI_Set_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION IPI_ROI_Set_CleanupVIGlobalConstants(void);
void _TEXT_SECTION IPI_ROI_Set_CleanupVIGlobalConstants(void) {
	(IPI_ROI_Set_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_ROI_Set_InitVIConstantList(void);
void _TEXT_SECTION IPI_ROI_Set_InitVIConstantList(void) {
	(IPI_ROI_Set_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


cl_E0000 IPI_ROI_Set_out_0_ROI_22C_tmp_;
static cl_E0000* IPI_ROI_Set_out_0_ROI_22C = &IPI_ROI_Set_out_0_ROI_22C_tmp_;
static DataType dtIPI_ROI_Set_out_0_ROI_22C = 0xE0000 | ClusterDataType;
static DataType dtIPI_ROI_Set_in_3_XYCenter_139 = 0xF0000 | ClusterDataType;
int32 IPI_ROI_Set_in_2_X_23F = 0 ;
static DataType dtIPI_ROI_Set_in_2_X_23F = int32DataType;
int32 IPI_ROI_Set_in_1_Y_4BB = 5 ;
static DataType dtIPI_ROI_Set_in_1_Y_4BB = int32DataType;
int32 IPI_ROI_Set_in_0_A______31C = 0 ;
static DataType dtIPI_ROI_Set_in_0_A______31C = int32DataType;
extern eRunStatus IPI_ROI_Set_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*IPI_ROI_Set_out_0_ROI_22C = IPI_ROI_Set_out_0_ROI_22C_init_;
	PDAClusterIncRefCnt(IPI_ROI_Set_out_0_ROI_22C, 0xE0000 | ClusterDataType, 1);
	IPI_ROI_Set_InitVIConstantList();
	{
		if ( !(((cl_E0000*)&(IPI_ROI_Set_GlobalConstantsHeapPtr->i54))->el_0)) {
			{
				MemMove(&(IPI_ROI_Set_GlobalConstantsHeapPtr->i54),&g_cluster_4,GetClusterSize( 0xE0000 | ClusterDataType ));
			}
		}
		PDAClusterIncRefCnt(&(IPI_ROI_Set_GlobalConstantsHeapPtr->i54),0xE0000 | ClusterDataType,1);
		heap->c_ROI_Descriptor__Find_Straight = IPI_ROI_Set_GlobalConstantsHeapPtr->i54;
		if ( !(((cl_C0000*)&(IPI_ROI_Set_GlobalConstantsHeapPtr->i14B))->el_2)) {
			{
				MemMove(&(IPI_ROI_Set_GlobalConstantsHeapPtr->i14B),&g_cluster_6,GetClusterSize( 0xC0000 | ClusterDataType ));
			}
		}
		PDAClusterIncRefCnt(&(IPI_ROI_Set_GlobalConstantsHeapPtr->i14B),0xC0000 | ClusterDataType,1);
		heap->c_Constant = IPI_ROI_Set_GlobalConstantsHeapPtr->i14B;
		heap->l______1 = 0;
		heap->l_____ = 4;
		MemMove(&heap->c_XYCenter, &IPI_ROI_Set_in_3_XYCenter_139, sizeof(cl_F0000));
		PDAClusterIncRefCnt(&IPI_ROI_Set_in_3_XYCenter_139,0xF0000 | ClusterDataType,1);
/* Unbundle by name */
		{
			cl_F0000* cl_001 = (cl_F0000*)&heap->c_XYCenter;
			heap->l________________X = cl_001->el_0;
			heap->l________________Y = cl_001->el_1;
	}
		heap->l_Y = IPI_ROI_Set_in_1_Y_4BB;
		/**/
		/* ¼Ó */
		/**/
		heap->l____x_y =  (heap->l________________Y + heap->l_Y);
		/**/
		/* ¼õ */
		/**/
		heap->l____x_y_2 =  (heap->l________________Y - heap->l_Y);
		heap->l_X = IPI_ROI_Set_in_2_X_23F;
		/**/
		/* ¼Ó */
		/**/
		heap->l____x_y_1 =  (heap->l________________X + heap->l_X);
		/**/
		/* ¼õ */
		/**/
		heap->l____x_y_3 =  (heap->l________________X - heap->l_X);
		heap->l______2 = IPI_ROI_Set_in_0_A______31C;
/* Build array */
		{
			ArrDimSize i;
			ArrDimSize dimSize=0;
			heap->a____________________ = PDAArrNewEmptyWithNDims( int32DataType, (ArrDimSize)1 );
			if (!heap->a____________________){
				CGenErr();
			}
			dimSize += 1;
			dimSize += 1;
			dimSize += 1;
			dimSize += 1;
			dimSize += 1;
			PDAArrSetDim(heap->a____________________, (ArrDimSize)0, dimSize);
			if (!PDAArrAllocData(&heap->a____________________)){
				CGenErr();
			}
			i=0;
			if (!PDAArrSetData(heap->a____________________, i, &heap->l____x_y_3, int32DataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->l____x_y_2, int32DataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->l____x_y_1, int32DataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->l____x_y, int32DataType)) {
				CGenErr();
			}
			i++;
			if (!PDAArrSetData(heap->a____________________, i, &heap->l______2, int32DataType)) {
				CGenErr();
			}
			i++;
		}
		PDAArrIncRefCnt(heap->a____________________, (uInt16)1); /* ABuild */
		/* Array Delete */
		if (!PDAArrDel( heap->a____________________, &heap->l_____, int32DataType, (ArrDimSize)0, &heap->l______1, int32DataType, NULL, (void **)&heap->a__________________________, 0xB0000 | ArrayDataType)){
			CGenErr();
		}
/* Bundle by name */
		{
			cl_C0000* cl_002 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c___________________1, &heap->c_Constant, sizeof( cl_C0000 ) );
			{
				cl_C0000* clSrc_003 = (cl_C0000*)&heap->c_Constant;
				cl_C0000* clDest_004 = (cl_C0000*)&heap->c___________________1;
				clDest_004->el_2 = PDAArrCopyOnModify( clSrc_003->el_2 );
			}
			cl_002 = (cl_C0000*)&heap->c___________________1;
	if ((cl_002->el_2) && ((cl_002->el_2)->refcnt > 0)) {
				if (((cl_002->el_2)->refcnt == 1) && ((cl_002->el_2)->staticArray == false)) {
					(cl_002->el_2)->refcnt--;
					MemHandleFree( cl_002->el_2 );
					cl_002->el_2=NULL;
				}
				else
				 	PDAArrFree(cl_002->el_2);
			}
			cl_002->el_2 = heap->a____________________;
		}
/* Build array */
		{
			ArrDimSize i;
			ArrDimSize dimSize=0;
			heap->a_____________________1 = PDAArrNewEmptyWithNDims( 0xC0000 | ClusterDataType, (ArrDimSize)1 );
			if (!heap->a_____________________1){
				CGenErr();
			}
			dimSize += 1;
			PDAArrSetDim(heap->a_____________________1, (ArrDimSize)0, dimSize);
			if (!PDAArrAllocData(&heap->a_____________________1)){
				CGenErr();
			}
			i=0;
			if (!PDAArrSetData(heap->a_____________________1, i, &heap->c___________________1, 0xC0000 | ClusterDataType)) {
				CGenErr();
			}
			i++;
		}
/* Bundle by name */
		{
			cl_E0000* cl_005 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c__________________, &heap->c_ROI_Descriptor__Find_Straight, sizeof( cl_E0000 ) );
			{
				cl_E0000* clSrc_006 = (cl_E0000*)&heap->c_ROI_Descriptor__Find_Straight;
				cl_E0000* clDest_007 = (cl_E0000*)&heap->c__________________;
				clDest_007->el_0 = PDAArrCopyOnModify( clSrc_006->el_0 );
				clDest_007->el_1 = PDAArrCopyOnModify( clSrc_006->el_1 );
			}
			cl_005 = (cl_E0000*)&heap->c__________________;
	if ((cl_005->el_0) && ((cl_005->el_0)->refcnt > 0)) {
				if (((cl_005->el_0)->refcnt == 1) && ((cl_005->el_0)->staticArray == false)) {
					(cl_005->el_0)->refcnt--;
					MemHandleFree( cl_005->el_0 );
					cl_005->el_0=NULL;
				}
				else
				 	PDAArrFree(cl_005->el_0);
			}
			cl_005->el_0 = heap->a__________________________;
	PDAArrFree(cl_005->el_1);
			cl_005->el_1 = heap->a_____________________1;
		}
		if (IPI_ROI_Set_out_0_ROI_22C) {
			/* Free Cluster IPI_ROI_Set_out_0_ROI_22C*/
			{
				cl_E0000* cl_008 = (cl_E0000*)IPI_ROI_Set_out_0_ROI_22C;
		if ((cl_008->el_0) && ((cl_008->el_0)->refcnt > 0)) {
					if (((cl_008->el_0)->refcnt == 1) && ((cl_008->el_0)->staticArray == false)) {
						(cl_008->el_0)->refcnt--;
						MemHandleFree( cl_008->el_0 );
						cl_008->el_0=NULL;
					}
					else
					 	PDAArrFree(cl_008->el_0);
				}
	PDAArrFree(cl_008->el_1);
			}
			PDAClusterCopyOnModify(&heap->c__________________, 0xE0000 | ClusterDataType, IPI_ROI_Set_out_0_ROI_22C);
		}
		else {
		}
		IPI_ROI_Set_CleanupVIGlobalConstants();
		PDAClusterFree( &IPI_ROI_Set_in_3_XYCenter_139, 0xF0000 | ClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_ROI_Set_VIName = "IPI_ROI_Set.vi";

eRunStatus IPI_ROI_Set_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_ROI_Set_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_ROI_Set_AddSubVIInstanceData();
	return IPI_ROI_Set_Run();
}


/****** Library interface **********/


void IPI_ROI_Set(TD1 *XYCenter,
int32 X,
int32 Y,
int32 Ctrl1)
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

	IPI_ROI_Set_AddSubVIInstanceData();
	IPI_ROI_Set_InitVIConstantList();

	IPI_ROI_Set_in_3_XYCenter_139 = *(cl_F0000*)XYCenter;
	IPI_ROI_Set_in_2_X_23F = X;
	IPI_ROI_Set_in_1_Y_4BB = Y;
	IPI_ROI_Set_in_0_A______31C = Ctrl1;
	/* Call top level VI main function */
	IPI_ROI_Set_Run();

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


