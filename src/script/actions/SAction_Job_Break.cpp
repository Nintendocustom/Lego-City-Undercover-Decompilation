#include "script/actions/SAction_Job_Break.h"

const char* SAction_Job_Break::GetName() const {
    return "Job_Break";
}

void SAction_Job_Break::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_Job_Break::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_Job_Break::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
