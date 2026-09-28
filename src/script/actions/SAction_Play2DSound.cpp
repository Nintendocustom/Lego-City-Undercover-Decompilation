#include "script/actions/SAction_Play2DSound.h"

const char* SAction_Play2DSound::GetName() const {
    return "Play2DSound";
}

void SAction_Play2DSound::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Play2DSound::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
