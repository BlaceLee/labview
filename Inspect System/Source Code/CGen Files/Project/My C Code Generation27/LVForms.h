#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr IPI_StringChangeOption_VIName;
extern eRunStatus IPI_StringChangeOption_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define IPI_StringChangeOption_formID 2000

#ifdef LV_MAIN
FormTableEntry formTable[] = {
{ IPI_StringChangeOption_formID, IPI_StringChangeOption_Start, &IPI_StringChangeOption_VIName },
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
