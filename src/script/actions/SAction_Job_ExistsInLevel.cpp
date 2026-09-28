#include "script/actions/SAction_Job_ExistsInLevel.h"

const char* SAction_Job_ExistsInLevel::GetName() const {
    return "Job_ExistsInLevel";
}

void SAction_Job_ExistsInLevel::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}

void SAction_Job_ExistsInLevel::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
