#include "script/actions/SAction_UI_SetMissionHelpText.h"

const char* SAction_UI_SetMissionHelpText::GetName() const {
    return "UI_SetMissionHelpText";
}

void SAction_UI_SetMissionHelpText::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 2) {
        params.AddParam(SV_TEXT);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_CHARACTER);
    } else if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_TEXT);
        params.AddParam(SV_NUMBER);
    } else {
        params.AddParam(SV_TEXT);
    }
}

void SAction_UI_SetMissionHelpText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
