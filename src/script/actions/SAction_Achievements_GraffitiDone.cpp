#include "script/actions/SAction_Achievements_GraffitiDone.h"

const char* SAction_Achievements_GraffitiDone::GetName() const {
    return "Achievements_GraffitiDone";
}

void SAction_Achievements_GraffitiDone::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_Achievements_GraffitiDone::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_Achievements_GraffitiDone::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
