#include "script/actions/SAction_Achievements_LegoStoreDone.h"

const char* SAction_Achievements_LegoStoreDone::GetName() const {
    return "Achievements_LegoStoreDone";
}

void SAction_Achievements_LegoStoreDone::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_Achievements_LegoStoreDone::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_Achievements_LegoStoreDone::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
