#include "script/actions/SAction_UseLiveReflections.h"

const char* SAction_UseLiveReflections::GetName() const {
    return "UseLiveReflections";
}

void SAction_UseLiveReflections::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UseLiveReflections::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_UseLiveReflections::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
