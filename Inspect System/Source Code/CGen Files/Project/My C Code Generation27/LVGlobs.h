#ifndef _LVGlobs_h
#define _LVGlobs_h
#define	HOST_IP_ADDRESS	"192.168.1.124"
#define	BUILD_SPECIFICATION_ID	""
#include "LVCGenIncludes.h"
#ifdef LV_MAIN
int32 nBigClusterSize = 32;
void GlobFiller(Boolean bShowFrontPanel);
void GlobFiller(Boolean bShowFrontPanel) {}
void Filler(void);
void Filler(void) {}
Boolean InitFPTermsFiller(ArgList* argsIn, Boolean bShowFrontPanel);
Boolean InitFPTermsFiller(ArgList* argsIn, Boolean bShowFrontPanel) { return true; }
InitFPTermsFunc globTable[] = {
	InitFPTermsFiller,
};

extern void IPI_StringChangeOption_AddVIGlobalConstants(void);
VoidFn globConstInitTable[] = {
	Filler,

	IPI_StringChangeOption_AddVIGlobalConstants,
};
VoidFn globConstCleanupTable[] = {
	Filler,
};
CleanUpFunc globCleanupTable[] = {
	GlobFiller,
};

extern void IPI_StringChangeOption_CleanupLSRs(void);
VoidFn lsrCleanupTable[] = {
	Filler,

	IPI_StringChangeOption_CleanupLSRs,
};
#else
extern InitFPTermsFunc globTable[];
extern VoidFn globCleanupTable[];
extern VoidFn globConstInitTable[];
extern VoidFn globConstCleanupTable[];
extern VoidFn lsrCleanupTable[];
extern int32 nBigClusterSize;
#endif /*LV_MAIN*/
#ifdef LV_MAIN
const uInt8 nArrTypeData[] = {
	/* Cluster */
	ClusterDataType, 	0, 	0, 	0, 	3, 	0, 	0, 	0, 	0, 	0, 	0, 	0, 		BooleanDataType, 	0, 	0, 	0, 		int32DataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 	2, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		int16DataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Cluster */
	BigClusterDataType, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 	1, 	0, 	0, 	0, 		Timestamp128DataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 		ArrayDataType, 	0, 	4, 	0, 		ClusterDataType, 	0, 	0, 	0, 		VariantDataType, 	0, 	0, 	0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 	1, 0, 0, 0, 
	/* Array */
	ArrayDataType, 	0, 	0, 	0, 		uCharDataType, 	0, 	0, 	0, 	2, 0, 0, 0, 
	/* Cluster */
	ClusterDataType, 	0, 	0, 	0, 	2, 	0, 	0, 	0, 	2, 	0, 	0, 	0, 		ArrayDataType, 	0, 	6, 	0, 		ArrayDataType, 	0, 	7, 	0, 
	/* Cluster */
	BigClusterDataType, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 	3, 	0, 	0, 	0, 		Timestamp128DataType, 	0, 	0, 	0, 		doubleDataType, 	0, 	0, 	0, 		ClusterDataType, 	0, 	8, 	0, 		ClusterDataType, 	0, 	0, 	0, 		VariantDataType, 	0, 	0, 	0, 
	/* Enum */
	Enum32DataType, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 	10, 
	'Z', 	'e', 	'r', 	'o', 	' ', 	'O', 	'r', 	'd', 	'e', 	'r', 	8, 
	'B', 	'i', 	'l', 	'i', 	'n', 	'e', 	'a', 	'r', 	9, 
	'Q', 	'u', 	'a', 	'd', 	'r', 	'a', 	't', 	'i', 	'c', 	5, 
	'C', 	'u', 	'b', 	'i', 	'c', 	14, 
	'B', 	'i', 	'l', 	'i', 	'n', 	'e', 	'a', 	'r', 	' ', 	'F', 	'i', 	'x', 	'e', 	'd', 0, 
	/* Enum */
	Enum32DataType, 	0, 	0, 	0, 	2, 	0, 	0, 	0, 	7, 
	'A', 	'v', 	'e', 	'r', 	'a', 	'g', 	'e', 	6, 
	'M', 	'e', 	'd', 	'i', 	'a', 	'n', 0, 
	/* Cluster */
	ClusterDataType, 	0, 	0, 	0, 	6, 	0, 	0, 	0, 	4, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 		floatDataType, 	0, 	0, 	0, 		Enum32DataType, 	0, 	10, 	0, 		Enum32DataType, 	0, 	11, 	0, 
	/* Cluster */
	BigClusterDataType, 	0, 	0, 	0, 	11, 	0, 	0, 	0, 	5, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 		ClusterDataType, 	0, 	12, 	0, 		BooleanDataType, 	0, 	0, 	0, 		BooleanDataType, 	0, 	0, 	0, 		BooleanDataType, 	0, 	0, 	0, 		BooleanDataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 		uInt32DataType, 	0, 	0, 	0, 		StringDataType, 	0, 	0, 	0, 
	0
};
uInt32 nArrClusterDataSizes[] = {
0,	0,	0,	0,	0,	0
};
const uInt32 nArrTypeDataOffsets[] = {
	0, 	24, 	36, 	48, 	60, 	72, 	104, 	116, 	128, 	148, 	180, 	240, 	264, 	300, 	0
};
const uInt32 nArrTypeDataSize = 14;
#else
extern const uInt8 nArrTypeData[];
extern uInt32 nArrClusterDataSizes[];
extern const uInt32 nArrTypeDataOffsets[];
extern const uInt32 nArrTypeDataSize;
#endif
typedef struct cl_00000 {
	Boolean	el_0;
	int32	el_1;
	VoidHand	el_2;
} cl_00000;
typedef struct cl_50000 {
	int32	refcnt;
	int32	bStatic;
	Timestamp128	el_0;
	float64	el_1;
	PDAArrPtr	el_2;
	cl_00000	el_3;
	VoidHand	el_4;
} cl_50000;
typedef struct cl_80000 {
	PDAArrPtr	el_0;
	PDAArrPtr	el_1;
} cl_80000;
typedef struct cl_90000 {
	int32	refcnt;
	int32	bStatic;
	Timestamp128	el_0;
	float64	el_1;
	cl_80000	el_2;
	cl_00000	el_3;
	VoidHand	el_4;
} cl_90000;
typedef struct cl_C0000 {
	uInt32	el_0;
	uInt32	el_1;
	uInt32	el_2;
	float32	el_3;
	Enum32	el_4;
	Enum32	el_5;
} cl_C0000;
typedef struct cl_D0000 {
	int32	refcnt;
	int32	bStatic;
	uInt32	el_0;
	cl_C0000	el_1;
	Boolean	el_2;
	Boolean	el_3;
	Boolean	el_4;
	Boolean	el_5;
	uInt32	el_6;
	uInt32	el_7;
	uInt32	el_8;
	uInt32	el_9;
	VoidHand	el_10;
} cl_D0000;
#ifdef LV_MAIN
uInt32 gCallerID = 0;
#else
extern uInt32 gCallerID;
#endif /* LV_MAIN */


/**
* Profiling stubs
*/
#ifdef LV_MAIN
uInt32 gProfilingInfoSize = 0;
#else
extern uInt32 gProfilingInfoSize;
#endif /* LV_MAIN */

#ifdef LV_MAIN
ProfilingInfo* gProfilingInfo=NULL;
#else
extern ProfilingInfo* gProfilingInfo;
#endif /* LV_MAIN */


/**
* Call library node callback stubs
*/
#ifdef LV_MAIN
CLNInstanceData *gArrCLNInstanceData = NULL;
int32 gnArrCLNInstanceDataItems = 0;
#endif

/**
* ISR stubs
*/

#ifdef LV_MAIN
ISRInfoTableEntry gISRInfoTable[] = {{NULL, NULL}};
#else
extern ISRInfoTableEntry gISRInfoTable[];
#endif
#endif
