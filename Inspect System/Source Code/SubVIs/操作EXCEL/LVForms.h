#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr Initial_Picture_VIName;
extern eRunStatus Initial_Picture_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define Initial_Picture_formID 2000

extern TextPtr IMAQ_Overlay_Arc_VIName;
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
				DataType dtIMAQ_Overlay_Arc_out_1_Image_Out_72, CCGRCRefnumHandle*  IMAQ_Overlay_Arc_out_1_Image_Out_72	);
#define IMAQ_Overlay_Arc_formID 2100

extern TextPtr IMAQ_Clear_Overlay_VIName;
extern eRunStatus IMAQ_Clear_Overlay_Run(
				DataType dtIMAQ_Clear_Overlay_in_0_Groups_B0, PDAArrPtr  IMAQ_Clear_Overlay_in_0_Groups_B0,
				DataType dtIMAQ_Clear_Overlay_in_1_error_in__no_error__8, cl_00000  IMAQ_Clear_Overlay_in_1_error_in__no_error__8,
				DataType dtIMAQ_Clear_Overlay_in_2_Image_1, CCGRCRefnumHandle  IMAQ_Clear_Overlay_in_2_Image_1,
				DataType dtIMAQ_Clear_Overlay_out_0_error_out_1E, cl_00000*  IMAQ_Clear_Overlay_out_0_error_out_1E,
				DataType dtIMAQ_Clear_Overlay_out_1_Image_Out_3B, CCGRCRefnumHandle*  IMAQ_Clear_Overlay_out_1_Image_Out_3B	);
#define IMAQ_Clear_Overlay_formID 2200
