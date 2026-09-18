#include "script/actions/SAction_Job_HasMutex.h"

const char* SAction_Job_HasMutex::GetName() const {
    return "Job_HasMutex";
}

void SAction_Job_HasMutex::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}

void SAction_Job_HasMutex::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
