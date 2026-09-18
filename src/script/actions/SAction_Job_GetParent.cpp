#include "script/actions/SAction_Job_GetParent.h"

const char* SAction_Job_GetParent::GetName() const {
    return "Job_GetParent";
}

void SAction_Job_GetParent::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}

void SAction_Job_GetParent::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}
