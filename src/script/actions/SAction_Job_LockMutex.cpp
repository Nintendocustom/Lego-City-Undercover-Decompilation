#include "script/actions/SAction_Job_LockMutex.h"

const char* SAction_Job_LockMutex::GetName() const {
    return "Job_LockMutex";
}

void SAction_Job_LockMutex::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
    params.AddParam(SV_BOOL);
}

void SAction_Job_LockMutex::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
