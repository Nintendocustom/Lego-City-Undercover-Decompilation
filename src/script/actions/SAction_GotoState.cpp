#include "script/actions/SAction_GotoState.h"

const char* SAction_GotoState::GetName() const {
    return "GotoState";
}

void SAction_GotoState::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_ANY);
}

void SAction_GotoState::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
