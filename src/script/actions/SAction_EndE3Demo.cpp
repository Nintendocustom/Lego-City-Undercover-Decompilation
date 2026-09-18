#include "script/actions/SAction_EndE3Demo.h"

const char* SAction_EndE3Demo::GetName() const {
    return "EndE3Demo";
}

void SAction_EndE3Demo::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_EndE3Demo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_EndE3Demo::Exec(ScriptContext& context) {
    return ACTION_CONVERT_DEFAULT;
}
