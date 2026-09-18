#include "script/actions/SAction_Job_ScriptNotify.h"

const char* SAction_Job_ScriptNotify::GetName() const {
    return "Job_ScriptNotify";
}

void SAction_Job_ScriptNotify::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_ANY);
}

void SAction_Job_ScriptNotify::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
