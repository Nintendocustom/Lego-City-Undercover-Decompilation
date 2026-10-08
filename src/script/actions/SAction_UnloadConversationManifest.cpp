#include "script/actions/SAction_UnloadConversationManifest.h"

const char* SAction_UnloadConversationManifest::GetName() const {
    return "UnloadConversationManifest";
}

void SAction_UnloadConversationManifest::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_UnloadConversationManifest::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}