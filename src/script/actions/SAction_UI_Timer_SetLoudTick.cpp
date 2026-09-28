#include "script/actions/SAction_UI_Timer_SetLoudTick.h"

const char* SAction_UI_Timer_SetLoudTick::GetName() const {
    return "UI_Timer_SetLoudTick";
}

void SAction_UI_Timer_SetLoudTick::GetInputs(SCmdParams& params) const {
    switch (m_InputVariant) {
    case 0:
        params.AddParam(SV_BOOL);
        break;
    case 1:
        params.AddParam(SV_BOOL);
        params.AddParam(SV_NUMBER);
        break;
    default:
        break;
    }
}

void SAction_UI_Timer_SetLoudTick::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
