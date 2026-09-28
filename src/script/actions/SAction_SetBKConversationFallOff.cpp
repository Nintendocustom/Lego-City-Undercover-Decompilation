#include "script/actions/SAction_SetBKConversationFallOff.h"

const char* SAction_SetBKConversationFallOff::GetName() const {
    return "SetBKConversationFallOff";
}

void SAction_SetBKConversationFallOff::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void SAction_SetBKConversationFallOff::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
