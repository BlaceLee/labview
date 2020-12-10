/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IMAQ Overlay Oval
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\vision\Overlay.llb\IMAQ Overlay Oval
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
struct _IMAQ_Overlay_Oval_heap { 
	cl_150000 c_Bounding_Rectangle_1;
	cl_00000 c_error_in__no_error__2;
	cl_00000 c_nivision___LV_OverlayOval2_er;
	uInt32 dw_Color_to_RGB_vi____________2;
	uInt32 dw_Drawing_Mode__Frame__1;
	uInt32 dw_Color_1;
	VoidHand s_Group_1;
	CCGRCRefnumHandle l_Image_1;
	CCGRCRefnumHandle l_nivision___LV_OverlayOval2_sr;
} _DATA_SECTION __IMAQ_Overlay_Oval_heap; /* heap */

static struct _IMAQ_Overlay_Oval_heap _DATA_SECTION *heap = &__IMAQ_Overlay_Oval_heap; /* heap */

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Overlay_Oval_out_0_error_out_41_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Overlay_Oval_in_2_error_in__no_error__2B_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};

_DATA_SECTION  cl_150000 IMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F_init_ = 
{0, 0, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IMAQ_Overlay_Oval_CleanupLSRs(void);
void _TEXT_SECTION IMAQ_Overlay_Oval_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IMAQ_Overlay_Oval_AddVIGlobalConstants(void);
void _TEXT_SECTION IMAQ_Overlay_Oval_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IMAQ_Overlay_Oval_InitVIConstantList(void);
void _TEXT_SECTION IMAQ_Overlay_Oval_InitVIConstantList(void) {
}


/****** Block diagram code **********/


CCGRCRefnumHandle IMAQ_Overlay_Oval_in_5_Image_64 = NULL;
static DataType dtIMAQ_Overlay_Oval_in_5_Image_64 = CCGRCRefnumHandleDataType;
CCGRCRefnumHandle IMAQ_Overlay_Oval_out_1_Image_Out_62_init_ = NULL;
static CCGRCRefnumHandle *IMAQ_Overlay_Oval_out_1_Image_Out_62 = &IMAQ_Overlay_Oval_out_1_Image_Out_62_init_;
static DataType dtIMAQ_Overlay_Oval_out_1_Image_Out_62 = CCGRCRefnumHandleDataType;
cl_00000 IMAQ_Overlay_Oval_out_0_error_out_41_tmp_;
static cl_00000* IMAQ_Overlay_Oval_out_0_error_out_41 = &IMAQ_Overlay_Oval_out_0_error_out_41_tmp_;
static DataType dtIMAQ_Overlay_Oval_out_0_error_out_41 = 0x0 | ClusterDataType;
cl_00000 IMAQ_Overlay_Oval_in_2_error_in__no_error__2B;
static DataType dtIMAQ_Overlay_Oval_in_2_error_in__no_error__2B = 0x0 | ClusterDataType;
cl_150000 IMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F;
static DataType dtIMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F = 0x150000 | ClusterDataType;
uInt32 IMAQ_Overlay_Oval_in_0_Color_9 = RGB(255, 0, 0);
static DataType dtIMAQ_Overlay_Oval_in_0_Color_9 = uInt32DataType;
uInt32 IMAQ_Overlay_Oval_in_3_Drawing_Mode__Frame__1 = 0 ;
static DataType dtIMAQ_Overlay_Oval_in_3_Drawing_Mode__Frame__1 = uInt32DataType;
VoidHand IMAQ_Overlay_Oval_in_1_Group_105 = NULL;
static DataType dtIMAQ_Overlay_Oval_in_1_Group_105 = StringDataType;
extern eRunStatus IMAQ_Overlay_Oval_Run(
				DataType dtIMAQ_Overlay_Oval_in_0_Color_9, uInt32  IMAQ_Overlay_Oval_in_0_Color_9,
				DataType dtIMAQ_Overlay_Oval_in_1_Group_105, VoidHand  IMAQ_Overlay_Oval_in_1_Group_105,
				DataType dtIMAQ_Overlay_Oval_in_2_error_in__no_error__2B, cl_00000  IMAQ_Overlay_Oval_in_2_error_in__no_error__2B,
				DataType dtIMAQ_Overlay_Oval_in_3_Drawing_Mode__Frame__1, uInt32  IMAQ_Overlay_Oval_in_3_Drawing_Mode__Frame__1,
				DataType dtIMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F, cl_150000  IMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F,
				DataType dtIMAQ_Overlay_Oval_in_5_Image_64, CCGRCRefnumHandle  IMAQ_Overlay_Oval_in_5_Image_64,
				DataType dtIMAQ_Overlay_Oval_out_0_error_out_41, cl_00000*  IMAQ_Overlay_Oval_out_0_error_out_41,
				DataType dtIMAQ_Overlay_Oval_out_1_Image_Out_62, CCGRCRefnumHandle*  IMAQ_Overlay_Oval_out_1_Image_Out_62	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*IMAQ_Overlay_Oval_out_0_error_out_41 = IMAQ_Overlay_Oval_out_0_error_out_41_init_;
	PDAClusterIncRefCnt(IMAQ_Overlay_Oval_out_0_error_out_41, 0x0 | ClusterDataType, 1);
	if (!IMAQ_Overlay_Oval_in_1_Group_105) {
		IMAQ_Overlay_Oval_in_1_Group_105 = PDAStrNewFromStr(_LVT(""));
	}
	IMAQ_Overlay_Oval_InitVIConstantList();
	{
		heap->dw_Color_1 = IMAQ_Overlay_Oval_in_0_Color_9;
		{
			extern uInt32 Color_to_RGB_out_0_Resolved_Color_9_init_;
			uInt32 Color_to_RGB_out_0_Resolved_Color_9 = Color_to_RGB_out_0_Resolved_Color_9_init_;
			extern uInt8 Color_to_RGB_out_1_R_1C_init_;
			uInt8 Color_to_RGB_out_1_R_1C = Color_to_RGB_out_1_R_1C_init_;
			extern uInt8 Color_to_RGB_out_2_G_17_init_;
			uInt8 Color_to_RGB_out_2_G_17 = Color_to_RGB_out_2_G_17_init_;
			extern uInt8 Color_to_RGB_out_3_B_19_init_;
			uInt8 Color_to_RGB_out_3_B_19 = Color_to_RGB_out_3_B_19_init_;
			heap->dw_Color_to_RGB_vi____________2 = Color_to_RGB_out_0_Resolved_Color_9_init_;
			if ((Color_to_RGB_Run( 	uInt32DataType, heap->dw_Color_1,
			uInt32DataType, &heap->dw_Color_to_RGB_vi____________2,
			uCharDataType, &Color_to_RGB_out_1_R_1C,
			uCharDataType, &Color_to_RGB_out_2_G_17,
			uCharDataType, &Color_to_RGB_out_3_B_19	)) == eFail) CGenErr();
			}
		heap->l_Image_1 = (CCGRCRefnumHandle)IMAQ_Overlay_Oval_in_5_Image_64;
		CCGRCRefnumIncRefCnt(heap->l_Image_1, 1);
		MemMove(&heap->c_Bounding_Rectangle_1, &IMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F, sizeof(cl_150000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F,0x150000 | ClusterDataType,1);
		heap->dw_Drawing_Mode__Frame__1 =IMAQ_Overlay_Oval_in_3_Drawing_Mode__Frame__1;
		MemMove(&heap->c_error_in__no_error__2, &IMAQ_Overlay_Oval_in_2_error_in__no_error__2B, sizeof(cl_00000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Oval_in_2_error_in__no_error__2B,0x0 | ClusterDataType,1);
		heap->s_Group_1 =IMAQ_Overlay_Oval_in_1_Group_105;
		PDAStrIncRefCnt(IMAQ_Overlay_Oval_in_1_Group_105,1);
/* Call Library Node */
		{
			void 	LV_OverlayOval2(
			void* ,
			void* ,
			int32 ,
			void* ,
			void* ,
			void* );
			void* arg1;
			void* arg2;
			int32 arg3;
			uInt32 arg4;
			void* arg5;
			CharPtr* arg6;
			arg1 = (void *)heap->l_Image_1;
			arg2 = GetClusterPtr( &heap->c_Bounding_Rectangle_1, 0x150000 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg3 = heap->dw_Drawing_Mode__Frame__1;
			arg4 = heap->dw_Color_to_RGB_vi____________2;
			arg5 = GetClusterPtr( &heap->c_error_in__no_error__2, 0x0 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg6 = GetStringHandle(heap->s_Group_1);
			if (!arg6) {
				CGenErr();
			}
			LV_OverlayOval2(
			arg1,
			arg2,
			arg3,
			&arg4,
			arg5,
			arg6
			);
			heap->l_nivision___LV_OverlayOval2_sr = CCGRCRefnumCopy(arg1);
			PDAClusterCreateFromPtr( arg5, 0x0 | ClusterDataType, &heap->c_nivision___LV_OverlayOval2_er );
			if (IsVoidHand(CCGRCRefnumHandleDataType)) {
				PDAVHFree((VoidHand)heap->l_Image_1, CCGRCRefnumHandleDataType);
			}
			PDAClusterFreeDataPtr(arg2, 0x150000 | ClusterDataType);
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
		if (IMAQ_Overlay_Oval_out_1_Image_Out_62) {
	CCGRCRefnumFree(*IMAQ_Overlay_Oval_out_1_Image_Out_62);
			*IMAQ_Overlay_Oval_out_1_Image_Out_62 =heap->l_nivision___LV_OverlayOval2_sr;
		}
		else {
	CCGRCRefnumFree(heap->l_nivision___LV_OverlayOval2_sr);
		}
		if (IMAQ_Overlay_Oval_out_0_error_out_41) {
			/* Free Cluster IMAQ_Overlay_Oval_out_0_error_out_41*/
			{
				cl_00000* cl_002 = (cl_00000*)IMAQ_Overlay_Oval_out_0_error_out_41;
				if (cl_002->el_2 && (((PDAStrPtr)cl_002->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_002->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_2)->staticStr)) {
						MemHandleFree( cl_002->el_2 );
						cl_002->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_nivision___LV_OverlayOval2_er, 0x0 | ClusterDataType, IMAQ_Overlay_Oval_out_0_error_out_41);
		}
		else {
		}
	CCGRCRefnumFree(IMAQ_Overlay_Oval_in_5_Image_64);
		PDAClusterFree( &IMAQ_Overlay_Oval_in_2_error_in__no_error__2B, 0x0 | ClusterDataType);
		PDAClusterFree( &IMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F, 0x150000 | ClusterDataType);
		if (IMAQ_Overlay_Oval_in_1_Group_105 && (((PDAStrPtr)IMAQ_Overlay_Oval_in_1_Group_105)->refcnt == 1) && (((PDAStrPtr)IMAQ_Overlay_Oval_in_1_Group_105)->staticStr == false)) {
	if (IMAQ_Overlay_Oval_in_1_Group_105 && (((PDAStrPtr)IMAQ_Overlay_Oval_in_1_Group_105)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Oval_in_1_Group_105)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Oval_in_1_Group_105)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Oval_in_1_Group_105 );
					IMAQ_Overlay_Oval_in_1_Group_105=NULL;
				}
			}
			IMAQ_Overlay_Oval_in_1_Group_105 = NULL;
		}
		else
		{
	if (IMAQ_Overlay_Oval_in_1_Group_105 && (((PDAStrPtr)IMAQ_Overlay_Oval_in_1_Group_105)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Oval_in_1_Group_105)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Oval_in_1_Group_105)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Oval_in_1_Group_105 );
					IMAQ_Overlay_Oval_in_1_Group_105=NULL;
				}
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


