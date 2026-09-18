#include "script/actions/SAction_SideMissions_IsActive.h"

const char* SAction_SideMissions_IsActive::GetName() const {
    return "SideMissions_IsActive";
}

void SAction_SideMissions_IsActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_SideMissions_IsActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
