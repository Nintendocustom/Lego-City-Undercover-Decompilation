#include "script/actions/SAction_GotoRandomState.h"

const char* SAction_GotoRandomState::GetName() const {
    return "GotoRandomState";
}

void SAction_GotoRandomState::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_GotoRandomState::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
