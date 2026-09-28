#include "script/actions/SAction_UI_ShowMissionDamageBar.h"

const char* SAction_UI_ShowMissionDamageBar::GetName() const {
    return "UI_ShowMissionDamageBar";
}

void SAction_UI_ShowMissionDamageBar::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_BOOL);
        params.AddParam(SV_NUMBER);
    } else {
        params.SanityCheck();
        params.AddParam(SV_BOOL);
    }
}

void SAction_UI_ShowMissionDamageBar::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
