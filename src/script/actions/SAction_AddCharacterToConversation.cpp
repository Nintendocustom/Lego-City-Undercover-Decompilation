#include "script/actions/SAction_AddCharacterToConversation.h"

const char* SAction_AddCharacterToConversation::GetName() const {
    return "AddCharacterToConversation";
}

void SAction_AddCharacterToConversation::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_CHARACTER);
}

void SAction_AddCharacterToConversation::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_AddCharacterToConversation::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
