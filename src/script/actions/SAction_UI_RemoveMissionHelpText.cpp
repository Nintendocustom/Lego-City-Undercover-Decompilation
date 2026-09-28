#include "script/actions/SAction_UI_RemoveMissionHelpText.h"

const char* SAction_UI_RemoveMissionHelpText::GetName() const {
    return "UI_RemoveMissionHelpText";
}

void SAction_UI_RemoveMissionHelpText::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.AddParam(SV_CHARACTER);
    } else {
        params.SanityCheck();
    }
}

void SAction_UI_RemoveMissionHelpText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
