#include "script/actions/SAction_ConversationIsSamplePlaying.h"

const char* SAction_ConversationIsSamplePlaying::GetName() const {
    return "ConversationIsSamplePlaying";
}

void SAction_ConversationIsSamplePlaying::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_ConversationIsSamplePlaying::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
