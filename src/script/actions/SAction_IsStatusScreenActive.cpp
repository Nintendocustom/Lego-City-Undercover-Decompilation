#include "script/actions/SAction_IsStatusScreenActive.h"

const char* SAction_IsStatusScreenActive::GetName() const {
    return "IsStatusScreenActive";
}

void SAction_IsStatusScreenActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_IsStatusScreenActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
