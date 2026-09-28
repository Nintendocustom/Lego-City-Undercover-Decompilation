#include "script/actions/SAction_IsScreenFaded_PlayerSpecific.h"

const char* SAction_IsScreenFaded_PlayerSpecific::GetName() const {
    return "IsScreenFaded";
}

void SAction_IsScreenFaded_PlayerSpecific::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void SAction_IsScreenFaded_PlayerSpecific::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
