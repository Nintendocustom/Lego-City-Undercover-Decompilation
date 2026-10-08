#include "script/actions/SAction_UnlockCharacterDebug.h"

const char* SAction_UnlockCharacterDebug::GetName() const {
    return "UnlockCharacterDebug";
}

void SAction_UnlockCharacterDebug::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_ANY);
}

void SAction_UnlockCharacterDebug::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_UnlockCharacterDebug::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}