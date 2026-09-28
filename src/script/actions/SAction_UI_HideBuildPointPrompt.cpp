#include "script/actions/SAction_UI_HideBuildPointPrompt.h"

const char* SAction_UI_HideBuildPointPrompt::GetName() const {
    return "UI_HideBuildPointPrompt";
}

void SAction_UI_HideBuildPointPrompt::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void SAction_UI_HideBuildPointPrompt::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
