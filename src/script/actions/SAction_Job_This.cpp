#include "script/actions/SAction_Job_This.h"

const char* SAction_Job_This::GetName() const {
    return "Job_This";
}

void SAction_Job_This::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_Job_This::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}
