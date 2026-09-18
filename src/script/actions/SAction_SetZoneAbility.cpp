#include "script/actions/SAction_SetZoneAbility.h"

const char* SAction_SetZoneAbility::GetName() const {
    return "SetZoneAbility";
}

void SAction_SetZoneAbility::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_HASH);
    params.AddParam(SV_ANY);
}

void SAction_SetZoneAbility::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
