#include "script/actions/SAction_RemovePlayerBricks.h"

const char* SAction_RemovePlayerBricks::GetName() const {
    return "RemovePlayerBricks";
}

void SAction_RemovePlayerBricks::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_RemovePlayerBricks::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
