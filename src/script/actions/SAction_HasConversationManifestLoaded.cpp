#include "script/actions/SAction_HasConversationManifestLoaded.h"

const char* SAction_HasConversationManifestLoaded::GetName() const {
    return "ConversationManifestLoaded";
}

void SAction_HasConversationManifestLoaded::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_HasConversationManifestLoaded::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
