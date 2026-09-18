#include "script/actions/SAction_DistanceXZ.h"

const char* SAction_DistanceXZ::GetName() const {
    return "DistanceXZ";
}

void SAction_DistanceXZ::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
    params.AddParam(SV_POSITION);
}

void SAction_DistanceXZ::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
