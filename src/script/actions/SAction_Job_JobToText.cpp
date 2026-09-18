#include "script/actions/SAction_Job_JobToText.h"

const char* SAction_Job_JobToText::GetName() const {
    return "Text";
}

void SAction_Job_JobToText::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_JOB);
}

void SAction_Job_JobToText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
