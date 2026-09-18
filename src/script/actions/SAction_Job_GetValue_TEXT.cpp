#include "script/actions/SAction_Job_GetValue_TEXT.h"

const char* SAction_Job_GetValue_TEXT::GetName() const {
    return "Job_GetValue";
}

void SAction_Job_GetValue_TEXT::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
    params.AddParam(SV_TEXT);
}

void SAction_Job_GetValue_TEXT::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_UNKNOWN_1);
}
