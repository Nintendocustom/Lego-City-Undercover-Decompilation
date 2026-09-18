#include "script/actions/SAction_SetHint.h"

const char* SAction_SetHint::GetName() const {
    return "SetHint";
}

void SAction_SetHint::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_BOOL);
}

void SAction_SetHint::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
