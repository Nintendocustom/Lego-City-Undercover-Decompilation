#include "script/actions/SAction_SetAvoidanceType.h"

const char* SAction_SetAvoidanceType::GetName() const {
    return "SetAvoidanceType";
}

void SAction_SetAvoidanceType::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_SetAvoidanceType::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
