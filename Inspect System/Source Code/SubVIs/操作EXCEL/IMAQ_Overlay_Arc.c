/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IMAQ Overlay Arc
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\vision\Overlay.llb\IMAQ Overlay Arc
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
struct _IMAQ_Overlay_Arc_heap { 
	cl_B0000 c_Bounding_Rectangle_1;
	cl_00000 c_error_in__no_error__1;
	cl_00000 c_nivision___LV_OverlayArc2_err;
	float64 n_Start_Angle__degrees__9;
	float64 n_End_Angle__degrees__7;
	uInt32 dw_Color_to_RGB_vi___________;
	uInt32 dw_Drawing_Mode__Frame__9;
	uInt32 dw_Color_9;
	VoidHand s_Group;
	CCGRCRefnumHandle l_Image;
	CCGRCRefnumHandle l_nivision___LV_OverlayArc2_src;
} _DATA_SECTION __IMAQ_Overlay_Arc_heap; /* heap */

static struct _IMAQ_Overlay_Arc_heap _DATA_SECTION *heap = &__IMAQ_Overlay_Arc_heap; /* heap */

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Overlay_Arc_in_4_error_in__no_error__39_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};

_DATA_SECTION  cl_B0000 IMAQ_Overlay_Arc_in_6_Bounding_Rectangle_1D_init_ = 
{0, 0, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IMAQ_Overlay_Arc_CleanupLSRs(void);
void _TEXT_SECTION IMAQ_Overlay_Arc_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IMAQ_Overlay_Arc_AddVIGlobalConstants(void);
void _TEXT_SECTION IMAQ_Overlay_Arc_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IMAQ_Overlay_Arc_InitVIConstantList(void);
void _TEXT_SECTION IMAQ_Overlay_Arc_InitVIConstantList(void) {
}


/****** Block diagram code **********/


CCGRCRefnumHandle IMAQ_Overlay_Arc_in_7_Image_70 = NULL;
static DataType dtIMAQ_Overlay_Arc_in_7_Image_70 = CCGRCRefnumHandleDataType;
CCGRCRefnumHandle IMAQ_Overlay_Arc_out_1_Image_Out_72_init_ = NULL;
static CCGRCRefnumHandle *IMAQ_Overlay_Arc_out_1_Image_Out_72 = &IMAQ_Overlay_Arc_out_1_Image_Out_72_init_;
static DataType dtIMAQ_Overlay_Arc_out_1_Image_Out_72 = CCGRCRefnumHandleDataType;
cl_00000 IMAQ_Overlay_Arc_out_0_error_out_4F_tmp_;
static cl_00000* IMAQ_Overlay_Arc_out_0_error_out_4F = &IMAQ_Overlay_Arc_out_0_error_out_4F_tmp_;
static DataType dtIMAQ_Overlay_Arc_out_0_error_out_4F = 0x0 | ClusterDataType;
cl_00000 IMAQ_Overlay_Arc_in_4_error_in__no_error__39;
static DataType dtIMAQ_Overlay_Arc_in_4_error_in__no_error__39 = 0x0 | ClusterDataType;
cl_B0000 IMAQ_Overlay_Arc_in_6_Bounding_Rectangle_1D;
static DataType dtIMAQ_Overlay_Arc_in_6_Bounding_Rectangle_1D = 0xB0000 | ClusterDataType;
uInt32 IMAQ_Overlay_Arc_in_2_Color_17 = RGB(255, 0, 0);
static DataType dtIMAQ_Overlay_Arc_in_2_Color_17 = uInt32DataType;
uInt32 IMAQ_Overlay_Arc_in_5_Drawing_Mode__Frame__6B = 0 ;
static DataType dtIMAQ_Overlay_Arc_in_5_Drawing_Mode__Frame__6B = uInt32DataType;
float64 IMAQ_Overlay_Arc_in_3_Start_Angle__degrees__E_init_ = 0.0000000000000000000E+0 ;
static DataType dtIMAQ_Overlay_Arc_in_3_Start_Angle__degrees__E = doubleDataType;
float64 IMAQ_Overlay_Arc_in_1_End_Angle__degrees__7_init_ = 0.0000000000000000000E+0 ;
static DataType dtIMAQ_Overlay_Arc_in_1_End_Angle__degrees__7 = doubleDataType;
VoidHand IMAQ_Overlay_Arc_in_0_Group_12C = NULL;
static DataType dtIMAQ_Overlay_Arc_in_0_Group_12C = StringDataType;
extern eRunStatus IMAQ_Overlay_Arc_Run(
				DataType dtIMAQ_Overlay_Arc_in_0_Group_12C, VoidHand  IMAQ_Overlay_Arc_in_0_Group_12C,
				DataType dtIMAQ_Overlay_Arc_in_1_End_Angle__degrees__7, float64* IMAQ_Overlay_Arc_in_1_End_Angle__degrees__7,
				DataType dtIMAQ_Overlay_Arc_in_2_Color_17, uInt32  IMAQ_Overlay_Arc_in_2_Color_17,
				DataType dtIMAQ_Overlay_Arc_in_3_Start_Angle__degrees__E, float64* IMAQ_Overlay_Arc_in_3_Start_Angle__degrees__E,
				DataType dtIMAQ_Overlay_Arc_in_4_error_in__no_error__39, cl_00000  IMAQ_Overlay_Arc_in_4_error_in__no_error__39,
				DataType dtIMAQ_Overlay_Arc_in_5_Drawing_Mode__Frame__6B, uInt32  IMAQ_Overlay_Arc_in_5_Drawing_Mode__Frame__6B,
				DataType dtIMAQ_Overlay_Arc_in_6_Bounding_Rectangle_1D, cl_B0000  IMAQ_Overlay_Arc_in_6_Bounding_Rectangle_1D,
				DataType dtIMAQ_Overlay_Arc_in_7_Image_70, CCGRCRefnumHandle  IMAQ_Overlay_Arc_in_7_Image_70,
				DataType dtIMAQ_Overlay_Arc_out_0_error_out_4F, cl_00000*  IMAQ_Overlay_Arc_out_0_error_out_4F,
				DataType dtIMAQ_Overlay_Arc_out_1_Image_Out_72, CCGRCRefnumHandle*  IMAQ_Overlay_Arc_out_1_Image_Out_72	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*IMAQ_Overlay_Arc_out_0_error_out_4F = IMAQ_Overlay_Arc_out_0_error_out_4F_init_;
	PDAClusterIncRefCnt(IMAQ_Overlay_Arc_out_0_error_out_4F, 0x0 | ClusterDataType, 1);
	if (!IMAQ_Overlay_Arc_in_0_Group_12C) {
		IMAQ_Overlay_Arc_in_0_Group_12C = PDAStrNewFromStr(_LVT(""));
	}
	IMAQ_Overlay_Arc_InitVIConstantList();
	{
		heap->dw_Color_9 = IMAQ_Overlay_Arc_in_2_Color_17;
		{
			extern uInt32 Color_to_RGB_out_0_Resolved_Color_9_init_;
			uInt32 Color_to_RGB_out_0_Resolved_Color_9 = Color_to_RGB_out_0_Resolved_Color_9_init_;
			extern uInt8 Color_to_RGB_out_1_R_1C_init_;
			uInt8 Color_to_RGB_out_1_R_1C = Color_to_RGB_out_1_R_1C_init_;
			extern uInt8 Color_to_RGB_out_2_G_17_init_;
			uInt8 Color_to_RGB_out_2_G_17 = Color_to_RGB_out_2_G_17_init_;
			extern uInt8 Color_to_RGB_out_3_B_19_init_;
			uInt8 Color_to_RGB_out_3_B_19 = Color_to_RGB_out_3_B_19_init_;
			heap->dw_Color_to_RGB_vi___________ = Color_to_RGB_out_0_Resolved_Color_9_init_;
			if ((Color_to_RGB_Run( 	uInt32DataType, heap->dw_Color_9,
			uInt32DataType, &heap->dw_Color_to_RGB_vi___________,
			uCharDataType, &Color_to_RGB_out_1_R_1C,
			uCharDataType, &Color_to_RGB_out_2_G_17,
			uCharDataType, &Color_to_RGB_out_3_B_19	)) == eFail) CGenErr();
			}
		heap->l_Image = (CCGRCRefnumHandle)IMAQ_Overlay_Arc_in_7_Image_70;
		CCGRCRefnumIncRefCnt(heap->l_Image, 1);
		MemMove(&heap->c_Bounding_Rectangle_1, &IMAQ_Overlay_Arc_in_6_Bounding_Rectangle_1D, sizeof(cl_B0000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Arc_in_6_Bounding_Rectangle_1D,0xB0000 | ClusterDataType,1);
		heap->n_Start_Angle__degrees__9 = *IMAQ_Overlay_Arc_in_3_Start_Angle__degrees__E;
		heap->n_End_Angle__degrees__7 = *IMAQ_Overlay_Arc_in_1_End_Angle__degrees__7;
		heap->dw_Drawing_Mode__Frame__9 =IMAQ_Overlay_Arc_in_5_Drawing_Mode__Frame__6B;
		MemMove(&heap->c_error_in__no_error__1, &IMAQ_Overlay_Arc_in_4_error_in__no_error__39, sizeof(cl_00000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Arc_in_4_error_in__no_error__39,0x0 | ClusterDataType,1);
		heap->s_Group =IMAQ_Overlay_Arc_in_0_Group_12C;
		PDAStrIncRefCnt(IMAQ_Overlay_Arc_in_0_Group_12C,1);
/* Call Library Node */
		{
			void 	LV_OverlayArc2(
			void* ,
			void* ,
			double ,
			double ,
			int32 ,
			void* ,
			void* ,
			void* );
			void* arg1;
			void* arg2;
			double arg3;
			double arg4;
			int32 arg5;
			uInt32 arg6;
			void* arg7;
			CharPtr* arg8;
			arg1 = (void *)heap->l_Image;
			arg2 = GetClusterPtr( &heap->c_Bounding_Rectangle_1, 0xB0000 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg3 = heap->n_Start_Angle__degrees__9;
			arg4 = heap->n_End_Angle__degrees__7;
			arg5 = heap->dw_Drawing_Mode__Frame__9;
			arg6 = heap->dw_Color_to_RGB_vi___________;
			arg7 = GetClusterPtr( &heap->c_error_in__no_error__1, 0x0 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg8 = GetStringHandle(heap->s_Group);
			if (!arg8) {
				CGenErr();
			}
			LV_OverlayArc2(
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			&arg6,
			arg7,
			arg8
			);
			heap->l_nivision___LV_OverlayArc2_src = CCGRCRefnumCopy(arg1);
			PDAClusterCreateFromPtr( arg7, 0x0 | ClusterDataType, &heap->c_nivision___LV_OverlayArc2_err );
			if (IsVoidHand(CCGRCRefnumHandleDataType)) {
				PDAVHFree((VoidHand)heap->l_Image, CCGRCRefnumHandleDataType);
			}
			PDAClusterFreeDataPtr(arg2, 0xB0000 | ClusterDataType);
	PDAClusterFreeDataPtr(arg7, 0x0 | ClusterDataType);
	/* Free Cluster heap->c_error_in__no_error__1*/
			{
				cl_00000* cl_001 = (cl_00000*)&heap->c_error_in__no_error__1;
				if (cl_001->el_2 && (((PDAStrPtr)cl_001->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_001->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_001->el_2)->staticStr)) {
						MemHandleFree( cl_001->el_2 );
						cl_001->el_2=NULL;
					}
				}
			}
			PDAStrFreeDataHandle(arg8);
	if (heap->s_Group && (((PDAStrPtr)heap->s_Group)->refcnt > 0)) {
				if ((--((PDAStrPtr)heap->s_Group)->refcnt == 0) && (!((PDAStrPtr)heap->s_Group)->staticStr)) {
					MemHandleFree( heap->s_Group );
					heap->s_Group=NULL;
				}
			}
		}
		if (IMAQ_Overlay_Arc_out_1_Image_Out_72) {
	CCGRCRefnumFree(*IMAQ_Overlay_Arc_out_1_Image_Out_72);
			*IMAQ_Overlay_Arc_out_1_Image_Out_72 =heap->l_nivision___LV_OverlayArc2_src;
		}
		else {
	CCGRCRefnumFree(heap->l_nivision___LV_OverlayArc2_src);
		}
		if (IMAQ_Overlay_Arc_out_0_error_out_4F) {
			/* Free Cluster IMAQ_Overlay_Arc_out_0_error_out_4F*/
			{
				cl_00000* cl_002 = (cl_00000*)IMAQ_Overlay_Arc_out_0_error_out_4F;
				if (cl_002->el_2 && (((PDAStrPtr)cl_002->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_002->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_2)->staticStr)) {
						MemHandleFree( cl_002->el_2 );
						cl_002->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_nivision___LV_OverlayArc2_err, 0x0 | ClusterDataType, IMAQ_Overlay_Arc_out_0_error_out_4F);
		}
		else {
		}
	CCGRCRefnumFree(IMAQ_Overlay_Arc_in_7_Image_70);
		PDAClusterFree( &IMAQ_Overlay_Arc_in_4_error_in__no_error__39, 0x0 | ClusterDataType);
		PDAClusterFree( &IMAQ_Overlay_Arc_in_6_Bounding_Rectangle_1D, 0xB0000 | ClusterDataType);
		if (IMAQ_Overlay_Arc_in_0_Group_12C && (((PDAStrPtr)IMAQ_Overlay_Arc_in_0_Group_12C)->refcnt == 1) && (((PDAStrPtr)IMAQ_Overlay_Arc_in_0_Group_12C)->staticStr == false)) {
	if (IMAQ_Overlay_Arc_in_0_Group_12C && (((PDAStrPtr)IMAQ_Overlay_Arc_in_0_Group_12C)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Arc_in_0_Group_12C)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Arc_in_0_Group_12C)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Arc_in_0_Group_12C );
					IMAQ_Overlay_Arc_in_0_Group_12C=NULL;
				}
			}
			IMAQ_Overlay_Arc_in_0_Group_12C = NULL;
		}
		else
		{
	if (IMAQ_Overlay_Arc_in_0_Group_12C && (((PDAStrPtr)IMAQ_Overlay_Arc_in_0_Group_12C)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Arc_in_0_Group_12C)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Arc_in_0_Group_12C)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Arc_in_0_Group_12C );
					IMAQ_Overlay_Arc_in_0_Group_12C=NULL;
				}
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


