#include "script/actions/SAction_Job_ScriptGetVar.h"

const char* SAction_Job_ScriptGetVar::GetName() const {
    return "Job_ScriptGetVar";
}

void SAction_Job_ScriptGetVar::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
    params.AddParam(SV_TEXT);
}

void SAction_Job_ScriptGetVar::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_UNKNOWN_1);
}
