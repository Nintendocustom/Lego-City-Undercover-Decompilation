#include "script/actions/SAction_Job_GetMutexJob.h"

const char* SAction_Job_GetMutexJob::GetName() const {
    return "Job_GetMutexJob";
}

void SAction_Job_GetMutexJob::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_Job_GetMutexJob::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}
