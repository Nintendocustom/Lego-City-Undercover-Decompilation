#include "script/actions/SAction_Job_IsRunning.h"

const char* SAction_Job_IsRunning::GetName() const {
    return "Job_IsRunning";
}

void SAction_Job_IsRunning::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}

void SAction_Job_IsRunning::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
