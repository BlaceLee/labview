#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr cal_VIName;
extern eRunStatus cal_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define cal_formID 2000

extern TextPtr NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_VIName;
extern eRunStatus NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_Run(
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19, PDAArrPtr  NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_0_Points_19,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1, cl_00000  NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_in_1_error_in__no_error__1,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5, PDAArrPtr*  NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_0_Distances_5,
				DataType dtNI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A, cl_00000*  NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_out_1_error_out_4A	);
#define NI_Vision_Development_Module_lvlib_IMAQ_Point_Distances_formID 2100

extern TextPtr NI_AALPro_lvlib_Unconstrained_Linear_Fit_VIName;
extern eRunStatus NI_AALPro_lvlib_Unconstrained_Linear_Fit_Run(
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263, PDAArrPtr  NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_0_Y_263,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E, PDAArrPtr  NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_1_X_E,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0, PDAArrPtr  NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_2_Weight_2A0,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_3_tolerance_B5, float64* NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_3_tolerance_B5,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_in_4_method_23F, uInt16  NI_AALPro_lvlib_Unconstrained_Linear_Fit_in_4_method_23F,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17, PDAArrPtr*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_0_Best_Linear_Fit_17,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56, float64*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_1_slope_56,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C, float64*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_2_intercept_4C,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36, float64*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_3_residue_36,
				DataType dtNI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E, int32*  NI_AALPro_lvlib_Unconstrained_Linear_Fit_out_4_error_3E	);
#define NI_AALPro_lvlib_Unconstrained_Linear_Fit_formID 2200

extern TextPtr NI_AALPro_lvlib_Linear_Fit_VIName;
extern eRunStatus NI_AALPro_lvlib_Linear_Fit_Run(
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_0_Y_21E, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit_in_0_Y_21E,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_1_X_1BB, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit_in_1_X_1BB,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_2_Weight_283, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit_in_2_Weight_283,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F, float64* NI_AALPro_lvlib_Linear_Fit_in_3_tolerance_44F,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_4_method_36B, uInt16  NI_AALPro_lvlib_Linear_Fit_in_4_method_36B,
				DataType dtNI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3, cl_D0000*  NI_AALPro_lvlib_Linear_Fit_in_5_parameter_bounds_1E3,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A, PDAArrPtr*  NI_AALPro_lvlib_Linear_Fit_out_0_Best_Linear_Fit_19A,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_1_slope_13F, float64*  NI_AALPro_lvlib_Linear_Fit_out_1_slope_13F,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F, float64*  NI_AALPro_lvlib_Linear_Fit_out_2_intercept_12F,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_3_residue_D3, float64*  NI_AALPro_lvlib_Linear_Fit_out_3_residue_D3,
				DataType dtNI_AALPro_lvlib_Linear_Fit_out_4_error_B5, int32*  NI_AALPro_lvlib_Linear_Fit_out_4_error_B5	);
#define NI_AALPro_lvlib_Linear_Fit_formID 2300

extern TextPtr NI_AALPro_lvlib_Linear_Fit__LS__VIName;
extern eRunStatus NI_AALPro_lvlib_Linear_Fit__LS__Run(
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LS__in_0_Y_122,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LS__in_1_X_E,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LS__in_2_Weight_15F,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17, PDAArrPtr*  NI_AALPro_lvlib_Linear_Fit__LS__out_0_Best_Linear_Fit_17,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56, float64*  NI_AALPro_lvlib_Linear_Fit__LS__out_1_slope_56,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C, float64*  NI_AALPro_lvlib_Linear_Fit__LS__out_2_intercept_4C,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36, float64*  NI_AALPro_lvlib_Linear_Fit__LS__out_3_residue_36,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E, int32*  NI_AALPro_lvlib_Linear_Fit__LS__out_4_error_3E	);
#define NI_AALPro_lvlib_Linear_Fit__LS__formID 2400

extern TextPtr NI_AALPro_lvlib_Linear_Fit__LAR__VIName;
extern eRunStatus NI_AALPro_lvlib_Linear_Fit__LAR__Run(
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LAR__in_0_Y_16D,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LAR__in_1_X_E,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__LAR__in_2_Weight_1AA,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__in_3_tol_A7, float64* NI_AALPro_lvlib_Linear_Fit__LAR__in_3_tol_A7,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17, PDAArrPtr*  NI_AALPro_lvlib_Linear_Fit__LAR__out_0_Best_Linear_Fit_17,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56, float64*  NI_AALPro_lvlib_Linear_Fit__LAR__out_1_slope_56,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C, float64*  NI_AALPro_lvlib_Linear_Fit__LAR__out_2_intercept_4C,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36, float64*  NI_AALPro_lvlib_Linear_Fit__LAR__out_3_residue_36,
				DataType dtNI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E, int32*  NI_AALPro_lvlib_Linear_Fit__LAR__out_4_error_3E	);
#define NI_AALPro_lvlib_Linear_Fit__LAR__formID 2500

extern TextPtr NI_AALPro_lvlib_Linear_Fit__Bisquare__VIName;
extern eRunStatus NI_AALPro_lvlib_Linear_Fit__Bisquare__Run(
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__Bisquare__in_0_Y_170,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__Bisquare__in_1_X_21,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A, PDAArrPtr  NI_AALPro_lvlib_Linear_Fit__Bisquare__in_2_Weight_19A,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__in_3_tol_BD, float64* NI_AALPro_lvlib_Linear_Fit__Bisquare__in_3_tol_BD,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD, PDAArrPtr*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_0_Best_Linear_Fit_1AD,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50, float64*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_1_slope_50,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B, float64*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_2_intercept_5B,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F, float64*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_3_residue_8F,
				DataType dtNI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66, int32*  NI_AALPro_lvlib_Linear_Fit__Bisquare__out_4_error_66	);
#define NI_AALPro_lvlib_Linear_Fit__Bisquare__formID 2600

#ifdef LV_MAIN
FormTableEntry formTable[] = {
{ cal_formID, cal_Start, &cal_VIName },
};
uInt8 formTableSize = 1;
#ifndef No_OS
LVCriticalSection gVICriticalSections[1];
uInt8 gVICriticalSectionsSize = 0;
#endif
#else
extern FormTableEntry formTable[];
#endif

#endif