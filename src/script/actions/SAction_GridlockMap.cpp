#include "script/actions/SAction_GridlockMap.h"

const char* SAction_GridlockMap::GetName() const {
    return "GridlockMap";
}

void SAction_GridlockMap::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_GridlockMap::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GRIDLOCK_MAP);
}
