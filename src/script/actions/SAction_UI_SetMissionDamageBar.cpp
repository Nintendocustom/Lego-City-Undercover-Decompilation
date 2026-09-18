#include "script/actions/SAction_UI_SetMissionDamageBar.h"

const char* SAction_UI_SetMissionDamageBar::GetName() const {
    return "UI_SetMissionDamageBar";
}

void SAction_UI_SetMissionDamageBar::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    } else {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    }
}

void SAction_UI_SetMissionDamageBar::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
