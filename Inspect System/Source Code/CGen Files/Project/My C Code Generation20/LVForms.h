#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr IPI_DrawRent_VIName;
extern eRunStatus IPI_DrawRent_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define IPI_DrawRent_formID 2000

#ifdef LV_MAIN
FormTableEntry formTable[] = {
{ IPI_DrawRent_formID, IPI_DrawRent_Start, &IPI_DrawRent_VIName },
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
