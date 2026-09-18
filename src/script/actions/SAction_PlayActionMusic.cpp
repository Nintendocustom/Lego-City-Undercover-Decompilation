#include "script/actions/SAction_PlayActionMusic.h"

const char* SAction_PlayActionMusic::GetName() const {
    return "PlayActionMusic";
}

void SAction_PlayActionMusic::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_PlayActionMusic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
