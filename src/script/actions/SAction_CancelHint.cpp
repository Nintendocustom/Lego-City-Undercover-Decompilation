#include "script/actions/SAction_CancelHint.h"

void Hint_CancelCurrent(float);

const char* SAction_CancelHint::GetName() const {
    return "CancelHint";
}

void SAction_CancelHint::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_CancelHint::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_CancelHint::Exec(ScriptContext& context) {
    Hint_CancelCurrent(0.0f);
    return ACTION_FINISHED;
}
