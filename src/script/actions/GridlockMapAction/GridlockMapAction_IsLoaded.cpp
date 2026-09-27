#include "script/actions/GridlockMapAction/GridlockMapAction_IsLoaded.h"

const char* GridlockMapAction_IsLoaded::GetName() const {
    return "GridlockMap_IsLoaded";
}

void GridlockMapAction_IsLoaded::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GRIDLOCK_MAP);
}

void GridlockMapAction_IsLoaded::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
