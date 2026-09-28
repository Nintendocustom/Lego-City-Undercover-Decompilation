#include "script/actions/SAction_UI_ShowMissionPrompt.h"

const char* SAction_UI_ShowMissionPrompt::GetName() const {
    return "UI_ShowMissionPrompt";
}

void SAction_UI_ShowMissionPrompt::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.AddParam(SV_TEXT);
        params.AddParam(SV_TEXT);
        params.AddParam(SV_TEXT);
    } else if (m_InputVariant == 1) {
        params.AddParam(SV_TEXT);
        params.AddParam(SV_TEXT);
        params.AddParam(SV_TEXT);
        params.AddParam(SV_TEXT);
    }
}

void SAction_UI_ShowMissionPrompt::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
