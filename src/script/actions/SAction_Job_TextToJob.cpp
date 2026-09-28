#include "script/actions/SAction_Job_TextToJob.h"

const char* SAction_Job_TextToJob::GetName() const {
    return "Job";
}

void SAction_Job_TextToJob::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Job_TextToJob::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}
