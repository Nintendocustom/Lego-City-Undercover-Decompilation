#include "script/actions/SAction_LoadConversationManifest.h"

const char* SAction_LoadConversationManifest::GetName() const {
    return "LoadConversationManifest";
}

void SAction_LoadConversationManifest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_LoadConversationManifest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
