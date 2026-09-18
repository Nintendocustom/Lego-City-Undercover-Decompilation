#include "script/actions/SAction_SetConversationDuckingScale.h"

const char* SAction_SetConversationDuckingScale::GetName() const {
    return "SetConversationDuckingScale";
}

void SAction_SetConversationDuckingScale::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
}

void SAction_SetConversationDuckingScale::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
