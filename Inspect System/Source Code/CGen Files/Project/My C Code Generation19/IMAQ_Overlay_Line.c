/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IMAQ Overlay Line
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\vision\Overlay.llb\IMAQ Overlay Line
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
struct _IMAQ_Overlay_Line_heap { 
	cl_00000 c_nivision___LV_OverlayLine2_er;
	cl_00000 c_error_in__no_error__2;
	cl_E0000 c_Start_Point;
	cl_E0000 c_End_Point;
	uInt32 dw_Color_3;
	uInt32 dw_Color_to_RGB_vi____________1;
	VoidHand s_Group_1;
	CCGRCRefnumHandle l_Image_1;
	CCGRCRefnumHandle l_nivision___LV_OverlayLine2_sr;
} _DATA_SECTION __IMAQ_Overlay_Line_heap; /* heap */

static struct _IMAQ_Overlay_Line_heap _DATA_SECTION *heap = &__IMAQ_Overlay_Line_heap; /* heap */

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Overlay_Line_out_0_error_out_48_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Overlay_Line_in_2_error_in__no_error__32_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};

_DATA_SECTION  cl_E0000 IMAQ_Overlay_Line_in_4_Start_Point_20_init_ = 
{0, 0};

_DATA_SECTION  cl_E0000 IMAQ_Overlay_Line_in_3_End_Point_8_init_ = 
{0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IMAQ_Overlay_Line_CleanupLSRs(void);
void _TEXT_SECTION IMAQ_Overlay_Line_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IMAQ_Overlay_Line_AddVIGlobalConstants(void);
void _TEXT_SECTION IMAQ_Overlay_Line_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IMAQ_Overlay_Line_InitVIConstantList(void);
void _TEXT_SECTION IMAQ_Overlay_Line_InitVIConstantList(void) {
}


/****** Block diagram code **********/


CCGRCRefnumHandle IMAQ_Overlay_Line_in_5_Image_65 = NULL;
static DataType dtIMAQ_Overlay_Line_in_5_Image_65 = CCGRCRefnumHandleDataType;
CCGRCRefnumHandle IMAQ_Overlay_Line_out_1_Image_Out_2_init_ = NULL;
static CCGRCRefnumHandle *IMAQ_Overlay_Line_out_1_Image_Out_2 = &IMAQ_Overlay_Line_out_1_Image_Out_2_init_;
static DataType dtIMAQ_Overlay_Line_out_1_Image_Out_2 = CCGRCRefnumHandleDataType;
cl_00000 IMAQ_Overlay_Line_out_0_error_out_48_tmp_;
static cl_00000* IMAQ_Overlay_Line_out_0_error_out_48 = &IMAQ_Overlay_Line_out_0_error_out_48_tmp_;
static DataType dtIMAQ_Overlay_Line_out_0_error_out_48 = 0x0 | ClusterDataType;
cl_00000 IMAQ_Overlay_Line_in_2_error_in__no_error__32;
static DataType dtIMAQ_Overlay_Line_in_2_error_in__no_error__32 = 0x0 | ClusterDataType;
cl_E0000 IMAQ_Overlay_Line_in_4_Start_Point_20;
static DataType dtIMAQ_Overlay_Line_in_4_Start_Point_20 = 0xE0000 | ClusterDataType;
uInt32 IMAQ_Overlay_Line_in_0_Color_1A = RGB(255, 0, 0);
static DataType dtIMAQ_Overlay_Line_in_0_Color_1A = uInt32DataType;
cl_E0000 IMAQ_Overlay_Line_in_3_End_Point_8;
static DataType dtIMAQ_Overlay_Line_in_3_End_Point_8 = 0xE0000 | ClusterDataType;
VoidHand IMAQ_Overlay_Line_in_1_Group_112 = NULL;
static DataType dtIMAQ_Overlay_Line_in_1_Group_112 = StringDataType;
extern eRunStatus IMAQ_Overlay_Line_Run(
				DataType dtIMAQ_Overlay_Line_in_0_Color_1A, uInt32  IMAQ_Overlay_Line_in_0_Color_1A,
				DataType dtIMAQ_Overlay_Line_in_1_Group_112, VoidHand  IMAQ_Overlay_Line_in_1_Group_112,
				DataType dtIMAQ_Overlay_Line_in_2_error_in__no_error__32, cl_00000  IMAQ_Overlay_Line_in_2_error_in__no_error__32,
				DataType dtIMAQ_Overlay_Line_in_3_End_Point_8, cl_E0000  IMAQ_Overlay_Line_in_3_End_Point_8,
				DataType dtIMAQ_Overlay_Line_in_4_Start_Point_20, cl_E0000  IMAQ_Overlay_Line_in_4_Start_Point_20,
				DataType dtIMAQ_Overlay_Line_in_5_Image_65, CCGRCRefnumHandle  IMAQ_Overlay_Line_in_5_Image_65,
				DataType dtIMAQ_Overlay_Line_out_0_error_out_48, cl_00000*  IMAQ_Overlay_Line_out_0_error_out_48,
				DataType dtIMAQ_Overlay_Line_out_1_Image_Out_2, CCGRCRefnumHandle*  IMAQ_Overlay_Line_out_1_Image_Out_2	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*IMAQ_Overlay_Line_out_0_error_out_48 = IMAQ_Overlay_Line_out_0_error_out_48_init_;
	PDAClusterIncRefCnt(IMAQ_Overlay_Line_out_0_error_out_48, 0x0 | ClusterDataType, 1);
	if (!IMAQ_Overlay_Line_in_1_Group_112) {
		IMAQ_Overlay_Line_in_1_Group_112 = PDAStrNewFromStr(_LVT(""));
	}
	IMAQ_Overlay_Line_InitVIConstantList();
	{
		heap->dw_Color_3 = IMAQ_Overlay_Line_in_0_Color_1A;
		{
			extern uInt32 Color_to_RGB_out_0_Resolved_Color_9_init_;
			uInt32 Color_to_RGB_out_0_Resolved_Color_9 = Color_to_RGB_out_0_Resolved_Color_9_init_;
			extern uInt8 Color_to_RGB_out_1_R_1C_init_;
			uInt8 Color_to_RGB_out_1_R_1C = Color_to_RGB_out_1_R_1C_init_;
			extern uInt8 Color_to_RGB_out_2_G_17_init_;
			uInt8 Color_to_RGB_out_2_G_17 = Color_to_RGB_out_2_G_17_init_;
			extern uInt8 Color_to_RGB_out_3_B_19_init_;
			uInt8 Color_to_RGB_out_3_B_19 = Color_to_RGB_out_3_B_19_init_;
			heap->dw_Color_to_RGB_vi____________1 = Color_to_RGB_out_0_Resolved_Color_9_init_;
			if ((Color_to_RGB_Run( 	uInt32DataType, heap->dw_Color_3,
			uInt32DataType, &heap->dw_Color_to_RGB_vi____________1,
			uCharDataType, &Color_to_RGB_out_1_R_1C,
			uCharDataType, &Color_to_RGB_out_2_G_17,
			uCharDataType, &Color_to_RGB_out_3_B_19	)) == eFail) CGenErr();
			}
		heap->l_Image_1 = (CCGRCRefnumHandle)IMAQ_Overlay_Line_in_5_Image_65;
		CCGRCRefnumIncRefCnt(heap->l_Image_1, 1);
		MemMove(&heap->c_Start_Point, &IMAQ_Overlay_Line_in_4_Start_Point_20, sizeof(cl_E0000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Line_in_4_Start_Point_20,0xE0000 | ClusterDataType,1);
		MemMove(&heap->c_End_Point, &IMAQ_Overlay_Line_in_3_End_Point_8, sizeof(cl_E0000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Line_in_3_End_Point_8,0xE0000 | ClusterDataType,1);
		MemMove(&heap->c_error_in__no_error__2, &IMAQ_Overlay_Line_in_2_error_in__no_error__32, sizeof(cl_00000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Line_in_2_error_in__no_error__32,0x0 | ClusterDataType,1);
		heap->s_Group_1 =IMAQ_Overlay_Line_in_1_Group_112;
		PDAStrIncRefCnt(IMAQ_Overlay_Line_in_1_Group_112,1);
/* Call Library Node */
		{
			void 	LV_OverlayLine2(
			void* ,
			void* ,
			void* ,
			void* ,
			void* ,
			void* );
			void* arg1;
			void* arg2;
			void* arg3;
			uInt32 arg4;
			void* arg5;
			CharPtr* arg6;
			arg1 = (void *)heap->l_Image_1;
			arg2 = GetClusterPtr( &heap->c_Start_Point, 0xE0000 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg3 = GetClusterPtr( &heap->c_End_Point, 0xE0000 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg4 = heap->dw_Color_to_RGB_vi____________1;
			arg5 = GetClusterPtr( &heap->c_error_in__no_error__2, 0x0 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg6 = GetStringHandle(heap->s_Group_1);
			if (!arg6) {
				CGenErr();
			}
			LV_OverlayLine2(
			arg1,
			arg2,
			arg3,
			&arg4,
			arg5,
			arg6
			);
			heap->l_nivision___LV_OverlayLine2_sr = CCGRCRefnumCopy(arg1);
			PDAClusterCreateFromPtr( arg5, 0x0 | ClusterDataType, &heap->c_nivision___LV_OverlayLine2_er );
			if (IsVoidHand(CCGRCRefnumHandleDataType)) {
				PDAVHFree((VoidHand)heap->l_Image_1, CCGRCRefnumHandleDataType);
			}
			PDAClusterFreeDataPtr(arg2, 0xE0000 | ClusterDataType);
	PDAClusterFreeDataPtr(arg3, 0xE0000 | ClusterDataType);
	PDAClusterFreeDataPtr(arg5, 0x0 | ClusterDataType);
	/* Free Cluster heap->c_error_in__no_error__2*/
			{
				cl_00000* cl_001 = (cl_00000*)&heap->c_error_in__no_error__2;
				if (cl_001->el_2 && (((PDAStrPtr)cl_001->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_001->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_001->el_2)->staticStr)) {
						MemHandleFree( cl_001->el_2 );
						cl_001->el_2=NULL;
					}
				}
			}
			PDAStrFreeDataHandle(arg6);
	if (heap->s_Group_1 && (((PDAStrPtr)heap->s_Group_1)->refcnt > 0)) {
				if ((--((PDAStrPtr)heap->s_Group_1)->refcnt == 0) && (!((PDAStrPtr)heap->s_Group_1)->staticStr)) {
					MemHandleFree( heap->s_Group_1 );
					heap->s_Group_1=NULL;
				}
			}
		}
		if (IMAQ_Overlay_Line_out_1_Image_Out_2) {
	CCGRCRefnumFree(*IMAQ_Overlay_Line_out_1_Image_Out_2);
			*IMAQ_Overlay_Line_out_1_Image_Out_2 =heap->l_nivision___LV_OverlayLine2_sr;
		}
		else {
	CCGRCRefnumFree(heap->l_nivision___LV_OverlayLine2_sr);
		}
		if (IMAQ_Overlay_Line_out_0_error_out_48) {
			/* Free Cluster IMAQ_Overlay_Line_out_0_error_out_48*/
			{
				cl_00000* cl_002 = (cl_00000*)IMAQ_Overlay_Line_out_0_error_out_48;
				if (cl_002->el_2 && (((PDAStrPtr)cl_002->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_002->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_2)->staticStr)) {
						MemHandleFree( cl_002->el_2 );
						cl_002->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_nivision___LV_OverlayLine2_er, 0x0 | ClusterDataType, IMAQ_Overlay_Line_out_0_error_out_48);
		}
		else {
		}
	CCGRCRefnumFree(IMAQ_Overlay_Line_in_5_Image_65);
		PDAClusterFree( &IMAQ_Overlay_Line_in_2_error_in__no_error__32, 0x0 | ClusterDataType);
		PDAClusterFree( &IMAQ_Overlay_Line_in_4_Start_Point_20, 0xE0000 | ClusterDataType);
		PDAClusterFree( &IMAQ_Overlay_Line_in_3_End_Point_8, 0xE0000 | ClusterDataType);
		if (IMAQ_Overlay_Line_in_1_Group_112 && (((PDAStrPtr)IMAQ_Overlay_Line_in_1_Group_112)->refcnt == 1) && (((PDAStrPtr)IMAQ_Overlay_Line_in_1_Group_112)->staticStr == false)) {
	if (IMAQ_Overlay_Line_in_1_Group_112 && (((PDAStrPtr)IMAQ_Overlay_Line_in_1_Group_112)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Line_in_1_Group_112)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Line_in_1_Group_112)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Line_in_1_Group_112 );
					IMAQ_Overlay_Line_in_1_Group_112=NULL;
				}
			}
			IMAQ_Overlay_Line_in_1_Group_112 = NULL;
		}
		else
		{
	if (IMAQ_Overlay_Line_in_1_Group_112 && (((PDAStrPtr)IMAQ_Overlay_Line_in_1_Group_112)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Line_in_1_Group_112)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Line_in_1_Group_112)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Line_in_1_Group_112 );
					IMAQ_Overlay_Line_in_1_Group_112=NULL;
				}
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


