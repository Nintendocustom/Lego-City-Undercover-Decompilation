#include "script/actions/SAction_GetFailedGlidePlayer.h"

const char* SAction_GetFailedGlidePlayer::GetName() const {
    return "GetFailedGlidePlayer";
}

void SAction_GetFailedGlidePlayer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_GetFailedGlidePlayer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
