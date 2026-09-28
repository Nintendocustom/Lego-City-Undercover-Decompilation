#include "script/actions/SAction_LCUITargetMainFrameSetState.h"

const char* SAction_LCUITargetMainFrameSetState::GetName() const {
    return "LCUITargetMainFrameSetState";
}

void SAction_LCUITargetMainFrameSetState::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_LCUITargetMainFrameSetState::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
