#include "script/actions/SAction_SetKrawlieRendering.h"

const char* SAction_SetKrawlieRendering::GetName() const {
    return "SetKrawlieRendering";
}

void SAction_SetKrawlieRendering::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_SetKrawlieRendering::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
