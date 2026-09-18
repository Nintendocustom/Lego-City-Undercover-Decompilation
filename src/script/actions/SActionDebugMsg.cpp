#include "script/actions/SActionDebugMsg.h"

const char* SActionDebugMsg::GetName() const {
    return "DebugMsg";
}

void SActionDebugMsg::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SActionDebugMsg::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SActionDebugMsg::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
