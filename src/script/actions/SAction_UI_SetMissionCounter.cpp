#include "script/actions/SAction_UI_SetMissionCounter.h"

const char* SAction_UI_SetMissionCounter::GetName() const {
    return "UI_SetMissionCounter";
}

void SAction_UI_SetMissionCounter::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 3) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    } else if (m_InputVariant == 2) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_POSITION);
    } else if (m_InputVariant == 1) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
        params.AddParam(SV_NUMBER);
    } else {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
    }
}

void SAction_UI_SetMissionCounter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
