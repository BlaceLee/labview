/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IMAQ Overlay Text
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\vision\Overlay.llb\IMAQ Overlay Text
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
struct _IMAQ_Overlay_Text_heap { 
	cl_00000 c_nivision___LV_OverlayText2_er;
	cl_00000 c_error_in__no_error_;
	cl_A0000 c_Origin_1;
	uInt32 dw_Text_Color__black_;
	uInt32 dw_BG_Color__Transparent_;
	uInt32 dw_Color_to_RGB_vi____________1;
	uInt32 dw_Color_to_RGB_vi___________;
	cl_F0000* c_Font__Size___Style;
	VoidHand s_String;
	VoidHand s_Group;
	CCGRCRefnumHandle l_Image;
	CCGRCRefnumHandle l_nivision___LV_OverlayText2_sr;
} _DATA_SECTION __IMAQ_Overlay_Text_heap; /* heap */

static struct _IMAQ_Overlay_Text_heap _DATA_SECTION *heap = &__IMAQ_Overlay_Text_heap; /* heap */

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Overlay_Text_out_0_error_out_44_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Overlay_Text_in_4_error_in__no_error__2E_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};

_DATA_SECTION  cl_A0000 IMAQ_Overlay_Text_in_6_Origin_1C_init_ = 
{0, 0};

struct _g_string_3 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_3 g_string_3 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_F0000 IMAQ_Overlay_Text_in_3_Font__Size___Style_61_init_ = 
{1, 1, 1, 
{(PDAStrPtr)(&g_string_3), 12, 0, 0, 0, 0, 0, 0, 0.0000000000000000000E+0}, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IMAQ_Overlay_Text_CleanupLSRs(void);
void _TEXT_SECTION IMAQ_Overlay_Text_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IMAQ_Overlay_Text_AddVIGlobalConstants(void);
void _TEXT_SECTION IMAQ_Overlay_Text_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IMAQ_Overlay_Text_InitVIConstantList(void);
void _TEXT_SECTION IMAQ_Overlay_Text_InitVIConstantList(void) {
}


/****** Block diagram code **********/


CCGRCRefnumHandle IMAQ_Overlay_Text_in_7_Image_A6 = NULL;
static DataType dtIMAQ_Overlay_Text_in_7_Image_A6 = CCGRCRefnumHandleDataType;
CCGRCRefnumHandle IMAQ_Overlay_Text_out_1_Image_Out_A8_init_ = NULL;
static CCGRCRefnumHandle *IMAQ_Overlay_Text_out_1_Image_Out_A8 = &IMAQ_Overlay_Text_out_1_Image_Out_A8_init_;
static DataType dtIMAQ_Overlay_Text_out_1_Image_Out_A8 = CCGRCRefnumHandleDataType;
cl_00000 IMAQ_Overlay_Text_out_0_error_out_44_tmp_;
static cl_00000* IMAQ_Overlay_Text_out_0_error_out_44 = &IMAQ_Overlay_Text_out_0_error_out_44_tmp_;
static DataType dtIMAQ_Overlay_Text_out_0_error_out_44 = 0x0 | ClusterDataType;
cl_00000 IMAQ_Overlay_Text_in_4_error_in__no_error__2E;
static DataType dtIMAQ_Overlay_Text_in_4_error_in__no_error__2E = 0x0 | ClusterDataType;
cl_A0000 IMAQ_Overlay_Text_in_6_Origin_1C;
static DataType dtIMAQ_Overlay_Text_in_6_Origin_1C = 0xA0000 | ClusterDataType;
uInt32 IMAQ_Overlay_Text_in_2_Text_Color__black__16 = RGB(0, 0, 0);
static DataType dtIMAQ_Overlay_Text_in_2_Text_Color__black__16 = uInt32DataType;
uInt32 IMAQ_Overlay_Text_in_0_BG_Color__Transparent__10 = LVTransparentVal;
static DataType dtIMAQ_Overlay_Text_in_0_BG_Color__Transparent__10 = uInt32DataType;
VoidHand IMAQ_Overlay_Text_in_5_String_9 = NULL;
static DataType dtIMAQ_Overlay_Text_in_5_String_9 = StringDataType;
VoidHand IMAQ_Overlay_Text_in_1_Group_194 = NULL;
static DataType dtIMAQ_Overlay_Text_in_1_Group_194 = StringDataType;
extern eRunStatus IMAQ_Overlay_Text_Run(
				DataType dtIMAQ_Overlay_Text_in_0_BG_Color__Transparent__10, uInt32  IMAQ_Overlay_Text_in_0_BG_Color__Transparent__10,
				DataType dtIMAQ_Overlay_Text_in_1_Group_194, VoidHand  IMAQ_Overlay_Text_in_1_Group_194,
				DataType dtIMAQ_Overlay_Text_in_2_Text_Color__black__16, uInt32  IMAQ_Overlay_Text_in_2_Text_Color__black__16,
				DataType dtIMAQ_Overlay_Text_in_3_Font__Size___Style_61, cl_F0000*  IMAQ_Overlay_Text_in_3_Font__Size___Style_61,
				DataType dtIMAQ_Overlay_Text_in_4_error_in__no_error__2E, cl_00000  IMAQ_Overlay_Text_in_4_error_in__no_error__2E,
				DataType dtIMAQ_Overlay_Text_in_5_String_9, VoidHand  IMAQ_Overlay_Text_in_5_String_9,
				DataType dtIMAQ_Overlay_Text_in_6_Origin_1C, cl_A0000  IMAQ_Overlay_Text_in_6_Origin_1C,
				DataType dtIMAQ_Overlay_Text_in_7_Image_A6, CCGRCRefnumHandle  IMAQ_Overlay_Text_in_7_Image_A6,
				DataType dtIMAQ_Overlay_Text_out_0_error_out_44, cl_00000*  IMAQ_Overlay_Text_out_0_error_out_44,
				DataType dtIMAQ_Overlay_Text_out_1_Image_Out_A8, CCGRCRefnumHandle*  IMAQ_Overlay_Text_out_1_Image_Out_A8	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*IMAQ_Overlay_Text_out_0_error_out_44 = IMAQ_Overlay_Text_out_0_error_out_44_init_;
	PDAClusterIncRefCnt(IMAQ_Overlay_Text_out_0_error_out_44, 0x0 | ClusterDataType, 1);
	if (!IMAQ_Overlay_Text_in_5_String_9) {
		IMAQ_Overlay_Text_in_5_String_9 = PDAStrNewFromStr(_LVT(""));
	}
	if (!IMAQ_Overlay_Text_in_1_Group_194) {
		IMAQ_Overlay_Text_in_1_Group_194 = PDAStrNewFromStr(_LVT(""));
	}
	IMAQ_Overlay_Text_InitVIConstantList();
	{
		heap->dw_BG_Color__Transparent_ = IMAQ_Overlay_Text_in_0_BG_Color__Transparent__10;
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
			if ((Color_to_RGB_Run( 	uInt32DataType, heap->dw_BG_Color__Transparent_,
			uInt32DataType, &heap->dw_Color_to_RGB_vi___________,
			uCharDataType, &Color_to_RGB_out_1_R_1C,
			uCharDataType, &Color_to_RGB_out_2_G_17,
			uCharDataType, &Color_to_RGB_out_3_B_19	)) == eFail) CGenErr();
			}
		heap->dw_Text_Color__black_ = IMAQ_Overlay_Text_in_2_Text_Color__black__16;
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
			if ((Color_to_RGB_Run( 	uInt32DataType, heap->dw_Text_Color__black_,
			uInt32DataType, &heap->dw_Color_to_RGB_vi____________1,
			uCharDataType, &Color_to_RGB_out_1_R_1C,
			uCharDataType, &Color_to_RGB_out_2_G_17,
			uCharDataType, &Color_to_RGB_out_3_B_19	)) == eFail) CGenErr();
			}
		heap->l_Image = (CCGRCRefnumHandle)IMAQ_Overlay_Text_in_7_Image_A6;
		CCGRCRefnumIncRefCnt(heap->l_Image, 1);
		heap->s_String =IMAQ_Overlay_Text_in_5_String_9;
		PDAStrIncRefCnt(IMAQ_Overlay_Text_in_5_String_9,1);
		MemMove(&heap->c_Origin_1, &IMAQ_Overlay_Text_in_6_Origin_1C, sizeof(cl_A0000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Text_in_6_Origin_1C,0xA0000 | ClusterDataType,1);
		heap->c_Font__Size___Style = (cl_F0000*)IMAQ_Overlay_Text_in_3_Font__Size___Style_61;
		PDAClusterIncRefCnt(&IMAQ_Overlay_Text_in_3_Font__Size___Style_61,0xF0000 | BigClusterDataType,1);
		MemMove(&heap->c_error_in__no_error_, &IMAQ_Overlay_Text_in_4_error_in__no_error__2E, sizeof(cl_00000));
		PDAClusterIncRefCnt(&IMAQ_Overlay_Text_in_4_error_in__no_error__2E,0x0 | ClusterDataType,1);
		heap->s_Group =IMAQ_Overlay_Text_in_1_Group_194;
		PDAStrIncRefCnt(IMAQ_Overlay_Text_in_1_Group_194,1);
/* Call Library Node */
		{
			void 	LV_OverlayText2(
			void* ,
			int8* ,
			void* ,
			void* ,
			void* ,
			void* ,
			void* ,
			void* );
			void* arg1;
			int8* arg2;
			void* arg3;
			uInt32 arg4;
			uInt32 arg5;
			void* arg6;
			void* arg7;
			CharPtr* arg8;
			arg1 = (void *)heap->l_Image;
			arg2 = GetStringVal(heap->s_String);
			if (!arg2) {
				CGenErr();
			}
			arg3 = GetClusterPtr( &heap->c_Origin_1, 0xA0000 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg4 = heap->dw_Color_to_RGB_vi____________1;
			arg5 = heap->dw_Color_to_RGB_vi___________;
			arg6 = GetClusterPtr( &heap->c_Font__Size___Style, 0xF0000 | BigClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg7 = GetClusterPtr( &heap->c_error_in__no_error_, 0x0 | ClusterDataType);
			if (gLastError) {
				CGenErr();
			}
			arg8 = GetStringHandle(heap->s_Group);
			if (!arg8) {
				CGenErr();
			}
			LV_OverlayText2(
			arg1,
			arg2,
			arg3,
			&arg4,
			&arg5,
			arg6,
			arg7,
			arg8
			);
			heap->l_nivision___LV_OverlayText2_sr = CCGRCRefnumCopy(arg1);
			PDAClusterCreateFromPtr( arg7, 0x0 | ClusterDataType, &heap->c_nivision___LV_OverlayText2_er );
			if (IsVoidHand(CCGRCRefnumHandleDataType)) {
				PDAVHFree((VoidHand)heap->l_Image, CCGRCRefnumHandleDataType);
			}
			PDAStrFreeDataPtr(arg2);
	if (heap->s_String && (((PDAStrPtr)heap->s_String)->refcnt > 0)) {
				if ((--((PDAStrPtr)heap->s_String)->refcnt == 0) && (!((PDAStrPtr)heap->s_String)->staticStr)) {
					MemHandleFree( heap->s_String );
					heap->s_String=NULL;
				}
			}
			PDAClusterFreeDataPtr(arg3, 0xA0000 | ClusterDataType);
	PDAClusterFreeDataPtr(arg6, 0xF0000 | BigClusterDataType);
	/* Free Cluster heap->c_Font__Size___Style*/
			PDAClusterFree( &heap->c_Font__Size___Style, 0xF0000 | BigClusterDataType );
			PDAClusterFreeDataPtr(arg7, 0x0 | ClusterDataType);
	/* Free Cluster heap->c_error_in__no_error_*/
			{
				cl_00000* cl_002 = (cl_00000*)&heap->c_error_in__no_error_;
				if (cl_002->el_2 && (((PDAStrPtr)cl_002->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_002->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_002->el_2)->staticStr)) {
						MemHandleFree( cl_002->el_2 );
						cl_002->el_2=NULL;
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
		if (IMAQ_Overlay_Text_out_1_Image_Out_A8) {
	CCGRCRefnumFree(*IMAQ_Overlay_Text_out_1_Image_Out_A8);
			*IMAQ_Overlay_Text_out_1_Image_Out_A8 =heap->l_nivision___LV_OverlayText2_sr;
		}
		else {
	CCGRCRefnumFree(heap->l_nivision___LV_OverlayText2_sr);
		}
		if (IMAQ_Overlay_Text_out_0_error_out_44) {
			/* Free Cluster IMAQ_Overlay_Text_out_0_error_out_44*/
			{
				cl_00000* cl_003 = (cl_00000*)IMAQ_Overlay_Text_out_0_error_out_44;
				if (cl_003->el_2 && (((PDAStrPtr)cl_003->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_003->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_003->el_2)->staticStr)) {
						MemHandleFree( cl_003->el_2 );
						cl_003->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_nivision___LV_OverlayText2_er, 0x0 | ClusterDataType, IMAQ_Overlay_Text_out_0_error_out_44);
		}
		else {
		}
	CCGRCRefnumFree(IMAQ_Overlay_Text_in_7_Image_A6);
		PDAClusterFree( &IMAQ_Overlay_Text_in_4_error_in__no_error__2E, 0x0 | ClusterDataType);
		PDAClusterFree( &IMAQ_Overlay_Text_in_6_Origin_1C, 0xA0000 | ClusterDataType);
		if (IMAQ_Overlay_Text_in_5_String_9 && (((PDAStrPtr)IMAQ_Overlay_Text_in_5_String_9)->refcnt == 1) && (((PDAStrPtr)IMAQ_Overlay_Text_in_5_String_9)->staticStr == false)) {
	if (IMAQ_Overlay_Text_in_5_String_9 && (((PDAStrPtr)IMAQ_Overlay_Text_in_5_String_9)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Text_in_5_String_9)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Text_in_5_String_9)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Text_in_5_String_9 );
					IMAQ_Overlay_Text_in_5_String_9=NULL;
				}
			}
			IMAQ_Overlay_Text_in_5_String_9 = NULL;
		}
		else
		{
	if (IMAQ_Overlay_Text_in_5_String_9 && (((PDAStrPtr)IMAQ_Overlay_Text_in_5_String_9)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Text_in_5_String_9)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Text_in_5_String_9)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Text_in_5_String_9 );
					IMAQ_Overlay_Text_in_5_String_9=NULL;
				}
			}
		}
		PDAClusterFree( &IMAQ_Overlay_Text_in_3_Font__Size___Style_61, 0xF0000 | BigClusterDataType);
		if (IMAQ_Overlay_Text_in_1_Group_194 && (((PDAStrPtr)IMAQ_Overlay_Text_in_1_Group_194)->refcnt == 1) && (((PDAStrPtr)IMAQ_Overlay_Text_in_1_Group_194)->staticStr == false)) {
	if (IMAQ_Overlay_Text_in_1_Group_194 && (((PDAStrPtr)IMAQ_Overlay_Text_in_1_Group_194)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Text_in_1_Group_194)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Text_in_1_Group_194)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Text_in_1_Group_194 );
					IMAQ_Overlay_Text_in_1_Group_194=NULL;
				}
			}
			IMAQ_Overlay_Text_in_1_Group_194 = NULL;
		}
		else
		{
	if (IMAQ_Overlay_Text_in_1_Group_194 && (((PDAStrPtr)IMAQ_Overlay_Text_in_1_Group_194)->refcnt > 0)) {
				if ((--((PDAStrPtr)IMAQ_Overlay_Text_in_1_Group_194)->refcnt == 0) && (!((PDAStrPtr)IMAQ_Overlay_Text_in_1_Group_194)->staticStr)) {
					MemHandleFree( IMAQ_Overlay_Text_in_1_Group_194 );
					IMAQ_Overlay_Text_in_1_Group_194=NULL;
				}
			}
		}
		return eFinished;
	}
}


/****** End of generated code **********/


