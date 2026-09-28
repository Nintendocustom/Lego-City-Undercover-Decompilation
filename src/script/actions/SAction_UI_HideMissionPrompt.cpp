#include "script/actions/SAction_UI_HideMissionPrompt.h"

const char* SAction_UI_HideMissionPrompt::GetName() const {
    return "UI_HideMissionPrompt";
}

void SAction_UI_HideMissionPrompt::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_HideMissionPrompt::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
