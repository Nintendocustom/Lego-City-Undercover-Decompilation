#include "script/commands/SCmdEnd.h"

const char* SCmdEnd::GetName() const {
    return "SCmdEnd";
}

void SCmdEnd::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdEnd::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SCmdEnd::Exec(ScriptContext& context) {
    return ACTION_END;
}
