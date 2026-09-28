#include "script/actions/SAction_Job_Stop.h"

const char* SAction_Job_Stop::GetName() const {
    return "Job_Stop";
}

void SAction_Job_Stop::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
