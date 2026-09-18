#include "script/actions/SAction_StopConversation.h"

const char* SAction_StopConversation::GetName() const {
    return "StopConversation";
}

void SAction_StopConversation::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_StopConversation::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
