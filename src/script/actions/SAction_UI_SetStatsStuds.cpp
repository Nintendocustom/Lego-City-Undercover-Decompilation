#include "script/actions/SAction_UI_SetStatsStuds.h"

const char* SAction_UI_SetStatsStuds::GetName() const {
    return "UI_SetStatsStuds";
}

void SAction_UI_SetStatsStuds::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.SanityCheck();
    } else if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
    }
}

void SAction_UI_SetStatsStuds::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
