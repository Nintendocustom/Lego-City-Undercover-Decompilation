#include "script/actions/SAction_SetSuperBuildTargetCompleted.h"

extern volatile int bricktotal_superbuildtarget;

const char* SAction_SetSuperBuildTargetCompleted::GetName() const {
    return "SetSuperBuildTargetCompleted";
}

void SAction_SetSuperBuildTargetCompleted::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_SetSuperBuildTargetCompleted::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_SetSuperBuildTargetCompleted::Exec(ScriptContext& context) {
    bricktotal_superbuildtarget = 0;
    return ACTION_FINISHED;
}
