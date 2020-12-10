/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: NI_Vision_Development_Module.lvlib:IMAQ IntegerToColorValue
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\vision\Color.llb\IMAQ IntegerToColorValue
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
struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_heap { 
	cl_00000 c_nivision___LV_IntegerToColor_;
	cl_00000 c_error_in__no_error_;
	uInt32 dw_U32_value;
	int32 l______________32______;
	cl_A0000 c_Color_Value;
	cl_A0000 c_nivision___LV_IntegerToColor__1;
	PDAArrPtr a_nivision___LV_IntegerToColor_;
	PDAArrPtr a_2D_Color_value_array;
	PDAArrPtr a_1D_Color_value_array;
	PDAArrPtr a_2D_U32_array;
	PDAArrPtr a_1D_U32_array;
	PDAArrPtr a_nivision___LV_IntegerToColor__1;
	uInt16 n_Color_Mode_1;
} _DATA_SECTION __NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_heap; /* heap */

static struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_heap _DATA_SECTION *heap = &__NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_heap; /* heap */

struct _tNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeap {
	uInt8	refCnt;
	cl_A0000	i17C;
	PDAArrPtr	i18E;
	PDAArrPtr	i1A9;
} _DATA_SECTION __NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeap;
static struct _tNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeap _DATA_SECTION *NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr = &__NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeap;

struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	uInt32	data[1];
};
_DATA_SECTION   struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53_init_ NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53_init_ = 
{uInt32DataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53_init_ = (PDAArrPtr)(&(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53_init_));

_DATA_SECTION static  cl_A0000 g_cluster_1 = 
{0, 0, 0};

struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	cl_A0000	data[1];
};
_DATA_SECTION   struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_ NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_ = 
{0xA0000 | ClusterDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_ = (PDAArrPtr)(&(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_));

_DATA_SECTION  cl_A0000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15_init_ = 
{0, 0, 0};

_DATA_SECTION static  cl_A0000 g_cluster_3 = 
{0, 0, 0};

struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	ArrDimSize	dimension_1;
	cl_A0000	data[1];
};
_DATA_SECTION   struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_ NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_ = 
{0xA0000 | ClusterDataType, 1, 1, true, 2, 0, 0
};
_DATA_SECTION PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_ = (PDAArrPtr)(&(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_));

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};

struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	ArrDimSize	dimension_1;
	uInt32	data[1];
};
_DATA_SECTION   struct _NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE_init_ NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE_init_ = 
{uInt32DataType, 1, 1, true, 2, 0, 0
};
_DATA_SECTION PDAArrPtr pNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE_init_ = (PDAArrPtr)(&(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE_init_));

_DATA_SECTION static  cl_A0000 g_cluster_6 = 
{0, 0, 0};

struct _g_array_5 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	cl_A0000	data[1];
};
_DATA_SECTION static  struct _g_array_5 g_array_5 = 
{0xA0000 | ClusterDataType, 1, 1, true, 1, 0
};

struct _g_array_6 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	ArrDimSize	dimension_1;
	cl_A0000	data[1];
};
_DATA_SECTION static  struct _g_array_6 g_array_6 = 
{0xA0000 | ClusterDataType, 1, 1, true, 2, 0, 0
};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_CleanupLSRs(void);
void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_AddVIGlobalConstants(void);
void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_AddVIGlobalConstants(void) {
	MemSet(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr,sizeof(*(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_CleanupVIGlobalConstants(void);
void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_CleanupVIGlobalConstants(void) {
	(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_InitVIConstantList(void);
void _TEXT_SECTION NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_InitVIConstantList(void) {
	(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


uInt32 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_3_U32_value_4C = 0 ;
static DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_3_U32_value_4C = uInt32DataType;
cl_A0000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15_tmp_;
static cl_A0000* NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15 = &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15_tmp_;
static DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15 = 0xA0000 | ClusterDataType;
cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1;
static DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1 = 0x0 | ClusterDataType;
cl_00000 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78_tmp_;
static cl_00000* NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78 = &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78_tmp_;
static DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78 = 0x0 | ClusterDataType;
uInt16 NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_4_Color_Mode_6 = 0 ;
static DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_4_Color_Mode_6 = uInt16DataType;
extern eRunStatus NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_Run(
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1, cl_00000  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53, PDAArrPtr  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE, PDAArrPtr  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_3_U32_value_4C, uInt32  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_3_U32_value_4C,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_4_Color_Mode_6, uInt16  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_4_Color_Mode_6,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C, PDAArrPtr*  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C, PDAArrPtr*  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78, cl_00000*  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15, cl_A0000*  NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C = (PDAArrPtr)(&NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C_init_);
	PDAArrIncRefCnt(*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C,1);
	*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15 = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15_init_;
	PDAClusterIncRefCnt(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15, 0xA0000 | ClusterDataType, 1);
	*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C = (PDAArrPtr)(&NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C_init_);
	PDAArrIncRefCnt(*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C,1);
	*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78 = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78_init_;
	PDAClusterIncRefCnt(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78, 0x0 | ClusterDataType, 1);
	NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_InitVIConstantList();
	{
		{
			MemMove(&(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr->i17C),&g_cluster_6,GetClusterSize( 0xA0000 | ClusterDataType ));
			PDAClusterIncRefCnt(&g_cluster_6,0xA0000 | ClusterDataType,1);
		}
		heap->c_Color_Value = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr->i17C;
		PDAArrIncRefCnt((PDAArrPtr)(&g_array_5),1);
		NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr->i18E = (void*)&g_array_5;
		heap->a_1D_Color_value_array = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr->i18E;
		PDAArrIncRefCnt((PDAArrPtr)(&g_array_6),1);
		NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr->i1A9 = (void*)&g_array_6;
		heap->a_2D_Color_value_array = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_GlobalConstantsHeapPtr->i1A9;
		heap->n_Color_Mode_1 =NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_4_Color_Mode_6;
		/**/
		/* 转换为长整型 */
		/**/
		heap->l______________32______ = (int32)heap->n_Color_Mode_1;
		heap->dw_U32_value = NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_3_U32_value_4C;
		if (dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53 == (0x60000 | ArrayDataType)) {
			MemMove(&heap->a_1D_U32_array, &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53, DataSize((0x60000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53,1);
		}
		else {
			heap->a_1D_U32_array = PDAArrNewEmptyWithNDims( uInt32DataType, (ArrDimSize)1 );
			if (!PDAArrSet(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53, &heap->a_1D_U32_array)) {
				CGenErr();
			}
		}
		if (dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE == (0x100000 | ArrayDataType)) {
			MemMove(&heap->a_2D_U32_array, &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE, DataSize((0x100000 | ArrayDataType)));
			PDAArrIncRefCnt(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE,1);
		}
		else {
			heap->a_2D_U32_array = PDAArrNewEmptyWithNDims( uInt32DataType, (ArrDimSize)2 );
			if (!PDAArrSet(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE, &heap->a_2D_U32_array)) {
				CGenErr();
			}
		}
		MemMove(&heap->c_error_in__no_error_, &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1, sizeof(cl_00000));
		PDAClusterIncRefCnt(&NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1,0x0 | ClusterDataType,1);
/* Call Library Node */
		{
			void 	LV_IntegerToColor(
			uInt32 ,
			void* ,
			void* ,
			int32 ,
			void* ,
			void* ,
			void* ,
			void* );
			uInt32 arg1;
			void* arg2;
			void* arg3;
			int32 arg4;
			void* arg5;
			void* arg6;
			void* arg7;
			void* arg8;
			arg1 = heap->dw_U32_value;
			arg2 = GetArrayHandle(heap->a_1D_U32_array, uInt32DataType, 1);
			if (!arg2) {
				CGenErr();
			}
			arg3 = GetArrayHandle(heap->a_2D_U32_array, uInt32DataType, 2);
			if (!arg3) {
				CGenErr();
			}
			arg4 = heap->l______________32______;
			arg5 = GetClusterPtr( &heap->c_Color_Value, 0xA0000 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg6 = GetArrayHandle(heap->a_1D_Color_value_array, 0xA0000 | ClusterDataType, 1);
			if (!arg6) {
				CGenErr();
			}
			arg7 = GetArrayHandle(heap->a_2D_Color_value_array, 0xA0000 | ClusterDataType, 2);
			if (!arg7) {
				CGenErr();
			}
			arg8 = GetClusterPtr( &heap->c_error_in__no_error_, 0x0 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			LV_IntegerToColor(
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7,
			arg8
			);
			PDAClusterCreateFromPtr( arg5, 0xA0000 | ClusterDataType, &heap->c_nivision___LV_IntegerToColor__1 );
			heap->a_nivision___LV_IntegerToColor__1 = PDAArrCreateFromHandle( arg6, 0xA0000 | ClusterDataType, (int32)1 );
			heap->a_nivision___LV_IntegerToColor_ = PDAArrCreateFromHandle( arg7, 0xA0000 | ClusterDataType, (int32)2 );
			PDAClusterCreateFromPtr( arg8, 0x0 | ClusterDataType, &heap->c_nivision___LV_IntegerToColor_ );
			PDAArrFreeDataHandle(arg2, heap->a_1D_U32_array);
	if ((heap->a_1D_U32_array) && ((heap->a_1D_U32_array)->refcnt > 0)) {
				if (((heap->a_1D_U32_array)->refcnt == 1) && ((heap->a_1D_U32_array)->staticArray == false)) {
					(heap->a_1D_U32_array)->refcnt--;
					MemHandleFree( heap->a_1D_U32_array );
					heap->a_1D_U32_array=NULL;
				}
				else
				 	PDAArrFree(heap->a_1D_U32_array);
			}
			PDAArrFreeDataHandle(arg3, heap->a_2D_U32_array);
	if ((heap->a_2D_U32_array) && ((heap->a_2D_U32_array)->refcnt > 0)) {
				if (((heap->a_2D_U32_array)->refcnt == 1) && ((heap->a_2D_U32_array)->staticArray == false)) {
					(heap->a_2D_U32_array)->refcnt--;
					MemHandleFree( heap->a_2D_U32_array );
					heap->a_2D_U32_array=NULL;
				}
				else
				 	PDAArrFree(heap->a_2D_U32_array);
			}
			PDAClusterFreeDataPtr(arg5, 0xA0000 | ClusterDataType);
	PDAArrFreeDataHandle(arg6, heap->a_1D_Color_value_array);
	PDAArrFree(heap->a_1D_Color_value_array);
			PDAArrFreeDataHandle(arg7, heap->a_2D_Color_value_array);
	PDAArrFree(heap->a_2D_Color_value_array);
			PDAClusterFreeDataPtr(arg8, 0x0 | ClusterDataType);
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
		if (NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15) {
			PDAClusterCopyOnModify(&heap->c_nivision___LV_IntegerToColor__1, 0xA0000 | ClusterDataType, NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_3_Color_Value_15);
		}
		else {
		}
		PDAArrFree(*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C);
		if (heap->a_nivision___LV_IntegerToColor__1 && (heap->a_nivision___LV_IntegerToColor__1->datatype == (0xA0000 | ClusterDataType))) {
			*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C = PDAArrCopyOnModify(heap->a_nivision___LV_IntegerToColor__1);
		} else 
		{
			*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C), ArrayDataTypeNDims(dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C));
			if (!PDAArrSet(heap->a_nivision___LV_IntegerToColor__1,NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_1_A_1D_Color_value_array_2C)) {
				CGenErr();
			}
			PDAArrFree(heap->a_nivision___LV_IntegerToColor__1);
		}
		PDAArrFree(*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C);
		if (heap->a_nivision___LV_IntegerToColor_ && (heap->a_nivision___LV_IntegerToColor_->datatype == (0xA0000 | ClusterDataType))) {
			*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C = PDAArrCopyOnModify(heap->a_nivision___LV_IntegerToColor_);
		} else 
		{
			*NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C = PDAArrNewEmptyWithNDims(ArrayEltDataType(dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C), ArrayDataTypeNDims(dtNI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C));
			if (!PDAArrSet(heap->a_nivision___LV_IntegerToColor_,NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_0_A_2D_Color_value_array_8C)) {
				CGenErr();
			}
			PDAArrFree(heap->a_nivision___LV_IntegerToColor_);
		}
		if (NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78) {
			/* Free Cluster NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78*/
			{
				cl_00000* cl_002 = (cl_00000*)NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78;
				if (cl_002->el_2 && (((PDAStrPtr)cl_002->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_002->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_2)->staticStr)) {
						MemHandleFree( cl_002->el_2 );
						cl_002->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_nivision___LV_IntegerToColor_, 0x0 | ClusterDataType, NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_out_2_error_out_78);
		}
		else {
		}
		NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_CleanupVIGlobalConstants();
		if (NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53 && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->refcnt == 1) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->staticArray == false)) {
	if ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->refcnt > 0)) {
				if (((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->refcnt == 1) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->staticArray == false)) {
					(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->refcnt--;
					MemHandleFree( NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53 );
					NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53=NULL;
				}
				else
				 	PDAArrFree(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53);
			}
			NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53 = NULL;
		}
		else
		{
	if ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->refcnt > 0)) {
				if (((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->refcnt == 1) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->staticArray == false)) {
					(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53)->refcnt--;
					MemHandleFree( NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53 );
					NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53=NULL;
				}
				else
				 	PDAArrFree(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_1_A_1D_U32_array_53);
			}
		}
		PDAClusterFree( &NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_0_error_in__no_error__1, 0x0 | ClusterDataType);
		if (NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->refcnt == 1) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->staticArray == false)) {
	if ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->refcnt > 0)) {
				if (((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->refcnt == 1) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->staticArray == false)) {
					(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->refcnt--;
					MemHandleFree( NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE );
					NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE=NULL;
				}
				else
				 	PDAArrFree(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE);
			}
			NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE = NULL;
		}
		else
		{
	if ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->refcnt > 0)) {
				if (((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->refcnt == 1) && ((NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->staticArray == false)) {
					(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE)->refcnt--;
					MemHandleFree( NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE );
					NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE=NULL;
				}
				else
				 	PDAArrFree(NI_Vision_Development_Module_lvlib_IMAQ_IntegerToColorValue_in_2_A_2D_U32_array_AE);
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


