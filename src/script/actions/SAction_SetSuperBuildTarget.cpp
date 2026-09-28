#include "script/actions/SAction_SetSuperBuildTarget.h"

const char* SAction_SetSuperBuildTarget::GetName() const {
    return "SetSuperBuildTarget";
}

void SAction_SetSuperBuildTarget::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_SetSuperBuildTarget::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
