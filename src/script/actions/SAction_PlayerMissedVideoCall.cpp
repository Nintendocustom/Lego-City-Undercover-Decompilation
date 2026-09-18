#include "script/actions/SAction_PlayerMissedVideoCall.h"

const char* SAction_PlayerMissedVideoCall::GetName() const {
    return "PlayerMissedVideoCall";
}

void SAction_PlayerMissedVideoCall::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_PlayerMissedVideoCall::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
