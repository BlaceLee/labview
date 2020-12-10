/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: CS-Set the inner circle parameters.vi
 *	Generated from: C:\Users\delluser001\Desktop\Í­µæÆ¬¼ì²â\LX Inspect System\Source Code\SubVIs\CCD\CS-Set the inner circle parameters.vi
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
#define LV_MAIN
#include "LVCGenIncludes.h"
#include "CS_Set_the_inner_circle_parametersLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _CS_Set_the_inner_circle_parameters_heap { 
	cl_D0000* c__________________;
	cl_D0000* c_________in;
	VoidHand Args162_1;  
	Boolean b__________CT_1;
	Boolean b__________CT_2;
	Boolean b__________CT_3;
	Boolean b_Show_Search_Area;
	Boolean b_Show_Result;
	Boolean b_Show_Edges_Found;
	Boolean b_Show_Search_Lines;
	Boolean b_Show_Search_Area_CS;
	Boolean b__________CT_4;
	Boolean b__________CT;
	Boolean b_Show_Search_Lines_CS;
	Boolean b__________CT_5;
	Boolean b_Show_Edges_Found_CS;
	Boolean b__________CT_6;
	Boolean b_Show_Result_CS;
	Boolean b__________CT_7;
} _DATA_SECTION __CS_Set_the_inner_circle_parameters_heap; /* heap */

static struct _CS_Set_the_inner_circle_parameters_heap _DATA_SECTION *heap = &__CS_Set_the_inner_circle_parameters_heap; /* heap */

_DATA_SECTION static  cl_C0000 g_cluster_1 = 
{0, 3, 3, 5.0000000000000000000E+1, 4, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_D0000 CS_Set_the_inner_circle_parameters_in_0_A_________in_2B_init_ = 
{1, 1, 0, 
{0, 3, 3, 5.0000000000000000000E+1, 4, 0}, 1, 1, 1, 1, 65280, 255, 16776960, 16711680, (PDAStrPtr)(&g_string_1)};

_DATA_SECTION static  cl_C0000 g_cluster_4 = 
{0, 3, 3, 5.0000000000000000000E+1, 4, 0};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_D0000 CS_Set_the_inner_circle_parameters_out_0_our_549_init_ = 
{1, 1, 0, 
{0, 3, 3, 5.0000000000000000000E+1, 4, 0}, 1, 1, 1, 1, 65280, 255, 16776960, 16711680, (PDAStrPtr)(&g_string_2)};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION CS_Set_the_inner_circle_parameters_CleanupLSRs(void);
void _TEXT_SECTION CS_Set_the_inner_circle_parameters_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION CS_Set_the_inner_circle_parameters_AddSubVIInstanceData(void);
void _TEXT_SECTION CS_Set_the_inner_circle_parameters_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION CS_Set_the_inner_circle_parameters_AddVIGlobalConstants(void);
void _TEXT_SECTION CS_Set_the_inner_circle_parameters_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION CS_Set_the_inner_circle_parameters_InitVIConstantList(void);
void _TEXT_SECTION CS_Set_the_inner_circle_parameters_InitVIConstantList(void) {
}


/****** Block diagram code **********/


cl_D0000* CS_Set_the_inner_circle_parameters_in_0_A_________in_2B = &CS_Set_the_inner_circle_parameters_in_0_A_________in_2B_init_;
static DataType dtCS_Set_the_inner_circle_parameters_in_0_A_________in_2B = 0xD0000 | BigClusterDataType;
Boolean CS_Set_the_inner_circle_parameters_in_4_Show_Result_1DD = true;
static DataType dtCS_Set_the_inner_circle_parameters_in_4_Show_Result_1DD = BooleanDataType;
Boolean CS_Set_the_inner_circle_parameters_in_3_Show_Edges_Found_217 = false;
static DataType dtCS_Set_the_inner_circle_parameters_in_3_Show_Edges_Found_217 = BooleanDataType;
Boolean CS_Set_the_inner_circle_parameters_in_2_Show_Search_Lines_225 = true;
static DataType dtCS_Set_the_inner_circle_parameters_in_2_Show_Search_Lines_225 = BooleanDataType;
Boolean CS_Set_the_inner_circle_parameters_in_1_Show_Search_Area_233 = true;
static DataType dtCS_Set_the_inner_circle_parameters_in_1_Show_Search_Area_233 = BooleanDataType;
cl_D0000* CS_Set_the_inner_circle_parameters_out_0_our_549_tmp_ = &CS_Set_the_inner_circle_parameters_out_0_our_549_init_;
static cl_D0000** CS_Set_the_inner_circle_parameters_out_0_our_549 = &CS_Set_the_inner_circle_parameters_out_0_our_549_tmp_;
static DataType dtCS_Set_the_inner_circle_parameters_out_0_our_549 = 0xD0000 | BigClusterDataType;
extern eRunStatus CS_Set_the_inner_circle_parameters_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*CS_Set_the_inner_circle_parameters_out_0_our_549 = CS_Set_the_inner_circle_parameters_out_0_our_549_tmp_;
	PDAClusterIncRefCnt(CS_Set_the_inner_circle_parameters_out_0_our_549, 0xD0000 | BigClusterDataType, 1);
	CS_Set_the_inner_circle_parameters_InitVIConstantList();
	{
		heap->b_Show_Search_Area =CS_Set_the_inner_circle_parameters_in_1_Show_Search_Area_233;
		{ /* Select */
			heap->b_Show_Search_Area_CS = heap->b_Show_Search_Area;
			/* begin case */
			if ( heap->b_Show_Search_Area_CS ) {
				{
					heap->b__________CT = true;
				}
			} /* end case */
			/* begin case */
			else {
				{
					heap->b__________CT = false;
				}
			} /* end case */
		} /* end switch */
		heap->b_Show_Search_Lines =CS_Set_the_inner_circle_parameters_in_2_Show_Search_Lines_225;
		{ /* Select */
			heap->b_Show_Search_Lines_CS = heap->b_Show_Search_Lines;
			/* begin case */
			if ( heap->b_Show_Search_Lines_CS ) {
				{
					heap->b__________CT_1 = true;
				}
			} /* end case */
			/* begin case */
			else {
				{
					heap->b__________CT_1 = false;
				}
			} /* end case */
		} /* end switch */
		heap->b_Show_Edges_Found =CS_Set_the_inner_circle_parameters_in_3_Show_Edges_Found_217;
		{ /* Select */
			heap->b_Show_Edges_Found_CS = heap->b_Show_Edges_Found;
			/* begin case */
			if ( heap->b_Show_Edges_Found_CS ) {
				{
					heap->b__________CT_2 = true;
				}
			} /* end case */
			/* begin case */
			else {
				{
					heap->b__________CT_2 = false;
				}
			} /* end case */
		} /* end switch */
		heap->b_Show_Result =CS_Set_the_inner_circle_parameters_in_4_Show_Result_1DD;
		{ /* Select */
			heap->b_Show_Result_CS = heap->b_Show_Result;
			/* begin case */
			if ( heap->b_Show_Result_CS ) {
				{
					heap->b__________CT_3 = true;
				}
			} /* end case */
			/* begin case */
			else {
				{
					heap->b__________CT_3 = false;
				}
			} /* end case */
		} /* end switch */
		heap->c_________in = (cl_D0000*)CS_Set_the_inner_circle_parameters_in_0_A_________in_2B;
		PDAClusterIncRefCnt(&CS_Set_the_inner_circle_parameters_in_0_A_________in_2B,0xD0000 | BigClusterDataType,1);
		/* Cluster Inc Ref Count:  FPTerm*/
		if(heap->c_________in) heap->c_________in->refcnt += 1;
		{
			/* Free unwired input comment tunnel. */
	/* Free Cluster heap->c_________in*/
			PDAClusterFree( &heap->c_________in, 0xD0000 | BigClusterDataType );
		}
/* Bundle by name */
		{
			cl_D0000* cl_003 = NULL;
			/* Cluster CopyOnModify */
			PDAClusterCopyOnModify( &heap->c_________in, 0xD0000 | BigClusterDataType, &heap->c__________________ );
			cl_003 = (cl_D0000*)heap->c__________________;
	cl_003->el_2 = heap->b__________CT;
	cl_003->el_3 = heap->b__________CT_1;
	cl_003->el_4 = heap->b__________CT_2;
	cl_003->el_5 = heap->b__________CT_3;
		}
		if (CS_Set_the_inner_circle_parameters_out_0_our_549) {
			/* Free Cluster CS_Set_the_inner_circle_parameters_out_0_our_549*/
			PDAClusterFree( CS_Set_the_inner_circle_parameters_out_0_our_549, 0xD0000 | BigClusterDataType );
			PDAClusterCopyOnModify(&heap->c__________________, 0xD0000 | BigClusterDataType, CS_Set_the_inner_circle_parameters_out_0_our_549);
		}
		else {
		}
		PDAClusterFree( &CS_Set_the_inner_circle_parameters_in_0_A_________in_2B, 0xD0000 | BigClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr CS_Set_the_inner_circle_parameters_VIName = "CS-Set the inner circle parameters.vi";

eRunStatus CS_Set_the_inner_circle_parameters_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus CS_Set_the_inner_circle_parameters_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	CS_Set_the_inner_circle_parameters_AddSubVIInstanceData();
	return CS_Set_the_inner_circle_parameters_Run();
}


/****** Library interface **********/


void CSSettheinnercircleparameters(Boolean ShowResult,
Boolean ShowEdgesFound,
Boolean ShowSearchLines,
Boolean ShowSearchArea)
{
	int32 i;
	LVCGenRTInit();

	/* Init globals */
	for (i=0;i<sizeof(globTable)/sizeof(InitFPTermsFunc);i++) {
		(*(globTable[i]))(NULL, false);
	}

	/* Init VI Constants */
	for (i=0;i<sizeof(globConstInitTable)/sizeof(VoidFn);i++) {
		(*(globConstInitTable[i]))();
	}

	CS_Set_the_inner_circle_parameters_AddSubVIInstanceData();
	CS_Set_the_inner_circle_parameters_InitVIConstantList();

	CS_Set_the_inner_circle_parameters_in_4_Show_Result_1DD = ShowResult;
	CS_Set_the_inner_circle_parameters_in_3_Show_Edges_Found_217 = ShowEdgesFound;
	CS_Set_the_inner_circle_parameters_in_2_Show_Search_Lines_225 = ShowSearchLines;
	CS_Set_the_inner_circle_parameters_in_1_Show_Search_Area_233 = ShowSearchArea;
	/* Call top level VI main function */
	CS_Set_the_inner_circle_parameters_Run();

	/* Cleanup VI Constants */
	for (i=0;i<sizeof(globConstCleanupTable)/sizeof(VoidFn);i++) {
		(*(globConstCleanupTable[i]))();
	}

	/* Cleanup globals */
	for (i=0;i<sizeof(globCleanupTable)/sizeof(VoidFn);i++) {
		(*(globCleanupTable[i]))(false);
	}

	for (i=0;i<sizeof(lsrCleanupTable)/sizeof(VoidFn);i++) {
		(*(lsrCleanupTable[i]))();
	}

	LVCGenRTEnd();
	return;
}



/****** End of generated code **********/


