#include "script/actions/SAction_ToggleSpeechBubble.h"

const char* SAction_ToggleSpeechBubble::GetName() const {
    return "ToggleSpeechBubble";
}

void SAction_ToggleSpeechBubble::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_ToggleSpeechBubble::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
