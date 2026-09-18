#include "script/actions/SAction_ConversationManifestPAKIsLoaded.h"

const char* SAction_ConversationManifestPAKIsLoaded::GetName() const {
    return "ConversationManifestPAKIsLoaded";
}

void SAction_ConversationManifestPAKIsLoaded::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_ConversationManifestPAKIsLoaded::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
