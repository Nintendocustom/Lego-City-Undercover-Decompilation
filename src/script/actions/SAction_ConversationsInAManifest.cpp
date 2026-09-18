#include "script/actions/SAction_ConversationsInAManifest.h"

const char* SAction_ConversationsInAManifest::GetName() const {
    return "ConversationCountInManifest";
}

void SAction_ConversationsInAManifest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_ConversationsInAManifest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
