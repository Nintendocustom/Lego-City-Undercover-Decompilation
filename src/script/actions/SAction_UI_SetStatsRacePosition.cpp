#include "script/actions/SAction_UI_SetStatsRacePosition.h"

const char* SAction_UI_SetStatsRacePosition::GetName() const {
    return "UI_SetStatsRacePosition";
}

void SAction_UI_SetStatsRacePosition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_UI_SetStatsRacePosition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
