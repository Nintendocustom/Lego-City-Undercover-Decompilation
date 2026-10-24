#include "script/commands/SCmdPrintCtx.h"

const char* SCmdPrintCtx::GetName() const {
    return "SCmdPrintCtx";
}

void SCmdPrintCtx::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SCmdPrintCtx::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SCmdPrintCtx::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
