/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_Value Test.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\CCD\IPI_Value Test.vi
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
#include "IPI_Value_TestLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IPI_Value_Test_heap { 
	float64 n_Stand;
	float64 n__________CT;
	float64 n______________________________;
	float64 n________0_1_______0_1_;
	float64 n_____;
	float64 n______1;
	float64 n_input;
	float64 n__________CT_1;
	Boolean b_____________________________C;
	Boolean b____________________________;
} _DATA_SECTION __IPI_Value_Test_heap; /* heap */

static struct _IPI_Value_Test_heap _DATA_SECTION *heap = &__IPI_Value_Test_heap; /* heap */



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_Value_Test_CleanupLSRs(void);
void _TEXT_SECTION IPI_Value_Test_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_Value_Test_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_Value_Test_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_Value_Test_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_Value_Test_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_Value_Test_InitVIConstantList(void);
void _TEXT_SECTION IPI_Value_Test_InitVIConstantList(void) {
}


/****** Block diagram code **********/


float64 IPI_Value_Test_in_3_input_5B_init_ = 0.0000000000000000000E+0 ;
static float64* IPI_Value_Test_in_3_input_5B = &IPI_Value_Test_in_3_input_5B_init_;
static DataType dtIPI_Value_Test_in_3_input_5B = doubleDataType;
float64 IPI_Value_Test_in_2_A______B6_init_ = 0.0000000000000000000E+0 ;
static float64* IPI_Value_Test_in_2_A______B6 = &IPI_Value_Test_in_2_A______B6_init_;
static DataType dtIPI_Value_Test_in_2_A______B6 = doubleDataType;
float64 IPI_Value_Test_in_1_A______D1_init_ = 0.0000000000000000000E+0 ;
static float64* IPI_Value_Test_in_1_A______D1 = &IPI_Value_Test_in_1_A______D1_init_;
static DataType dtIPI_Value_Test_in_1_A______D1 = doubleDataType;
float64 IPI_Value_Test_out_0_output_value_17F_init_ = 0.0000000000000000000E+0 ;
static float64* IPI_Value_Test_out_0_output_value_17F = &IPI_Value_Test_out_0_output_value_17F_init_;
static DataType dtIPI_Value_Test_out_0_output_value_17F = doubleDataType;
float64 IPI_Value_Test_in_0_Stand_1CB_init_ = 0.0000000000000000000E+0 ;
static float64* IPI_Value_Test_in_0_Stand_1CB = &IPI_Value_Test_in_0_Stand_1CB_init_;
static DataType dtIPI_Value_Test_in_0_Stand_1CB = doubleDataType;
extern eRunStatus IPI_Value_Test_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	IPI_Value_Test_InitVIConstantList();
	{
		heap->n_____ = *IPI_Value_Test_in_1_A______D1;
		heap->n_input = *IPI_Value_Test_in_3_input_5B;
		heap->n______1 = *IPI_Value_Test_in_2_A______B6;
		/**/
		/* 判定范围并强制转换 */
		/**/
		PDAInRangeCoerce( &(heap->n______1), doubleDataType, &(heap->n_input), doubleDataType, &(heap->n_____), doubleDataType, true, true, &(heap->b____________________________), &(heap->n______________________________), doubleDataType );
			heap->n_Stand = *IPI_Value_Test_in_0_Stand_1CB;
		{ /* Select */
			heap->b_____________________________C = heap->b____________________________;
			/* begin case */
			if ( heap->b_____________________________C ) {
				{
					heap->n__________CT = heap->n______________________________;
				}
			} /* end case */
			/* begin case */
			else {
				{
					/**/
					/* 随机数(0-1) */
					/**/
					heap->n________0_1_______0_1_ = ((float32)SysRandom(0)/(float32)sysRandomMax);
					/**/
					/* 加 */
					/**/
					PDAFltBinop( &heap->n________0_1_______0_1_, doubleDataType, &heap->n_Stand, doubleDataType, opPlus, &heap->n__________CT, doubleDataType);
				}
			} /* end case */
		} /* end switch */
		*IPI_Value_Test_out_0_output_value_17F = heap->n__________CT;
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_Value_Test_VIName = "IPI_Value Test.vi";

eRunStatus IPI_Value_Test_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_Value_Test_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_Value_Test_AddSubVIInstanceData();
	return IPI_Value_Test_Run();
}


/****** Library interface **********/


void IPI_ValueTest(float64 input,
float64 Ctrl1,
float64 Ctrl2,
float64 Stand,
float64 *outputvalue)
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

	IPI_Value_Test_AddSubVIInstanceData();
	IPI_Value_Test_InitVIConstantList();

	IPI_Value_Test_in_3_input_5B = &(input);
	IPI_Value_Test_in_2_A______B6 = &(Ctrl1);
	IPI_Value_Test_in_1_A______D1 = &(Ctrl2);
	IPI_Value_Test_in_0_Stand_1CB = &(Stand);
	/* Call top level VI main function */
	IPI_Value_Test_Run();
	*outputvalue = *IPI_Value_Test_out_0_output_value_17F;

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


