#include "script/actions/SAction_UI_SetStatsGoldBricks.h"

const char* SAction_UI_SetStatsGoldBricks::GetName() const {
    return "UI_SetStatsGoldBricks";
}

void SAction_UI_SetStatsGoldBricks::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void SAction_UI_SetStatsGoldBricks::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
