#include "script/commands/SCmdHold.h"

const char* SCmdHold::GetName() const {
    return "SCmdHold";
}

void SCmdHold::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdHold::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SCmdHold::Exec(ScriptContext& context) {
    return ACTION_HOLD;
}