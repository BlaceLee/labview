#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr IPI_CCD_Write_Result_VIName;
extern eRunStatus IPI_CCD_Write_Result_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define IPI_CCD_Write_Result_formID 2000

extern TextPtr IMAQ_Overlay_Text_VIName;
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
				DataType dtIMAQ_Overlay_Text_out_1_Image_Out_A8, CCGRCRefnumHandle*  IMAQ_Overlay_Text_out_1_Image_Out_A8	);
#define IMAQ_Overlay_Text_formID 2100
