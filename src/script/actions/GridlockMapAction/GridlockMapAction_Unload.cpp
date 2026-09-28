#include "script/actions/GridlockMapAction/GridlockMapAction_Unload.h"

const char* GridlockMapAction_Unload::GetName() const {
    return "GridlockMap_Unload";
}

void GridlockMapAction_Unload::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GRIDLOCK_MAP);
}

void GridlockMapAction_Unload::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
