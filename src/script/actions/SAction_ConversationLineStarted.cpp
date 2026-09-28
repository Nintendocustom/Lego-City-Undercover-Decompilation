#include "script/actions/SAction_ConversationLineStarted.h"

const char* SAction_ConversationLineStarted::GetName() const {
    return "ConversationLineStarted";
}

void SAction_ConversationLineStarted::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
}

void SAction_ConversationLineStarted::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
