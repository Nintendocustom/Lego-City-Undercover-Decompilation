#include "script/actions/SAction_Job_IsMutexLocked.h"

const char* SAction_Job_IsMutexLocked::GetName() const {
    return "Job_IsMutexLocked";
}

void SAction_Job_IsMutexLocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_Job_IsMutexLocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
