#include "script/actions/SAction_DisablePoliceCars.h"

const char* SAction_DisablePoliceCars::GetName() const {
    return "DisablePoliceCars";
}

void SAction_DisablePoliceCars::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_DisablePoliceCars::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
