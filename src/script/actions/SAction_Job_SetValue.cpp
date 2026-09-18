#include "script/actions/SAction_Job_SetValue.h"

const char* SAction_Job_SetValue::GetName() const {
    return "Job_SetValue";
}

void SAction_Job_SetValue::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_UNKNOWN_1);
}

void SAction_Job_SetValue::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
