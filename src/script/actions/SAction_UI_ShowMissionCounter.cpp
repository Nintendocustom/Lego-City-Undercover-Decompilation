#include "script/actions/SAction_UI_ShowMissionCounter.h"

const char* SAction_UI_ShowMissionCounter::GetName() const {
    return "UI_ShowMissionCounter";
}

void SAction_UI_ShowMissionCounter::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_BOOL);
        params.AddParam(SV_NUMBER);
    } else {
        params.SanityCheck();
        params.AddParam(SV_BOOL);
    }
}

void SAction_UI_ShowMissionCounter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
