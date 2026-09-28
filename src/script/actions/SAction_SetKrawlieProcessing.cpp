#include "script/actions/SAction_SetKrawlieProcessing.h"

const char* SAction_SetKrawlieProcessing::GetName() const {
    return "SetKrawlieProcessing";
}

void SAction_SetKrawlieProcessing::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_SetKrawlieProcessing::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
