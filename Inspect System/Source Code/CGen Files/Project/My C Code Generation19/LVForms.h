#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr IPI_DrawLine_VIName;
extern eRunStatus IPI_DrawLine_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define IPI_DrawLine_formID 2000

extern TextPtr IMAQ_Overlay_Rectangle_VIName;
extern eRunStatus IMAQ_Overlay_Rectangle_Run(
				DataType dtIMAQ_Overlay_Rectangle_in_0_Color_9, uInt32  IMAQ_Overlay_Rectangle_in_0_Color_9,
				DataType dtIMAQ_Overlay_Rectangle_in_1_Group_105, VoidHand  IMAQ_Overlay_Rectangle_in_1_Group_105,
				DataType dtIMAQ_Overlay_Rectangle_in_2_error_in__no_error__2B, cl_00000  IMAQ_Overlay_Rectangle_in_2_error_in__no_error__2B,
				DataType dtIMAQ_Overlay_Rectangle_in_3_Drawing_Mode__Frame__1, uInt32  IMAQ_Overlay_Rectangle_in_3_Drawing_Mode__Frame__1,
				DataType dtIMAQ_Overlay_Rectangle_in_4_Rectangle_F, cl_B0000  IMAQ_Overlay_Rectangle_in_4_Rectangle_F,
				DataType dtIMAQ_Overlay_Rectangle_in_5_Image_64, CCGRCRefnumHandle  IMAQ_Overlay_Rectangle_in_5_Image_64,
				DataType dtIMAQ_Overlay_Rectangle_out_0_error_out_41, cl_00000*  IMAQ_Overlay_Rectangle_out_0_error_out_41,
				DataType dtIMAQ_Overlay_Rectangle_out_1_Image_Out_62, CCGRCRefnumHandle*  IMAQ_Overlay_Rectangle_out_1_Image_Out_62	);
#define IMAQ_Overlay_Rectangle_formID 2100

extern TextPtr IMAQ_Overlay_Line_VIName;
extern eRunStatus IMAQ_Overlay_Line_Run(
				DataType dtIMAQ_Overlay_Line_in_0_Color_1A, uInt32  IMAQ_Overlay_Line_in_0_Color_1A,
				DataType dtIMAQ_Overlay_Line_in_1_Group_112, VoidHand  IMAQ_Overlay_Line_in_1_Group_112,
				DataType dtIMAQ_Overlay_Line_in_2_error_in__no_error__32, cl_00000  IMAQ_Overlay_Line_in_2_error_in__no_error__32,
				DataType dtIMAQ_Overlay_Line_in_3_End_Point_8, cl_E0000  IMAQ_Overlay_Line_in_3_End_Point_8,
				DataType dtIMAQ_Overlay_Line_in_4_Start_Point_20, cl_E0000  IMAQ_Overlay_Line_in_4_Start_Point_20,
				DataType dtIMAQ_Overlay_Line_in_5_Image_65, CCGRCRefnumHandle  IMAQ_Overlay_Line_in_5_Image_65,
				DataType dtIMAQ_Overlay_Line_out_0_error_out_48, cl_00000*  IMAQ_Overlay_Line_out_0_error_out_48,
				DataType dtIMAQ_Overlay_Line_out_1_Image_Out_2, CCGRCRefnumHandle*  IMAQ_Overlay_Line_out_1_Image_Out_2	);
#define IMAQ_Overlay_Line_formID 2200

extern TextPtr Find_First_Error_VIName;
extern eRunStatus Find_First_Error_Run(
				DataType dtFind_First_Error_in_0_error_in__no_error__1CF, cl_00000  Find_First_Error_in_0_error_in__no_error__1CF,
				DataType dtFind_First_Error_in_1_source_messages_20, VoidHand  Find_First_Error_in_1_source_messages_20,
				DataType dtFind_First_Error_in_2_error_codes_77, PDAArrPtr  Find_First_Error_in_2_error_codes_77,
				DataType dtFind_First_Error_out_0_error_out_28, cl_00000*  Find_First_Error_out_0_error_out_28,
				DataType dtFind_First_Error_out_1_error__61, Boolean*  Find_First_Error_out_1_error__61	);
#define Find_First_Error_formID 2300
