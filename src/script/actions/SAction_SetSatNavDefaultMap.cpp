#include "script/actions/SAction_SetSatNavDefaultMap.h"

const char* SAction_SetSatNavDefaultMap::GetName() const {
    return "SetSatNavDefaultMap";
}

void SAction_SetSatNavDefaultMap::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NAVI_MAP);
}

void SAction_SetSatNavDefaultMap::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
