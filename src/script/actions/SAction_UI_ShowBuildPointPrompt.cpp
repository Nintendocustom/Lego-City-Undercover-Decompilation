#include "script/actions/SAction_UI_ShowBuildPointPrompt.h"

const char* SAction_UI_ShowBuildPointPrompt::GetName() const {
    return "UI_ShowBuildPointPrompt";
}

void SAction_UI_ShowBuildPointPrompt::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_BOOL);
}

void SAction_UI_ShowBuildPointPrompt::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
