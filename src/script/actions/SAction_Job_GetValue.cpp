#include "script/actions/SAction_Job_GetValue.h"

const char* SAction_Job_GetValue::GetName() const {
    return "Job_GetValue";
}

void SAction_Job_GetValue::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
    params.AddParam(SV_HASH);
}

void SAction_Job_GetValue::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_UNKNOWN_1);
}
