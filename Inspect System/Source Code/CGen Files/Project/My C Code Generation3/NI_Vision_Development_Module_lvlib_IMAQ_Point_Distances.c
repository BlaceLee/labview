/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: NI_Vision_Development_Module.lvlib:IMAQ Point Distances
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\vision\Analytic.llb\IMAQ Point Distances
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
struct _NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_heap { 
	cl_00000 c_nivision___LV_PointDistances_;
	cl_00000 c_error_in__no_error_;
	PDAArrPtr a_nivision___LV_PointDistances_;
	PDAArrPtr a_Points;
	PDAArrPtr a_Distances;
} _DATA_SECTION __NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_heap; /* heap */

static struct _NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_heap _DATA_SECTION *heap = &__NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_heap; /* heap */

struct _tNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeap {
	uInt8	refCnt;
	PDAArrPtr	iBC;
} _DATA_SECTION __NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeap;
static struct _tNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeap _DATA_SECTION *NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeapPtr = &__NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeap;

_DATA_SECTION static  cl_A0000 g_cluster_1 = 
{0.0000000000000000000E+0, 0.0000000000000000000E+0};

struct _NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	cl_A0000	data[1];
};
_DATA_SECTION   struct _NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19_init_ NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19_init_ = 
{0xA0000 | ClusterDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19_init_ = (PDAArrPtr)(&(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19_init_));

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};

struct _NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float32	data[1];
};
_DATA_SECTION   struct _NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_ NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_ = 
{floatDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_ = (PDAArrPtr)(&(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_));

struct _g_array_3 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	float32	data[1];
};
_DATA_SECTION static  struct _g_array_3 g_array_3 = 
{floatDataType, 1, 1, true, 1, 0
};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_CleanupLSRs(void);
void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_AddVIGlobalConstants(void);
void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_AddVIGlobalConstants(void) {
	MemSet(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeapPtr,sizeof(*(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_CleanupVIGlobalConstants(void);
void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_CleanupVIGlobalConstants(void) {
	(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_InitVIConstantList(void);
void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_InitVIConstantList(void) {
	(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1;
static DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1 = 0x0 | ClusterDataType;
cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A_tmp_;
static cl_00000* NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A = &NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A_tmp_;
static DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A = 0x0 | ClusterDataType;
extern eRunStatus NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_Run(
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19, PDAArrPtr  NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1, cl_00000  NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5, PDAArrPtr*  NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A, cl_00000*  NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A = NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A_init_;
	PDAClusterIncRefCnt(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A, 0x0 | ClusterDataType, 1);
	*NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5 = (PDAArrPtr)(&NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5_init_);
	PDAArrIncRefCnt(*NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5,1);
	NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_InitVIConstantList();
	{
		PDAArrIncRefCnt((PDAArrPtr)(&g_array_3),1);
		NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeapPtr->iBC = (void*)&g_array_3;
		heap->a_Distances = NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_GlobalConstantsHeapPtr->iBC;
		if (dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19 == (0xC0000 | ArrayDataType)) {
			MemMove(&heap->a_Points, &NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19, DataSize((0xC0000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19,1);
		}
		else {
			heap->a_Points = PDAArrNewEmptyWithNDims( 0xA0000 | ClusterDataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19, &heap->a_Points)) {
				CGenErr();
			}
		}
		MemMove(&heap->c_error_in__no_error_, &NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1, sizeof(cl_00000));
		PDAClusterIncRefCnt(&NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1,0x0 | ClusterDataType,1);
/* Call Library Node */
		{
			void 	LV_PointDistances(
			void* ,
			void* ,
			void* );
			void* arg1;
			void* arg2;
			void* arg3;
			arg1 = GetArrayHandle(heap->a_Points, 0xA0000 | ClusterDataType, 1);
			if (!arg1) {
				CGenErr();
			}
			arg2 = GetArrayHandle(heap->a_Distances, floatDataType, 1);
			if (!arg2) {
				CGenErr();
			}
			arg3 = GetClusterPtr( &heap->c_error_in__no_error_, 0x0 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			LV_PointDistances(
			arg1,
			arg2,
			arg3
			);
			heap->a_nivision___LV_PointDistances_ = PDAArrCreateFromHandle( arg2, floatDataType, (int32)1 );
			PDAClusterCreateFromPtr( arg3, 0x0 | ClusterDataType, &heap->c_nivision___LV_PointDistances_ );
			PDAArrFreeDataHandle(arg1, heap->a_Points);
	PDAArrFree(heap->a_Points);
			PDAArrFreeDataHandle(arg2, heap->a_Distances);
	if ((heap->a_Distances) && ((heap->a_Distances)->refcnt > 0)) {
				if (((heap->a_Distances)->refcnt == 1) && ((heap->a_Distances)->staticArray == false)) {
					(heap->a_Distances)->refcnt--;
					MemHandleFree( heap->a_Distances );
					heap->a_Distances=NULL;
				}
				else
				 	PDAArrFree(heap->a_Distances);
			}
			PDAClusterFreeDataPtr(arg3, 0x0 | ClusterDataType);
	/* Free Cluster heap->c_error_in__no_error_*/
			{
				cl_00000* cl_001 = (cl_00000*)&heap->c_error_in__no_error_;
				if (cl_001->el_2 && (((PDAStrPtr)cl_001->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_001->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_001->el_2)->staticStr)) {
						MemHandleFree( cl_001->el_2 );
						cl_001->el_2=NULL;
					}
				}
			}
		}
		PDAArrFree(*NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5);
		if (heap->a_nivision___LV_PointDistances_ && (heap->a_nivision___LV_PointDistances_->datatype == (floatDataType))) {
			*NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5 = PDAArrCopyOnModify(heap->a_nivision___LV_PointDistances_);
		} else 
		{
			*NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5 = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5), ArrayDataTypeNDims(dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5));
			if (!PDAArrSet(heap->a_nivision___LV_PointDistances_,NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5)) {
				CGenErr();
			}
			PDAArrFree(heap->a_nivision___LV_PointDistances_);
		}
		if (NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A) {
			/* Free Cluster NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A*/
			{
				cl_00000* cl_002 = (cl_00000*)NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A;
				if (cl_002->el_2 && (((PDAStrPtr)cl_002->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_002->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_2)->staticStr)) {
						MemHandleFree( cl_002->el_2 );
						cl_002->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_nivision___LV_PointDistances_, 0x0 | ClusterDataType, NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A);
		}
		else {
		}
		NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_CleanupVIGlobalConstants();
		if (NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19 && ((NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19)->refcnt == 1) && ((NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19)->staticArray == false)) {
	PDAArrFree(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19);
			NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19 = NULL;
		}
		else
		{
	PDAArrFree(NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19);
		}
		PDAClusterFree( &NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1, 0x0 | ClusterDataType);
		return eFinished;
	}
}


/****** End of generated code **********/


