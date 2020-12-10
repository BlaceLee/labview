#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr CS_Aperture_size_display_VIName;
extern eRunStatus CS_Aperture_size_display_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define CS_Aperture_size_display_formID 2000

extern TextPtr IMAQ_Overlay_Text_VIName;
extern eRunStatus IMAQ_Overlay_Text_Run(
				DataType dtIMAQ_Overlay_Text_in_0_BG_Color__Transparent__10, uInt32  IMAQ_Overlay_Text_in_0_BG_Color__Transparent__10,
				DataType dtIMAQ_Overlay_Text_in_1_Group_194, VoidHand  IMAQ_Overlay_Text_in_1_Group_194,
				DataType dtIMAQ_Overlay_Text_in_2_Text_Color__black__16, uInt32  IMAQ_Overlay_Text_in_2_Text_Color__black__16,
				DataType dtIMAQ_Overlay_Text_in_3_Font__Size___Style_61, cl_F0000*  IMAQ_Overlay_Text_in_3_Font__Size___Style_61,
				DataType dtIMAQ_Overlay_Text_in_4_error_in__no_error__2E, cl_00000  IMAQ_Overlay_Text_in_4_error_in__no_error__2E,
				DataType dtIMAQ_Overlay_Text_in_5_String_9, VoidHand  IMAQ_Overlay_Text_in_5_String_9,
				DataType dtIMAQ_Overlay_Text_in_6_Origin_1C, cl_130000  IMAQ_Overlay_Text_in_6_Origin_1C,
				DataType dtIMAQ_Overlay_Text_in_7_Image_A6, CCGRCRefnumHandle  IMAQ_Overlay_Text_in_7_Image_A6,
				DataType dtIMAQ_Overlay_Text_out_0_error_out_44, cl_00000*  IMAQ_Overlay_Text_out_0_error_out_44,
				DataType dtIMAQ_Overlay_Text_out_1_Image_Out_A8, CCGRCRefnumHandle*  IMAQ_Overlay_Text_out_1_Image_Out_A8	);
#define IMAQ_Overlay_Text_formID 2100

extern TextPtr IMAQ_Overlay_Oval_VIName;
extern eRunStatus IMAQ_Overlay_Oval_Run(
				DataType dtIMAQ_Overlay_Oval_in_0_Color_9, uInt32  IMAQ_Overlay_Oval_in_0_Color_9,
				DataType dtIMAQ_Overlay_Oval_in_1_Group_105, VoidHand  IMAQ_Overlay_Oval_in_1_Group_105,
				DataType dtIMAQ_Overlay_Oval_in_2_error_in__no_error__2B, cl_00000  IMAQ_Overlay_Oval_in_2_error_in__no_error__2B,
				DataType dtIMAQ_Overlay_Oval_in_3_Drawing_Mode__Frame__1, uInt32  IMAQ_Overlay_Oval_in_3_Drawing_Mode__Frame__1,
				DataType dtIMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F, cl_150000  IMAQ_Overlay_Oval_in_4_Bounding_Rectangle_F,
				DataType dtIMAQ_Overlay_Oval_in_5_Image_64, CCGRCRefnumHandle  IMAQ_Overlay_Oval_in_5_Image_64,
				DataType dtIMAQ_Overlay_Oval_out_0_error_out_41, cl_00000*  IMAQ_Overlay_Oval_out_0_error_out_41,
				DataType dtIMAQ_Overlay_Oval_out_1_Image_Out_62, CCGRCRefnumHandle*  IMAQ_Overlay_Oval_out_1_Image_Out_62	);
#define IMAQ_Overlay_Oval_formID 2200

extern TextPtr IMAQ_Convert_ROI_to_Annulus_VIName;
extern eRunStatus IMAQ_Convert_ROI_to_Annulus_Run(
				DataType dtIMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13, cl_00000  IMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13,
				DataType dtIMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6, cl_120000  IMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6,
				DataType dtIMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A, cl_00000*  IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A,
				DataType dtIMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42, cl_180000**  IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42	);
#define IMAQ_Convert_ROI_to_Annulus_formID 2300
