/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: 孔径结果转换.vi
 *	Generated from: C:\Users\delluser001\Desktop\铜垫片检测\LX Inspect System\Source Code\SubVIs\AOI VI\孔径结果转换.vi
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
#include "A_____________Lib.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _A______________heap { 
	float64 n____x_y;
	float64 n____x_y_1;
	float64 n______________________________;
	float64 n____x_y_2;
	float64 n_______________________________1;
	float64 n_y;
	float64 n____x_y_4;
	float64 n______________________________1;
	float64 n________________Radius__Pixels;
	float64 n_____________________________1;
	float64 n____x_y_3;
	cl_B0000* c_Fitted_Circle__Find_Circular_;
	VoidHand s_Global_System_vi___________;
	VoidHand s_Global_System_vi_____K;
	VoidHand s_Global_System_vi_____B;
	VoidHand ArgsFD_1;  
	VoidHand s______________________F_______;
	VoidHand s_Global_System_vi_________;
	int16 i______6_;
} _DATA_SECTION __A______________heap; /* heap */

static struct _A______________heap _DATA_SECTION *heap = &__A______________heap; /* heap */

_DATA_SECTION  cl_B0000 A______________in_0_Fitted_Circle__Find_Circular_Edge_1__2B_init_ = 
{1, 1, 
{0.0000000000000000000E+0, 0.0000000000000000000E+0}, 0.0000000000000000000E+0, 
{0.0000000000000000000E+0, 0.0000000000000000000E+0}, 0.0000000000000000000E+0, 0.0000000000000000000E+0, 0.0000000000000000000E+0, 0.0000000000000000000E+0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION A______________CleanupLSRs(void);
void _TEXT_SECTION A______________CleanupLSRs(void) {
}


/****** Add Sub VI Instance Data to global list **********/


void _TEXT_SECTION A______________AddSubVIInstanceData(void);
void _TEXT_SECTION A______________AddSubVIInstanceData(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION A______________AddVIGlobalConstants(void);
void _TEXT_SECTION A______________AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION A______________InitVIConstantList(void);
void _TEXT_SECTION A______________InitVIConstantList(void) {
}


/****** Block diagram code **********/


static VoidHand F_____________E0_init_ = NULL;
static VoidHand *F_____________E0 = &F_____________E0_init_;
static DataType dtF_____________E0 = StringDataType;
cl_B0000* A______________in_0_Fitted_Circle__Find_Circular_Edge_1__2B = &A______________in_0_Fitted_Circle__Find_Circular_Edge_1__2B_init_;
static DataType dtA______________in_0_Fitted_Circle__Find_Circular_Edge_1__2B = 0xB0000 | BigClusterDataType;
float64 A______________out_0_x_y_EE_init_ = 0.0000000000000000000E+0 ;
static float64* A______________out_0_x_y_EE = &A______________out_0_x_y_EE_init_;
static DataType dtA______________out_0_x_y_EE = doubleDataType;
extern eRunStatus A______________Run(	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	extern VoidHand Global_System_A_____B_40;
	extern VoidHand Global_System_A_____K_42;
	extern VoidHand Global_System_A____________39;
	extern VoidHand Global_System_A__________41;
	*F_____________E0 = PDAStrNewFromStr(_LVT(""));
	A______________InitVIConstantList();
	{
		heap->i______6_ = 4;
		heap->n_y = 2.0000000000000000000E+0;
		heap->s_Global_System_vi_____B = Global_System_A_____B_40;
		PDAStrIncRefCnt(heap->s_Global_System_vi_____B, (uInt16)1);
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_Global_System_vi_____B), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n______________________________), doubleDataType );
	if (heap->s_Global_System_vi_____B && (((PDAStrPtr)heap->s_Global_System_vi_____B)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_Global_System_vi_____B)->refcnt == 0) && (!((PDAStrPtr)heap->s_Global_System_vi_____B)->staticStr)) {
				MemHandleFree( heap->s_Global_System_vi_____B );
				heap->s_Global_System_vi_____B=NULL;
			}
		}
		heap->s_Global_System_vi_____K = Global_System_A_____K_42;
		PDAStrIncRefCnt(heap->s_Global_System_vi_____K, (uInt16)1);
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_Global_System_vi_____K), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n_______________________________1), doubleDataType );
	if (heap->s_Global_System_vi_____K && (((PDAStrPtr)heap->s_Global_System_vi_____K)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_Global_System_vi_____K)->refcnt == 0) && (!((PDAStrPtr)heap->s_Global_System_vi_____K)->staticStr)) {
				MemHandleFree( heap->s_Global_System_vi_____K );
				heap->s_Global_System_vi_____K=NULL;
			}
		}
		heap->s_Global_System_vi___________ = Global_System_A____________39;
		PDAStrIncRefCnt(heap->s_Global_System_vi___________, (uInt16)1);
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_Global_System_vi___________), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n______________________________1), doubleDataType );
	if (heap->s_Global_System_vi___________ && (((PDAStrPtr)heap->s_Global_System_vi___________)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_Global_System_vi___________)->refcnt == 0) && (!((PDAStrPtr)heap->s_Global_System_vi___________)->staticStr)) {
				MemHandleFree( heap->s_Global_System_vi___________ );
				heap->s_Global_System_vi___________=NULL;
			}
		}
		heap->s_Global_System_vi_________ = Global_System_A__________41;
		PDAStrIncRefCnt(heap->s_Global_System_vi_________, (uInt16)1);
		/**/
		/* 分数/指数字符串至数值转换 */
		/**/
		PDAStrTextToNum( &(heap->s_Global_System_vi_________), StringDataType, 'f', NULL, uCharDataType, NULL, uCharDataType, NULL, &(heap->n_____________________________1), doubleDataType );
	if (heap->s_Global_System_vi_________ && (((PDAStrPtr)heap->s_Global_System_vi_________)->refcnt > 0)) {
			if ((--((PDAStrPtr)heap->s_Global_System_vi_________)->refcnt == 0) && (!((PDAStrPtr)heap->s_Global_System_vi_________)->staticStr)) {
				MemHandleFree( heap->s_Global_System_vi_________ );
				heap->s_Global_System_vi_________=NULL;
			}
		}
		/**/
		/* 除 */
		/**/
		PDAFltBinop( &heap->n_____________________________1, doubleDataType, &heap->n______________________________1, doubleDataType, opDiv, &heap->n____x_y_3, doubleDataType);
		heap->c_Fitted_Circle__Find_Circular_ = (cl_B0000*)A______________in_0_Fitted_Circle__Find_Circular_Edge_1__2B;
		PDAClusterIncRefCnt(&A______________in_0_Fitted_Circle__Find_Circular_Edge_1__2B,0xB0000 | BigClusterDataType,1);
/* Unbundle by name */
		{
			cl_B0000* cl_001;
			if (!heap->c_Fitted_Circle__Find_Circular_) heap->c_Fitted_Circle__Find_Circular_ = PDAClusterNewEmpty( 0xB0000 | BigClusterDataType );
			cl_001 = (cl_B0000*)heap->c_Fitted_Circle__Find_Circular_;
			heap->n________________Radius__Pixels = cl_001->el_1;
	/* Free Cluster heap->c_Fitted_Circle__Find_Circular_*/
			PDAClusterFree( &heap->c_Fitted_Circle__Find_Circular_, 0xB0000 | BigClusterDataType );
		}
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n________________Radius__Pixels, doubleDataType, &heap->n_y, doubleDataType, opMult, &heap->n____x_y_4, doubleDataType);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n____x_y_4, doubleDataType, &heap->n____x_y_3, doubleDataType, opMult, &heap->n____x_y_1, doubleDataType);
		/**/
		/* 乘 */
		/**/
		PDAFltBinop( &heap->n____x_y_1, doubleDataType, &heap->n_______________________________1, doubleDataType, opMult, &heap->n____x_y_2, doubleDataType);
		/**/
		/* 加 */
		/**/
		PDAFltBinop( &heap->n____x_y_2, doubleDataType, &heap->n______________________________, doubleDataType, opPlus, &heap->n____x_y, doubleDataType);
		*A______________out_0_x_y_EE = heap->n____x_y;
		/**/
		/* 数值至小数字符串转换 */
		/**/
		if (!(PDAStrNumToText( &(heap->n____x_y), doubleDataType, NULL, uCharDataType, &(heap->i______6_), int16DataType, (int8)'f', &(heap->s______________________F_______), StringDataType ))){
			CGenErr();
		}
	PDAStrFree(*F_____________E0);
		*F_____________E0 = PDAStrCopyOnModify(heap->s______________________F_______);
		if (*F_____________E0 && (((PDAStrPtr)*F_____________E0)->refcnt == 1) && (((PDAStrPtr)*F_____________E0)->staticStr == false)) {
	if (*F_____________E0 && (((PDAStrPtr)*F_____________E0)->refcnt > 0)) {
				if ((--((PDAStrPtr)*F_____________E0)->refcnt == 0) && (!((PDAStrPtr)*F_____________E0)->staticStr)) {
					MemHandleFree( *F_____________E0 );
					*F_____________E0=NULL;
				}
			}
			*F_____________E0 = NULL;
		}
		else
		{
	if (*F_____________E0 && (((PDAStrPtr)*F_____________E0)->refcnt > 0)) {
				if ((--((PDAStrPtr)*F_____________E0)->refcnt == 0) && (!((PDAStrPtr)*F_____________E0)->staticStr)) {
					MemHandleFree( *F_____________E0 );
					*F_____________E0=NULL;
				}
			}
		}
		PDAClusterFree( &A______________in_0_Fitted_Circle__Find_Circular_Edge_1__2B, 0xB0000 | BigClusterDataType);
		return eFinished;
	}
}
/****** Main Entry Point for VI **********/

TextPtr A______________VIName = "\277\327\276\266\275\341\271\373\327\252\273\273.vi";

eRunStatus A______________Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause);
eRunStatus A______________Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList* argsIn, ArgList* argsOut, Boolean *pause){
	A______________AddSubVIInstanceData();
	return A______________Run();
}


/****** Library interface **********/


