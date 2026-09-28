#include "script/actions/SAction_Job_GetChild.h"

const char* SAction_Job_GetChild::GetName() const {
    return "Job_GetChild";
}

void SAction_Job_GetChild::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
    params.AddParam(SV_TEXT);
}

void SAction_Job_GetChild::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}
