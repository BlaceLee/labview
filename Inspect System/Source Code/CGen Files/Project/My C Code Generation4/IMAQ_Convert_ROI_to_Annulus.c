/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: IMAQ Convert ROI to Annulus
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\vision\ROI Conversion.llb\IMAQ Convert ROI to Annulus
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
#include "LVCGenIncludes.h"
#if CGEN_VERSION != 17000
#error CGenerator version mismatch
#endif
/* VI heap data */
struct _IMAQ_Convert_ROI_to_Annulus_heap { 
	cl_190000 c________________;
	cl_190000 c_Coordinates_1;
	cl_C0000 c______________;
	cl_00000 c_error_in__no_error__3;
	float64 n_y;
	float64 n____x_y_2;
	float64 n____x_y_3;
	cl_120000 c_ROI_Descriptor_1;
	uInt32 dw__________Type;
	uInt32 dw_Type;
	int32 l__________Coordinates_3_;
	int32 l__________Coordinates_2_;
	int32 l_Index;
	int32 l__________Coordinates_1_;
	int32 l__________Coordinates_4_;
	int32 l__________Coordinates_5_;
	int32 l__________Coordinates_0_;
	cl_180000* c__________CT_3;
	cl_180000* c__________CT_5;
	cl_180000* c__________CT_2;
	VoidHand Args1AE_1;  
	PDAArrPtr a________________Contours;
	PDAArrPtr a__________Coordinates;
	Boolean b__________status_CS;
	Boolean b__________status;
	Boolean b________x___y_;
	Boolean b________x___y__CS;
} _DATA_SECTION __IMAQ_Convert_ROI_to_Annulus_heap; /* heap */

static struct _IMAQ_Convert_ROI_to_Annulus_heap _DATA_SECTION *heap = &__IMAQ_Convert_ROI_to_Annulus_heap; /* heap */

struct _tIMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeap {
	uInt8	refCnt;
	cl_180000*	i150;
	cl_190000	i1F1;
} _DATA_SECTION __IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeap;
static struct _tIMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeap _DATA_SECTION *IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr = &__IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeap;

_DATA_SECTION  cl_180000 IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42_init_ = 
{1, 1, 0, 0, 0, 0, 0.0000000000000000000E+0, 0.0000000000000000000E+0};

struct _g_array_1 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[1];
};
_DATA_SECTION static  struct _g_array_1 g_array_1 = 
{int32DataType, 1, 1, true, 1, 0
};

struct _g_array_2 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[1];
};
_DATA_SECTION static  struct _g_array_2 g_array_2 = 
{int32DataType, 1, 1, true, 1, 0
};

_DATA_SECTION static  cl_C0000 g_cluster_2 = 
{0, 0, (PDAArrPtr)(&g_array_2)};

struct _g_array_3 {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	cl_C0000	data[1];
};
_DATA_SECTION static  struct _g_array_3 g_array_3 = 
{0xC0000 | ClusterDataType, 1, 1, true, 1, 0
};

_DATA_SECTION  cl_120000 IMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6_init_ = 
{(PDAArrPtr)(&g_array_1), (PDAArrPtr)(&g_array_3)};

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};

_DATA_SECTION static  cl_180000 g_cluster_6 = 
{1, 1, 0, 0, 0, 0, 0.0000000000000000000E+0, 0.0000000000000000000E+0};

_DATA_SECTION static  cl_190000 g_cluster_7 = 
{0, 0, 0, 0, 0, 0};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION IMAQ_Convert_ROI_to_Annulus_CleanupLSRs(void);
void _TEXT_SECTION IMAQ_Convert_ROI_to_Annulus_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION IMAQ_Convert_ROI_to_Annulus_AddVIGlobalConstants(void);
void _TEXT_SECTION IMAQ_Convert_ROI_to_Annulus_AddVIGlobalConstants(void) {
	MemSet(IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr,sizeof(*(IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr)),0);
}


/****** Cleanup VI Constants  **********/


void _TEXT_SECTION IMAQ_Convert_ROI_to_Annulus_CleanupVIGlobalConstants(void);
void _TEXT_SECTION IMAQ_Convert_ROI_to_Annulus_CleanupVIGlobalConstants(void) {
	(IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr->refCnt)--;
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION IMAQ_Convert_ROI_to_Annulus_InitVIConstantList(void);
void _TEXT_SECTION IMAQ_Convert_ROI_to_Annulus_InitVIConstantList(void) {
	(IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr->refCnt)++;
}


/****** Block diagram code **********/


cl_120000 IMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6;
static DataType dtIMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6 = 0x120000 | ClusterDataType;
cl_00000 IMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13;
static DataType dtIMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13 = 0x0 | ClusterDataType;
cl_00000 IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A_tmp_;
static cl_00000* IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A = &IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A_tmp_;
static DataType dtIMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A = 0x0 | ClusterDataType;
extern eRunStatus IMAQ_Convert_ROI_to_Annulus_Run(
				DataType dtIMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13, cl_00000  IMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13,
				DataType dtIMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6, cl_120000  IMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6,
				DataType dtIMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A, cl_00000*  IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A,
				DataType dtIMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42, cl_180000**  IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	*IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42 = &IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42_init_;
	PDAClusterIncRefCnt(IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42, 0x180000 | BigClusterDataType, 1);
	*IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A = IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A_init_;
	PDAClusterIncRefCnt(IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A, 0x0 | ClusterDataType, 1);
	IMAQ_Convert_ROI_to_Annulus_InitVIConstantList();
	{
		MemMove(&heap->c_error_in__no_error__3, &IMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13, sizeof(cl_00000));
		PDAClusterIncRefCnt(&IMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13,0x0 | ClusterDataType,1);
		/* Cluster Inc Ref Count:  FPTerm*/
		{
			cl_00000* cl_001 = (cl_00000*)&heap->c_error_in__no_error__3;
			PDAStrIncRefCnt(cl_001->el_2, (uInt16)1); /* FPTerm */
		}
/* Unbundle */
		{
			cl_00000* cl_002 = (cl_00000*)&heap->c_error_in__no_error__3;
			heap->b__________status = cl_002->el_0;
			/* Free Cluster heap->c_error_in__no_error__3*/
			{
				cl_00000* cl_003 = (cl_00000*)&heap->c_error_in__no_error__3;
				if (cl_003->el_2 && (((PDAStrPtr)cl_003->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_003->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_003->el_2)->staticStr)) {
						MemHandleFree( cl_003->el_2 );
						cl_003->el_2=NULL;
					}
				}
			}
		}
		{ /* Select */
			heap->b__________status_CS = heap->b__________status;
			/* begin case */
			if ( heap->b__________status_CS ) {
				{
					{
						MemMove(&(IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr->i1F1),&g_cluster_7,GetClusterSize( 0x190000 | ClusterDataType ));
						PDAClusterIncRefCnt(&g_cluster_7,0x190000 | ClusterDataType,1);
					}
					heap->c_Coordinates_1 = IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr->i1F1;
					heap->c__________CT_2 = NULL;
					PDAClusterSet( &heap->c_Coordinates_1, 0x190000 | ClusterDataType, &heap->c__________CT_2, 0x180000 | BigClusterDataType);
	}
			} /* end case */
			/* begin case */
			else {
				/*********************************************************************************/
				/* If no error, check the type of the first contour. */
				/* If Annulus, transform the coordinates into a Circle/Annulus Data Type. */
				/*********************************************************************************/
				{
					heap->l_Index = 0;
					heap->dw_Type = 7;
					MemMove(&heap->c_ROI_Descriptor_1, &IMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6, sizeof(cl_120000));
					PDAClusterIncRefCnt(&IMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6,0x120000 | ClusterDataType,1);
/* Unbundle by name */
					{
						cl_120000* cl_004 = (cl_120000*)&heap->c_ROI_Descriptor_1;
						PDAArrIncRefCnt(cl_004->el_1, (uInt16)1); /*  */
						heap->a________________Contours = cl_004->el_1;
	/* Free Cluster heap->c_ROI_Descriptor_1*/
						{
							cl_120000* cl_005 = (cl_120000*)&heap->c_ROI_Descriptor_1;
		if ((cl_005->el_0) && ((cl_005->el_0)->refcnt > 0)) {
								if (((cl_005->el_0)->refcnt == 1) && ((cl_005->el_0)->staticArray == false)) {
									(cl_005->el_0)->refcnt--;
									MemHandleFree( cl_005->el_0 );
									cl_005->el_0=NULL;
								}
								else
								 	PDAArrFree(cl_005->el_0);
							}
	PDAArrFree(cl_005->el_1);
						}
					}
					{ /* Array Index 1D */
						int32 nIndex = 0;
						nIndex = (int32)heap->l_Index;
						if ((nIndex >= 0) && heap->a________________Contours && (nIndex < NthDim(heap->a________________Contours, (ArrDimSize)0))) {
							MemSet( &heap->c______________, GetClusterSize( heap->a________________Contours->datatype ), 0 );
							PDAClusterSet(NthElem(heap->a________________Contours, nIndex), heap->a________________Contours->datatype, &heap->c______________, heap->a________________Contours->datatype );
						}
						else {
							MemSet( &heap->c______________, DataSize(heap->a________________Contours->datatype), 0);
						}
					}
	PDAArrFree(heap->a________________Contours);
/* Unbundle */
					{
						cl_C0000* cl_006 = (cl_C0000*)&heap->c______________;
						heap->dw__________Type = cl_006->el_1;
						PDAArrIncRefCnt(cl_006->el_2, (uInt16)1); /*  */
						heap->a__________Coordinates = cl_006->el_2;
						/* Free Cluster heap->c______________*/
						{
							cl_C0000* cl_007 = (cl_C0000*)&heap->c______________;
				if ((cl_007->el_2) && ((cl_007->el_2)->refcnt > 0)) {
								if (((cl_007->el_2)->refcnt == 1) && ((cl_007->el_2)->staticArray == false)) {
									(cl_007->el_2)->refcnt--;
									MemHandleFree( cl_007->el_2 );
									cl_007->el_2=NULL;
								}
								else
								 	PDAArrFree(cl_007->el_2);
							}
						}
					}
					/**/
					/* 等于？ */
					/**/
					heap->b________x___y_ =  (7 == heap->dw__________Type);
					{ /* Select */
						heap->b________x___y__CS = heap->b________x___y_;
						/* begin case */
						if ( heap->b________x___y__CS ) {
							{
								heap->n_y = 1.0000000000000000000E+3;
								/**/
								/* 数组至簇转换 */
								/**/
								if (!PDAArrToClust(heap->a__________Coordinates, 0xB0000 | ArrayDataType, (int32)6, &(heap->c________________), 0x190000 | ClusterDataType)) {
									CGenErr();
								}
/* Unbundle */
								{
									cl_190000* cl_008 = (cl_190000*)&heap->c________________;
									heap->l__________Coordinates_0_ = cl_008->el_0;
									heap->l__________Coordinates_1_ = cl_008->el_1;
									heap->l__________Coordinates_2_ = cl_008->el_2;
									heap->l__________Coordinates_3_ = cl_008->el_3;
									heap->l__________Coordinates_4_ = cl_008->el_4;
									heap->l__________Coordinates_5_ = cl_008->el_5;
								}
								/**/
								/* 除 */
								/**/
								PDAFltBinop( &heap->l__________Coordinates_5_, int32DataType, &heap->n_y, doubleDataType, opDiv, &heap->n____x_y_2, doubleDataType);
								/**/
								/* 除 */
								/**/
								PDAFltBinop( &heap->l__________Coordinates_4_, int32DataType, &heap->n_y, doubleDataType, opDiv, &heap->n____x_y_3, doubleDataType);
/* Bundle */
								{
									cl_180000* cl_009 = NULL;
									heap->c__________CT_2 = PDAClusterNewEmpty(0x180000 | BigClusterDataType);
									cl_009 = (cl_180000*)heap->c__________CT_2;
									cl_009->el_0 = heap->l__________Coordinates_0_;
									cl_009->el_1 = heap->l__________Coordinates_1_;
									cl_009->el_2 = heap->l__________Coordinates_2_;
									cl_009->el_3 = heap->l__________Coordinates_3_;
									cl_009->el_4 = heap->n____x_y_3;
									cl_009->el_5 = heap->n____x_y_2;
								}
							}
						} /* end case */
						/* begin case */
						else {
							{
								/* Free unwired input select tunnel. */
	if ((heap->a__________Coordinates) && ((heap->a__________Coordinates)->refcnt > 0)) {
									if (((heap->a__________Coordinates)->refcnt == 1) && ((heap->a__________Coordinates)->staticArray == false)) {
										(heap->a__________Coordinates)->refcnt--;
										MemHandleFree( heap->a__________Coordinates );
										heap->a__________Coordinates=NULL;
									}
									else
									 	PDAArrFree(heap->a__________Coordinates);
								}
								if ( !IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr->i150 ) {
									{
										IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr->i150 = (cl_180000*)&g_cluster_6;
									}
								}
								PDAClusterIncRefCnt(&IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr->i150,0x180000 | BigClusterDataType,1);
								heap->c__________CT_2 = IMAQ_Convert_ROI_to_Annulus_GlobalConstantsHeapPtr->i150;
								/* Cluster Inc Ref Count:  BDConst - alloc type*/
								if(heap->c__________CT_2) heap->c__________CT_2->refcnt += 1;
							}
						} /* end case */
					} /* end switch */
				}
			} /* end case */
		} /* end switch */
		if (IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42) {
			/* Free Cluster IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42*/
			PDAClusterFree( IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42, 0x180000 | BigClusterDataType );
			PDAClusterCopyOnModify(&heap->c__________CT_2, 0x180000 | BigClusterDataType, IMAQ_Convert_ROI_to_Annulus_out_1_Annulus_42);
		}
		else {
		}
		if (IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A) {
			/* Free Cluster IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A*/
			{
				cl_00000* cl_012 = (cl_00000*)IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A;
				if (cl_012->el_2 && (((PDAStrPtr)cl_012->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_012->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_012->el_2)->staticStr)) {
						MemHandleFree( cl_012->el_2 );
						cl_012->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c_error_in__no_error__3, 0x0 | ClusterDataType, IMAQ_Convert_ROI_to_Annulus_out_0_error_out_2A);
		}
		else {
		}
		IMAQ_Convert_ROI_to_Annulus_CleanupVIGlobalConstants();
		PDAClusterFree( &IMAQ_Convert_ROI_to_Annulus_in_1_ROI_Descriptor_C6, 0x120000 | ClusterDataType);
		PDAClusterFree( &IMAQ_Convert_ROI_to_Annulus_in_0_error_in__no_error__13, 0x0 | ClusterDataType);
		return eFinished;
	}
}


/****** End of generated code **********/


