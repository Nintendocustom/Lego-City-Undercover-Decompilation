#include "script/actions/SAction_GetConversationLengthInSeconds.h"

const char* SAction_GetConversationLengthInSeconds::GetName() const {
    return "GetConversationLengthInSeconds";
}

void SAction_GetConversationLengthInSeconds::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_GetConversationLengthInSeconds::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
