#include "script/actions/SAction_UI_SetStatsGoldPlates.h"

const char* SAction_UI_SetStatsGoldPlates::GetName() const {
    return "UI_SetStatsGoldPlates";
}

void SAction_UI_SetStatsGoldPlates::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_UI_SetStatsGoldPlates::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
