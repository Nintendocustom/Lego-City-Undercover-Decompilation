#include "script/actions/SAction_ReplayingStandalone.h"

const char* SAction_ReplayingStandalone::GetName() const {
    return "ReplayingStandalone";
}

void SAction_ReplayingStandalone::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_ReplayingStandalone::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
