#include "script/actions/SAction_ShowSpeechIcon.h"

const char* SAction_ShowSpeechIcon::GetName() const {
    return "ShowSpeechIcon";
}

void SAction_ShowSpeechIcon::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void SAction_ShowSpeechIcon::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
