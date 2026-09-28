#include "script/actions/SAction_NearestPlayer.h"

const char* SAction_NearestPlayer::GetName() const {
    return "NearestPlayer";
}

void SAction_NearestPlayer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
}

void SAction_NearestPlayer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
