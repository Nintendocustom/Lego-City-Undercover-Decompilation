#include "script/actions/SAction_Job_StartupLock.h"

const char* SAction_Job_StartupLock::GetName() const {
    return "Job_StartupLock";
}

void SAction_Job_StartupLock::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_Job_StartupLock::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
