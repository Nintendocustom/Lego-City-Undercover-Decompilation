#include "script/actions/SAction_UI_SetStatsRedBricks.h"

const char* SAction_UI_SetStatsRedBricks::GetName() const {
    return "UI_SetStatsRedBricks";
}

void SAction_UI_SetStatsRedBricks::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void SAction_UI_SetStatsRedBricks::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
