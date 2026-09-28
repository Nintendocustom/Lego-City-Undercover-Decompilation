#include "script/actions/SAction_UI_SetStatsIsStoryMission.h"

const char* SAction_UI_SetStatsIsStoryMission::GetName() const {
    return "UI_SetStatsIsStoryMission";
}

void SAction_UI_SetStatsIsStoryMission::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UI_SetStatsIsStoryMission::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
