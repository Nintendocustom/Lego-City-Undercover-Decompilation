#include "script/commands/SCmdStop.h"

const char* SCmdStop::GetName() const {
    return "SCmdStop";
}

void SCmdStop::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdStop::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SCmdStop::Exec(ScriptContext& context) {
    return ACTION_STOP;
}
