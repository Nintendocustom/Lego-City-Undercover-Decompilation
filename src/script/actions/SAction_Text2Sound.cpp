#include "script/actions/SAction_Text2Sound.h"

const char* SAction_Text2Sound::GetName() const {
    return "Sound";
}

void SAction_Text2Sound::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2Sound::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_SOUND);
}
