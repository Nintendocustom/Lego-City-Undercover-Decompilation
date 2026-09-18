#include "script/actions/SAction_ConversationLineFinished.h"

const char* SAction_ConversationLineFinished::GetName() const {
    return "ConversationLineFinished";
}

void SAction_ConversationLineFinished::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
}

void SAction_ConversationLineFinished::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
