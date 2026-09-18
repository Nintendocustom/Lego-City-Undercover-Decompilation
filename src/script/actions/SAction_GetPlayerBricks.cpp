#include "script/actions/SAction_GetPlayerBricks.h"

const char* SAction_GetPlayerBricks::GetName() const {
    return "GetPlayerBricks";
}

void SAction_GetPlayerBricks::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_GetPlayerBricks::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
