#include "script/actions/SAction_EnableNonPursuingTraffic.h"

const char* SAction_EnableNonPursuingTraffic::GetName() const {
    return "EnableNonPursuingTraffic";
}

void SAction_EnableNonPursuingTraffic::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_EnableNonPursuingTraffic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
