/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IPI_DrawRent.vi
 *	Generated from: C:\Users\delluser001\Desktop\Õ≠µÊ∆¨ºÏ≤‚\LX Inspect System\Source Code\SubVIs\CCD\IPI_DrawRent.vi
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
#include "IPI_DrawRentLib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */

_DATA_SECTION static  cl_A0000 g_cluster_1 = 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_B0000 g_cluster_2 = 
{(PDAStrPtr)(&g_string_1)};

_DATA_SECTION static  cl_A0000 g_cluster_3 = 
{0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION static  cl_B0000 g_cluster_4 = 
{(PDAStrPtr)(&g_string_2)};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IPI_DrawRent_CleanupLSRs(void);
void _TEXT_SECTION IPI_DrawRent_CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION IPI_DrawRent_AddSubVIInstanceData(void);
void _TEXT_SECTION IPI_DrawRent_AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IPI_DrawRent_AddVIGlobalConstants(void);
void _TEXT_SECTION IPI_DrawRent_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IPI_DrawRent_InitVIConstantList(void);
void _TEXT_SECTION IPI_DrawRent_InitVIConstantList(void) {
}


/****** Block diagram code **********/


static cl_A0000 fp4F;
static DataType dtfp4F = 0xA0000 | ClusterDataType;
static cl_B0000 fp34_init_;
static cl_B0000* fp34 = &fp34_init_;
static DataType dtfp34 = 0xB0000 | ClusterDataType;
static cl_A0000 fp15E;
static DataType dtfp15E = 0xA0000 | ClusterDataType;
static cl_B0000 fp143_init_;
static cl_B0000* fp143 = &fp143_init_;
static DataType dtfp143 = 0xB0000 | ClusterDataType;
extern eRunStatus IPI_DrawRent_Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	fp4F = g_cluster_1;
	PDAClusterIncRefCnt(&fp4F, 0xA0000 | ClusterDataType, 1);
	*fp34 = g_cluster_2;
	PDAClusterIncRefCnt(fp34, 0xB0000 | ClusterDataType, 1);
	fp15E = g_cluster_3;
	PDAClusterIncRefCnt(&fp15E, 0xA0000 | ClusterDataType, 1);
	*fp143 = g_cluster_4;
	PDAClusterIncRefCnt(fp143, 0xB0000 | ClusterDataType, 1);
	IPI_DrawRent_InitVIConstantList();
	{
		PDAClusterFree( &fp4F, 0xA0000 | ClusterDataType);
		PDAClusterFree( fp34, 0xB0000 | ClusterDataType);
		PDAClusterFree( &fp15E, 0xA0000 | ClusterDataType);
		PDAClusterFree( fp143, 0xB0000 | ClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr IPI_DrawRent_VIName = "IPI_DrawRent.vi";

eRunStatus IPI_DrawRent_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus IPI_DrawRent_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	IPI_DrawRent_AddSubVIInstanceData();
	return IPI_DrawRent_Run();
}


/****** Library interface **********/


void IPI_DrawRent()
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

	IPI_DrawRent_AddSubVIInstanceData();
	IPI_DrawRent_InitVIConstantList();

	/* Call top level VI main function */
	IPI_DrawRent_Run();

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


