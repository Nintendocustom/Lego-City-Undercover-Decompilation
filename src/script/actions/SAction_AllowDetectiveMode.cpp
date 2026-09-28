#include "script/actions/SAction_AllowDetectiveMode.h"

const char* SAction_AllowDetectiveMode::GetName() const {
    return "AllowDetectiveMode";
}

void SAction_AllowDetectiveMode::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void SAction_AllowDetectiveMode::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
