#include "script/actions/SAction_UI_SetHUDTimer.h"

const char* SAction_UI_SetHUDTimer::GetName() const {
    return "UI_SetHUDTimer";
}

void SAction_UI_SetHUDTimer::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 2) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_TIMER);
    } else if (m_InputVariant == 1) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    } else {
        params.AddParam(SV_NUMBER);
    }
}

void SAction_UI_SetHUDTimer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
