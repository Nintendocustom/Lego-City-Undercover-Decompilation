#include "script/actions/SAction_Job_InStartup.h"

const char* SAction_Job_InStartup::GetName() const {
    return "Job_InStartup";
}

void SAction_Job_InStartup::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_Job_InStartup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
