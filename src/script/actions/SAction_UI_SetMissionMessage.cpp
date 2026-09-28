#include "script/actions/SAction_UI_SetMissionMessage.h"

const char* SAction_UI_SetMissionMessage::GetName() const {
    return "UI_SetMissionMessage";
}

void SAction_UI_SetMissionMessage::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.AddParam(SV_TEXT);
        params.AddParam(SV_NUMBER);
    } else {
        params.AddParam(SV_TEXT);
    }
}

void SAction_UI_SetMissionMessage::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
