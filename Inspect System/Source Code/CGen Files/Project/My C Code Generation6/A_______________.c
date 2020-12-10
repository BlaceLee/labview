/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: 圆环到矩形转换.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\圆环到矩形转换.vi
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
#include "LVCGenIncludes.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _A________________heap { 
	cl_110000 c__________________;
	cl_110000 c_Bounding_Rectangle_out_2;
	float64 n____x_y_1;
	float64 n_CenerX;
	float64 n____x_y_2;
	float64 n____x_y_3;
	float64 n_CenerY;
	float64 n_Radius;
	float64 n____x_y;
	VoidHand Args301_1;  
} _DATA_SECTION __A________________heap; /* heap */

static struct _A________________heap _DATA_SECTION *heap = &__A________________heap; /* heap */

struct _tA________________GlobalConstantsHeap {
	uInt8	refCnt;
	cl_110000	i2FA;
} _DATA_SECTION __A________________GlobalConstantsHeap;
static struct _tA________________GlobalConstantsHeap _DATA_SECTION *A________________GlobalConstantsHeapPtr = &__A________________GlobalConstantsHeap;

_DATA_SECTION  cl_110000 A________________out_0_Bounding_Rectangle_out_72_init_ = 
{0, 0, 0, 0};

_DATA_SECTION static  cl_110000 g_cluster_2 = 
{0, 0, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION A________________CleanupLSRs(void);
void _TEXT_SECTION A________________CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION A________________AddVIGlobalConstants(void);
void _TEXT_SECTION A________________AddVIGlobalConstants(void) {
	MemSet(A________________GlobalConstantsHeapPtr,sizeof(*(A________________GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION A________________CleanupVIGlobalConstants(void);
void _TEXT_SECTION A________________CleanupVIGlobalConstants(void) {
	(A________________GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION A________________InitVIConstantList(void);
void _TEXT_SECTION A________________InitVIConstantList(void) {
	(A________________GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


cl_110000 A________________out_0_Bounding_Rectangle_out_72_tmp_;
static cl_110000* A________________out_0_Bounding_Rectangle_out_72 = &A________________out_0_Bounding_Rectangle_out_72_tmp_;
static DataType dtA________________out_0_Bounding_Rectangle_out_72 = 0x110000 | ClusterDataType;
float64 A________________in_2_CenerX_4BB_init_ = 0.0000000000000000000E+0 ;
static DataType dtA________________in_2_CenerX_4BB = doubleDataType;
float64 A________________in_1_CenerY_550_init_ = 0.0000000000000000000E+0 ;
static DataType dtA________________in_1_CenerY_550 = doubleDataType;
float64 A________________in_0_Radius_57C_init_ = 0.0000000000000000000E+0 ;
static DataType dtA________________in_0_Radius_57C = doubleDataType;
extern eRunStatus A________________Run(
				DataType dtA________________in_0_Radius_57C, float64* A________________in_0_Radius_57C,
				DataType dtA________________in_1_CenerY_550, float64* A________________in_1_CenerY_550,
				DataType dtA________________in_2_CenerX_4BB, float64* A________________in_2_CenerX_4BB,
				DataType dtA________________out_0_Bounding_Rectangle_out_72, cl_110000*  A________________out_0_Bounding_Rectangle_out_72	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*A________________out_0_Bounding_Rectangle_out_72 = A________________out_0_Bounding_Rectangle_out_72_init_;
	PDAClusterIncRefCnt(A________________out_0_Bounding_Rectangle_out_72, 0x110000 | ClusterDataType, 1);
	A________________InitVIConstantList();
	{
		{
			MemMove(&(A________________GlobalConstantsHeapPtr->i2FA),&g_cluster_2,GetClusterSize( 0x110000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_2,0x110000 | ClusterDataType,1);
		}
		heap->c_Bounding_Rectangle_out_2 = A________________GlobalConstantsHeapPtr->i2FA;
		heap->n_Radius = *A________________in_0_Radius_57C;
		heap->n_CenerY = *A________________in_1_CenerY_550;
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n_CenerY, doubleDataType, &heap->n_Radius, doubleDataType, opPlus, &heap->n____x_y, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n_CenerY, doubleDataType, &heap->n_Radius, doubleDataType, opMinus, &heap->n____x_y_2, doubleDataType);
		heap->n_CenerX = *A________________in_2_CenerX_4BB;
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n_CenerX, doubleDataType, &heap->n_Radius, doubleDataType, opPlus, &heap->n____x_y_1, doubleDataType);
		/**/
		/* 减 */
		/**/
		PDAFltBinop( &heap->n_CenerX, doubleDataType, &heap->n_Radius, doubleDataType, opMinus, &heap->n____x_y_3, doubleDataType);
/* Bundle by name */
		{
			cl_110000* cl_001 = NULL;
			/* Cluster CopyOnModify */
			MemMove( &heap->c__________________, &heap->c_Bounding_Rectangle_out_2, sizeof( cl_110000 ) );
			cl_001 = (cl_110000*)&heap->c__________________;
	cl_001->el_0 = heap->n____x_y_3;
	cl_001->el_1 = heap->n____x_y_2;
	cl_001->el_2 = heap->n____x_y_1;
	cl_001->el_3 = heap->n____x_y;
		}
		if (A________________out_0_Bounding_Rectangle_out_72) {
			PDAClusterCopyOnModify(&heap->c__________________, 0x110000 | ClusterDataType, A________________out_0_Bounding_Rectangle_out_72);
		}
		else {
		}
		A________________CleanupVIGlobalConstants();
		return eFinished;
	}
}


/****** End of generated code **********/


