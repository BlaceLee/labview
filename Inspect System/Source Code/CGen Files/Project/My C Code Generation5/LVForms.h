#ifndef _LVForms_h
#define _LVForms_h
#include "LVCCG.h"
#include "CCGDataSupport.h"
#include "LVGlobs.h"

extern TextPtr CS_Set_the_inner_circle_parameters_VIName;
extern eRunStatus CS_Set_the_inner_circle_parameters_Start(subVIInstanceDataPtr viInstanceData, Boolean bShowFrontPanel, Boolean bRunToFinish, ArgList *argsIn, ArgList *argsOut, Boolean *pause);
#define CS_Set_the_inner_circle_parameters_formID 2000

#ifdef LV_MAIN
FormTableEntry formTable[] = {
{ CS_Set_the_inner_circle_parameters_formID, CS_Set_the_inner_circle_parameters_Start, &CS_Set_the_inner_circle_parameters_VIName },
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
