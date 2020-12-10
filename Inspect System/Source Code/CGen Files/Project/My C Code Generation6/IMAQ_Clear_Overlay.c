/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IMAQ Clear Overlay
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\vision\Overlay.llb\IMAQ Clear Overlay
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
struct _IMAQ_Clear_Overlay_heap { 
	cl_00000 c_nivision___LV_ClearImageOverl;
	cl_00000 c_error_in__no_error__4;
	PDAArrPtr a_Groups;
	CCGRCRefnumHandle l_Image_2;
	CCGRCRefnumHandle l_nivision___LV_ClearImageOverl;
} _DATA_SECTION __IMAQ_Clear_Overlay_heap; /* heap */

static struct _IMAQ_Clear_Overlay_heap _DATA_SECTION *heap = &__IMAQ_Clear_Overlay_heap; /* heap */

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Clear_Overlay_out_0_error_out_1E_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Clear_Overlay_in_1_error_in__no_error__8_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};

struct _IMAQ_Clear_Overlay_in_0_Groups_B0_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	VoidHand	data[1];
};
_DATA_SECTION   struct _IMAQ_Clear_Overlay_in_0_Groups_B0_init_ IMAQ_Clear_Overlay_in_0_Groups_B0_init_ = 
{StringDataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pIMAQ_Clear_Overlay_in_0_Groups_B0_init_ = (PDAArrPtr)(&(IMAQ_Clear_Overlay_in_0_Groups_B0_init_));



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IMAQ_Clear_Overlay_CleanupLSRs(void);
void _TEXT_SECTION IMAQ_Clear_Overlay_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IMAQ_Clear_Overlay_AddVIGlobalConstants(void);
void _TEXT_SECTION IMAQ_Clear_Overlay_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IMAQ_Clear_Overlay_InitVIConstantList(void);
void _TEXT_SECTION IMAQ_Clear_Overlay_InitVIConstantList(void) {
}


/****** Block diagram code **********/


CCGRCRefnumHandle IMAQ_Clear_Overlay_in_2_Image_1 = NULL;
static DataType dtIMAQ_Clear_Overlay_in_2_Image_1 = CCGRCRefnumHandleDataType;
CCGRCRefnumHandle IMAQ_Clear_Overlay_out_1_Image_Out_3B_init_ = NULL;
static CCGRCRefnumHandle *IMAQ_Clear_Overlay_out_1_Image_Out_3B = &IMAQ_Clear_Overlay_out_1_Image_Out_3B_init_;
static DataType dtIMAQ_Clear_Overlay_out_1_Image_Out_3B = CCGRCRefnumHandleDataType;
cl_00000 IMAQ_Clear_Overlay_out_0_error_out_1E_tmp_;
static cl_00000* IMAQ_Clear_Overlay_out_0_error_out_1E = &IMAQ_Clear_Overlay_out_0_error_out_1E_tmp_;
static DataType dtIMAQ_Clear_Overlay_out_0_error_out_1E = 0x0 | ClusterDataType;
cl_00000 IMAQ_Clear_Overlay_in_1_error_in__no_error__8;
static DataType dtIMAQ_Clear_Overlay_in_1_error_in__no_error__8 = 0x0 | ClusterDataType;
extern eRunStatus IMAQ_Clear_Overlay_Run(
				DataType dtIMAQ_Clear_Overlay_in_0_Groups_B0, PDAArrPtr  IMAQ_Clear_Overlay_in_0_Groups_B0,
				DataType dtIMAQ_Clear_Overlay_in_1_error_in__no_error__8, cl_00000  IMAQ_Clear_Overlay_in_1_error_in__no_error__8,
				DataType dtIMAQ_Clear_Overlay_in_2_Image_1, CCGRCRefnumHandle  IMAQ_Clear_Overlay_in_2_Image_1,
				DataType dtIMAQ_Clear_Overlay_out_0_error_out_1E, cl_00000*  IMAQ_Clear_Overlay_out_0_error_out_1E,
				DataType dtIMAQ_Clear_Overlay_out_1_Image_Out_3B, CCGRCRefnumHandle*  IMAQ_Clear_Overlay_out_1_Image_Out_3B	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*IMAQ_Clear_Overlay_out_0_error_out_1E = IMAQ_Clear_Overlay_out_0_error_out_1E_init_;
	PDAClusterIncRefCnt(IMAQ_Clear_Overlay_out_0_error_out_1E, 0x0 | ClusterDataType, 1);
	IMAQ_Clear_Overlay_InitVIConstantList();
	{
		heap->l_Image_2 = (CCGRCRefnumHandle)IMAQ_Clear_Overlay_in_2_Image_1;
		CCGRCRefnumIncRefCnt(heap->l_Image_2, 1);
		MemMove(&heap->c_error_in__no_error__4, &IMAQ_Clear_Overlay_in_1_error_in__no_error__8, sizeof(cl_00000));
		PDAClusterIncRefCnt(&IMAQ_Clear_Overlay_in_1_error_in__no_error__8,0x0 | ClusterDataType,1);
		if (dtIMAQ_Clear_Overlay_in_0_Groups_B0 == (0x30000 | ArrayDataType)) {
			MemMove(&heap->a_Groups, &IMAQ_Clear_Overlay_in_0_Groups_B0, DataSize((0x30000 | ArrayDataType)));
			PDAArrIncRefCnt(IMAQ_Clear_Overlay_in_0_Groups_B0,1);
		}
		else {
			heap->a_Groups = PDAArrNewEmptyWithNDims( StringDataType, (ArrDimSize)1 );
			if (!PDAArrSet(IMAQ_Clear_Overlay_in_0_Groups_B0, &heap->a_Groups)) {
				CGenErr();
			}
		}
/* Call Library Node */
		{
			void 	LV_ClearImageOverlay2(
			void* ,
			void* ,
			void* );
			void* arg1;
			void* arg2;
			void* arg3;
			arg1 = (void *)heap->l_Image_2;
			arg2 = GetClusterPtr( &heap->c_error_in__no_error__4, 0x0 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg3 = GetArrayHandle(heap->a_Groups, StringDataType, 1);
			if (!arg3) {
				CGenErr();
			}
			LV_ClearImageOverlay2(
			arg1,
			arg2,
			arg3
			);
			heap->l_nivision___LV_ClearImageOverl = CCGRCRefnumCopy(arg1);
			PDAClusterCreateFromPtr( arg2, 0x0 | ClusterDataType, &heap->c_nivision___LV_ClearImageOverl );
			if (IsVoidHand(CCGRCRefnumHandleDataType)) {
				PDAVHFree((VoidHand)heap->l_Image_2, CCGRCRefnumHandleDataType);
			}
			PDAClusterFreeDataPtr(arg2, 0x0 | ClusterDataType);
	/* Free Cluster heap->c_error_in__no_error__4*/
			{
				cl_00000* cl_001 = (cl_00000*)&heap->c_error_in__no_error__4;
				if (cl_001->el_2 && (((PDAStrPtr)cl_001->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_001->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_001->el_2)->staticStr)) {
						MemHandleFree( cl_001->el_2 );
						cl_001->el_2=NULL;
					}
				}
			}
			PDAArrFreeDataHandle(arg3, heap->a_Groups);
	PDAArrFree(heap->a_Groups);
		}
		if (IMAQ_Clear_Overlay_out_1_Image_Out_3B) {
	CCGRCRefnumFree(*IMAQ_Clear_Overlay_out_1_Image_Out_3B);
			*IMAQ_Clear_Overlay_out_1_Image_Out_3B =heap->l_nivision___LV_ClearImageOverl;
		}
		else {
	CCGRCRefnumFree(heap->l_nivision___LV_ClearImageOverl);
		}
		if (IMAQ_Clear_Overlay_out_0_error_out_1E) {
			/* Free Cluster IMAQ_Clear_Overlay_out_0_error_out_1E*/
			{
				cl_00000* cl_002 = (cl_00000*)IMAQ_Clear_Overlay_out_0_error_out_1E;
				if (cl_002->el_2 && (((PDAStrPtr)cl_002->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_002->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_2)->staticStr)) {
						MemHandleFree( cl_002->el_2 );
						cl_002->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_nivision___LV_ClearImageOverl, 0x0 | ClusterDataType, IMAQ_Clear_Overlay_out_0_error_out_1E);
		}
		else {
		}
	CCGRCRefnumFree(IMAQ_Clear_Overlay_in_2_Image_1);
		PDAClusterFree( &IMAQ_Clear_Overlay_in_1_error_in__no_error__8, 0x0 | ClusterDataType);
		if (IMAQ_Clear_Overlay_in_0_Groups_B0 && ((IMAQ_Clear_Overlay_in_0_Groups_B0)->refcnt == 1) && ((IMAQ_Clear_Overlay_in_0_Groups_B0)->staticArray == false)) {
	PDAArrFree(IMAQ_Clear_Overlay_in_0_Groups_B0);
			IMAQ_Clear_Overlay_in_0_Groups_B0 = NULL;
		}
		else
		{
	PDAArrFree(IMAQ_Clear_Overlay_in_0_Groups_B0);
		}
		return eFinished;
	}
}


/****** End of generated code **********/


