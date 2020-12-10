/****************************************************************************************
 *	LabVIEW (TM) Code Generator 17.0.1f3
 *	(C) Copyright 1997-2011 by National Instruments Corp.
 *	All rights reserved.
 *	Delimited VI name: Find First Error.vi
 *	Generated from: C:\Program Files (x86)\National Instruments\LabVIEW 2017\vi.lib\Utility\error.llb\Find First Error.vi
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
struct _Find_First_Error_heap { 
	cl_00000 c__________CT;
	cl_00000 c_error_in__no_error__3;
	cl_00000 c__________CT_3;
	cl_00000 c__________CT_1;
	cl_00000 c_error_in__no_error__CS_1;
	int32 l______________;
	int32 l_While_____i_LT;
	int32 l_error_codes_LT;
	int32 l___1_x_1;
	int32 l_While_____i_1;
	int32 l_error_codes_LT_1;
	VoidHand Args110_1;  
	VoidHand s______________________________;
	VoidHand s_source_messages;
	VoidHand Args10A_1;  
	PDAArrPtr a_error_codes;
	PDAArrPtr a_error_codes_LT;
	Boolean b_While_____End;
	Boolean b_______0___x____0__CS;
	Boolean b_______0___x____0__LT;
	Boolean c_error_in__no_error__CS;
	Boolean b____________x____y_;
	Boolean b_______0___x____0__CS_1;
	Boolean b_______0___x____0_;
	Boolean b________________status;
	Boolean b_________x__y___;
} _DATA_SECTION __Find_First_Error_heap; /* heap */

static struct _Find_First_Error_heap _DATA_SECTION *heap = &__Find_First_Error_heap; /* heap */

struct _Find_First_Error_in_2_error_codes_77_init_ {
	DataType	datatype;
	int16	refcnt;
	uInt8	staticArray;
	uInt8	GlobalVariable;
	ArrDimSize	NDims;
	ArrDimSize	dimension_0;
	int32	data[1];
};
_DATA_SECTION   struct _Find_First_Error_in_2_error_codes_77_init_ Find_First_Error_in_2_error_codes_77_init_ = 
{int32DataType, 1, 1, true, 1, 0
};
_DATA_SECTION PDAArrPtr pFind_First_Error_in_2_error_codes_77_init_ = (PDAArrPtr)(&(Find_First_Error_in_2_error_codes_77_init_));

struct _g_string_1 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_1 g_string_1 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 Find_First_Error_in_0_error_in__no_error__1CF_init_ = 
{0, 0, (PDAStrPtr)(&g_string_1)};

struct _g_string_2 {
	uInt16	refcnt;
	uInt16	staticStr;
	PDAStrLen_t	len;
	TextChar	str[2];
};
static  struct _g_string_2 g_string_2 = 
{1, 1, 0, _LVT("")};

_DATA_SECTION  cl_00000 Find_First_Error_out_0_error_out_28_init_ = 
{0, 0, (PDAStrPtr)(&g_string_2)};



/****** Clean Up Uninitialized Left Shift Registers before program exits to prevent memory leaks **********/


void _TEXT_SECTION Find_First_Error_CleanupLSRs(void);
void _TEXT_SECTION Find_First_Error_CleanupLSRs(void) {
}


/****** Allocate VI Constants  **********/


void _TEXT_SECTION Find_First_Error_AddVIGlobalConstants(void);
void _TEXT_SECTION Find_First_Error_AddVIGlobalConstants(void) {
}


/****** VI Constant Initialization function **********/


void _TEXT_SECTION Find_First_Error_InitVIConstantList(void);
void _TEXT_SECTION Find_First_Error_InitVIConstantList(void) {
}


/****** Block diagram code **********/


Boolean Find_First_Error_out_1_error__61_init_ = false;
static Boolean* Find_First_Error_out_1_error__61 = &Find_First_Error_out_1_error__61_init_;
static DataType dtFind_First_Error_out_1_error__61 = BooleanDataType;
VoidHand Find_First_Error_in_1_source_messages_20 = NULL;
static DataType dtFind_First_Error_in_1_source_messages_20 = StringDataType;
cl_00000 Find_First_Error_in_0_error_in__no_error__1CF;
static DataType dtFind_First_Error_in_0_error_in__no_error__1CF = 0x0 | ClusterDataType;
cl_00000 Find_First_Error_out_0_error_out_28_tmp_;
static cl_00000* Find_First_Error_out_0_error_out_28 = &Find_First_Error_out_0_error_out_28_tmp_;
static DataType dtFind_First_Error_out_0_error_out_28 = 0x0 | ClusterDataType;
extern eRunStatus Find_First_Error_Run(
				DataType dtFind_First_Error_in_0_error_in__no_error__1CF, cl_00000  Find_First_Error_in_0_error_in__no_error__1CF,
				DataType dtFind_First_Error_in_1_source_messages_20, VoidHand  Find_First_Error_in_1_source_messages_20,
				DataType dtFind_First_Error_in_2_error_codes_77, PDAArrPtr  Find_First_Error_in_2_error_codes_77,
				DataType dtFind_First_Error_out_0_error_out_28, cl_00000*  Find_First_Error_out_0_error_out_28,
				DataType dtFind_First_Error_out_1_error__61, Boolean*  Find_First_Error_out_1_error__61	)
{
	Boolean bRunToFinish = true;
	int32 nReady = 1;
	if (!Find_First_Error_in_1_source_messages_20) {
		Find_First_Error_in_1_source_messages_20 = PDAStrNewFromStr(_LVT(""));
	}
	*Find_First_Error_out_0_error_out_28 = Find_First_Error_out_0_error_out_28_init_;
	PDAClusterIncRefCnt(Find_First_Error_out_0_error_out_28, 0x0 | ClusterDataType, 1);
	Find_First_Error_InitVIConstantList();
	{
		MemMove(&heap->c_error_in__no_error__3, &Find_First_Error_in_0_error_in__no_error__1CF, sizeof(cl_00000));
		PDAClusterIncRefCnt(&Find_First_Error_in_0_error_in__no_error__1CF,0x0 | ClusterDataType,1);
		{ /* Select */
			if (!PDAClusterGetElemByPos( &heap->c_error_in__no_error__3, 0x0 | ClusterDataType, 0, &heap->c_error_in__no_error__CS, BooleanDataType )) {
				CGenErr();
			}
			/* begin case */
			if ( ( (heap->c_error_in__no_error__CS == 1) ) ) {
				/*********************************************************************************/
				/* If the error in cluster has a status of ERROR, pass it through without test for local errors */
				/*********************************************************************************/
				{
					MemMove( &heap->c__________CT_1, &heap->c_error_in__no_error__3, sizeof( cl_00000 ) );
					/* Cluster Inc Ref Count:  CaseSelector*/
					{
						cl_00000* cl_001 = (cl_00000*)&heap->c__________CT_1;
						PDAStrIncRefCnt(cl_001->el_2, (uInt16)1); /* CaseSelector */
					}
				}
			} /* end case */
			/* begin case */
			else {
				/*********************************************************************************/
				/* If the error in cluster has a status of no-error, then test each element of error codes array, stopping on the first non-zero value or after all are tested; pick the selected line from the optional source messages as the error out source. */
				/*********************************************************************************/
				{
					MemMove( &heap->c_error_in__no_error__CS_1, &heap->c_error_in__no_error__3, sizeof( cl_00000 ) );
					/* Cluster Inc Ref Count:  CaseSelector*/
					{
						cl_00000* cl_002 = (cl_00000*)&heap->c_error_in__no_error__CS_1;
						PDAStrIncRefCnt(cl_002->el_2, (uInt16)1); /* CaseSelector */
					}
					if (dtFind_First_Error_in_2_error_codes_77 == (0xF0000 | ArrayDataType)) {
						MemMove(&heap->a_error_codes, &Find_First_Error_in_2_error_codes_77, DataSize((0xF0000 | ArrayDataType)));
						PDAArrIncRefCnt(Find_First_Error_in_2_error_codes_77,1);
					}
					else {
						heap->a_error_codes = PDAArrNewEmptyWithNDims( int32DataType, (ArrDimSize)1 );
						if (!PDAArrSet(Find_First_Error_in_2_error_codes_77, &heap->a_error_codes)) {
							CGenErr();
						}
					}
					PDAArrIncRefCnt(heap->a_error_codes, (uInt16)1); /* FPTerm */
					/**/
					/* 数组大小 */
					/**/
					if (heap->a_error_codes) {
						heap->l______________ = NthDim( heap->a_error_codes, 0 );
					}
					else {
						heap->l______________ = 0;
					}
	if ((heap->a_error_codes) && ((heap->a_error_codes)->refcnt > 0)) {
						if (((heap->a_error_codes)->refcnt == 1) && ((heap->a_error_codes)->staticArray == false)) {
							(heap->a_error_codes)->refcnt--;
							MemHandleFree( heap->a_error_codes );
							heap->a_error_codes=NULL;
						}
						else
						 	PDAArrFree(heap->a_error_codes);
					}
					/**/
					/* 减1 */
					/**/
					heap->l___1_x_1 = (int32)(heap->l______________ - 1);
					heap->l_While_____i_LT = 0;
					heap->b_______0___x____0__LT = false;
					heap->l_error_codes_LT = 0;
					heap->a_error_codes_LT = heap->a_error_codes;
					heap->l_While_____i_1 = 0;
					do {
						{
							{ /* Array Index 1D */
								int32 nIndex = 0;
								nIndex = (int32)heap->l_While_____i_1;
								if ((nIndex >= 0) && heap->a_error_codes_LT && (nIndex < NthDim(heap->a_error_codes_LT, (ArrDimSize)0))) {
									heap->l_error_codes_LT_1 = *(int32 *)NthElemFast(heap->a_error_codes_LT, nIndex, 4);
								}
								else {
									heap->l_error_codes_LT_1 = 0;
								}
							}
							/**/
							/* 不等于0？ */
							/**/
							heap->b_______0___x____0_ = (Boolean)(heap->l_error_codes_LT_1 != 0);
							/**/
							/* 大于等于？ */
							/**/
							heap->b____________x____y_ =  (heap->l_While_____i_1 >= heap->l___1_x_1);
							/**/
							/* 或非 */
							/**/
							heap->b_________x__y___ =  !(heap->b_______0___x____0_ | heap->b____________x____y_);
							/* Free tunnel value before reassigning. */
	heap->l_error_codes_LT = heap->l_error_codes_LT_1;
							/* Free tunnel value before reassigning. */
	heap->b_______0___x____0__LT = heap->b_______0___x____0_;
							/* Free tunnel value before reassigning. */
	heap->l_While_____i_LT = heap->l_While_____i_1;
						}
						(heap->l_While_____i_1)++;
					}
					while( heap->b_________x__y___ && !gAppStop && !gLastError);
					/* FreeLoopInputs. */
	if ((heap->a_error_codes_LT) && ((heap->a_error_codes_LT)->refcnt > 0)) {
						if (((heap->a_error_codes_LT)->refcnt == 1) && ((heap->a_error_codes_LT)->staticArray == false)) {
							(heap->a_error_codes_LT)->refcnt--;
							MemHandleFree( heap->a_error_codes_LT );
							heap->a_error_codes_LT=NULL;
						}
						else
						 	PDAArrFree(heap->a_error_codes_LT);
					}
					heap->s_source_messages =Find_First_Error_in_1_source_messages_20;
					PDAStrIncRefCnt(Find_First_Error_in_1_source_messages_20,1);
					/**/
					/* 选行并添加至字符串 */
					/**/
					if (!PDAStrIndexLineConcat((VoidHand)NULL, &(heap->l_While_____i_LT), int32DataType, heap->s_source_messages, &(heap->s______________________________) )){
						CGenErr();
					}
					{ /* Select */
						heap->b_______0___x____0__CS = heap->b_______0___x____0__LT;
						/* begin case */
						if ( heap->b_______0___x____0__CS ) {
							{
								heap->b_______0___x____0__CS_1 = heap->b_______0___x____0__CS;
/* Bundle by name */
								{
									cl_00000* cl_003 = NULL;
									/* Cluster CopyOnModify */
									MemMove( &heap->c__________CT_1, &heap->c_error_in__no_error__CS_1, sizeof( cl_00000 ) );
									{
										cl_00000* clSrc_004 = (cl_00000*)&heap->c_error_in__no_error__CS_1;
										cl_00000* clDest_005 = (cl_00000*)&heap->c__________CT_1;
										clDest_005->el_2 = PDAStrCopyOnModify( clSrc_004->el_2 );
									}
									cl_003 = (cl_00000*)&heap->c__________CT_1;
	cl_003->el_0 = heap->b_______0___x____0__CS_1;
	cl_003->el_1 = heap->l_error_codes_LT;
	if (cl_003->el_2 && (((PDAStrPtr)cl_003->el_2)->refcnt > 0)) {
										if ((--((PDAStrPtr)cl_003->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_003->el_2)->staticStr)) {
											MemHandleFree( cl_003->el_2 );
											cl_003->el_2=NULL;
										}
									}
									cl_003->el_2 = heap->s______________________________;
								}
							}
						} /* end case */
						/* begin case */
						else {
							{
								/* Free unwired input select tunnel. */
	if (heap->s______________________________ && (((PDAStrPtr)heap->s______________________________)->refcnt > 0)) {
									if ((--((PDAStrPtr)heap->s______________________________)->refcnt == 0) && (!((PDAStrPtr)heap->s______________________________)->staticStr)) {
										MemHandleFree( heap->s______________________________ );
										heap->s______________________________=NULL;
									}
								}
								MemMove( &heap->c__________CT_1, &heap->c_error_in__no_error__CS_1, sizeof( cl_00000 ) );
							}
						} /* end case */
					} /* end switch */
				}
			} /* end case */
			MemMove( &heap->c__________CT, &heap->c__________CT_1, sizeof( cl_00000 ) );
			/* FreeCaseSelDCO. */
	/* Free Cluster heap->c_error_in__no_error__3*/
			{
				cl_00000* cl_006 = (cl_00000*)&heap->c_error_in__no_error__3;
				if (cl_006->el_2 && (((PDAStrPtr)cl_006->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_006->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_006->el_2)->staticStr)) {
						MemHandleFree( cl_006->el_2 );
						cl_006->el_2=NULL;
					}
				}
			}
		} /* end switch */
		/* Cluster Inc Ref Count:  Select: sel tunnels*/
		{
			cl_00000* cl_007 = (cl_00000*)&heap->c__________CT;
			PDAStrIncRefCnt(cl_007->el_2, (uInt16)1); /* Select: sel tunnels */
		}
		if (Find_First_Error_out_0_error_out_28) {
			/* Free Cluster Find_First_Error_out_0_error_out_28*/
			{
				cl_00000* cl_008 = (cl_00000*)Find_First_Error_out_0_error_out_28;
				if (cl_008->el_2 && (((PDAStrPtr)cl_008->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_008->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_008->el_2)->staticStr)) {
						MemHandleFree( cl_008->el_2 );
						cl_008->el_2=NULL;
					}
				}
			}
			PDAClusterCopyOnModify(&heap->c__________CT, 0x0 | ClusterDataType, Find_First_Error_out_0_error_out_28);
		}
		else {
		}
/* Unbundle by name */
		{
			cl_00000* cl_009 = (cl_00000*)&heap->c__________CT;
			heap->b________________status = cl_009->el_0;
	/* Free Cluster heap->c__________CT*/
			{
				cl_00000* cl_010 = (cl_00000*)&heap->c__________CT;
				if (cl_010->el_2 && (((PDAStrPtr)cl_010->el_2)->refcnt > 0)) {
					if ((--((PDAStrPtr)cl_010->el_2)->refcnt == 0) && (!((PDAStrPtr)cl_010->el_2)->staticStr)) {
						MemHandleFree( cl_010->el_2 );
						cl_010->el_2=NULL;
					}
				}
			}
		}
		*Find_First_Error_out_1_error__61 =heap->b________________status;
		if (Find_First_Error_in_1_source_messages_20 && (((PDAStrPtr)Find_First_Error_in_1_source_messages_20)->refcnt == 1) && (((PDAStrPtr)Find_First_Error_in_1_source_messages_20)->staticStr == false)) {
	if (Find_First_Error_in_1_source_messages_20 && (((PDAStrPtr)Find_First_Error_in_1_source_messages_20)->refcnt > 0)) {
				if ((--((PDAStrPtr)Find_First_Error_in_1_source_messages_20)->refcnt == 0) && (!((PDAStrPtr)Find_First_Error_in_1_source_messages_20)->staticStr)) {
					MemHandleFree( Find_First_Error_in_1_source_messages_20 );
					Find_First_Error_in_1_source_messages_20=NULL;
				}
			}
			Find_First_Error_in_1_source_messages_20 = NULL;
		}
		else
		{
	if (Find_First_Error_in_1_source_messages_20 && (((PDAStrPtr)Find_First_Error_in_1_source_messages_20)->refcnt > 0)) {
				if ((--((PDAStrPtr)Find_First_Error_in_1_source_messages_20)->refcnt == 0) && (!((PDAStrPtr)Find_First_Error_in_1_source_messages_20)->staticStr)) {
					MemHandleFree( Find_First_Error_in_1_source_messages_20 );
					Find_First_Error_in_1_source_messages_20=NULL;
				}
			}
		}
		if (Find_First_Error_in_2_error_codes_77 && ((Find_First_Error_in_2_error_codes_77)->refcnt == 1) && ((Find_First_Error_in_2_error_codes_77)->staticArray == false)) {
	if ((Find_First_Error_in_2_error_codes_77) && ((Find_First_Error_in_2_error_codes_77)->refcnt > 0)) {
				if (((Find_First_Error_in_2_error_codes_77)->refcnt == 1) && ((Find_First_Error_in_2_error_codes_77)->staticArray == false)) {
					(Find_First_Error_in_2_error_codes_77)->refcnt--;
					MemHandleFree( Find_First_Error_in_2_error_codes_77 );
					Find_First_Error_in_2_error_codes_77=NULL;
				}
				else
				 	PDAArrFree(Find_First_Error_in_2_error_codes_77);
			}
			Find_First_Error_in_2_error_codes_77 = NULL;
		}
		else
		{
	if ((Find_First_Error_in_2_error_codes_77) && ((Find_First_Error_in_2_error_codes_77)->refcnt > 0)) {
				if (((Find_First_Error_in_2_error_codes_77)->refcnt == 1) && ((Find_First_Error_in_2_error_codes_77)->staticArray == false)) {
					(Find_First_Error_in_2_error_codes_77)->refcnt--;
					MemHandleFree( Find_First_Error_in_2_error_codes_77 );
					Find_First_Error_in_2_error_codes_77=NULL;
				}
				else
				 	PDAArrFree(Find_First_Error_in_2_error_codes_77);
			}
		}
		PDAClusterFree( &Find_First_Error_in_0_error_in__no_error__1CF, 0x0 | ClusterDataType);
		return eFinished;
	}
}


/****** End of generated code **********/


