#include "script/actions/SAction_Job_Debug.h"

const char* SAction_Job_Debug::GetName() const {
    return "Job_Debug";
}

void SAction_Job_Debug::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Job_Debug::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
