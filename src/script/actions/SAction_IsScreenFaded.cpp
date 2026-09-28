#include "script/actions/SAction_IsScreenFaded.h"

const char* SAction_IsScreenFaded::GetName() const {
    return "IsScreenFaded";
}

void SAction_IsScreenFaded::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_IsScreenFaded::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
