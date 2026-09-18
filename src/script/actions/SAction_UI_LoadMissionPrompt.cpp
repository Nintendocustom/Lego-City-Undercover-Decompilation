#include "script/actions/SAction_UI_LoadMissionPrompt.h"

const char* SAction_UI_LoadMissionPrompt::GetName() const {
    return "UI_LoadMissionPrompt";
}

void SAction_UI_LoadMissionPrompt::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_UI_LoadMissionPrompt::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
