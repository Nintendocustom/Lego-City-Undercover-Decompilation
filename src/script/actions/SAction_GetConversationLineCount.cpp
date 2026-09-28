#include "script/actions/SAction_GetConversationLineCount.h"

const char* SAction_GetConversationLineCount::GetName() const {
    return "GetConversationLineCount";
}

void SAction_GetConversationLineCount::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_GetConversationLineCount::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
