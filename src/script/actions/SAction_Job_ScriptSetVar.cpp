#include "script/actions/SAction_Job_ScriptSetVar.h"

const char* SAction_Job_ScriptSetVar::GetName() const {
    return "Job_ScriptSetVar";
}

void SAction_Job_ScriptSetVar::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_UNKNOWN_1);
}

void SAction_Job_ScriptSetVar::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
