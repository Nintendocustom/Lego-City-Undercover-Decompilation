#include "script/actions/SAction_UI_ShowHUDTimer.h"

const char* SAction_UI_ShowHUDTimer::GetName() const {
    return "UI_ShowHUDTimer";
}

void SAction_UI_ShowHUDTimer::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_BOOL);
        params.AddParam(SV_CHARACTER);
    } else {
        params.SanityCheck();
        params.AddParam(SV_BOOL);
    }
}

void SAction_UI_ShowHUDTimer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
