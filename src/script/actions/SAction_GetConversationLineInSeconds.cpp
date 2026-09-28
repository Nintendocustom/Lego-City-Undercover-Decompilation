#include "script/actions/SAction_GetConversationLineInSeconds.h"

const char* SAction_GetConversationLineInSeconds::GetName() const {
    return "GetConversationLineInSeconds";
}

void SAction_GetConversationLineInSeconds::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
}

void SAction_GetConversationLineInSeconds::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
