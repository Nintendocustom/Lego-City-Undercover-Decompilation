#include "script/actions/SAction_Job_Start.h"

const char* SAction_Job_Start::GetName() const {
    return "Job_Start";
}

void SAction_Job_Start::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}

void SAction_Job_Start::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
