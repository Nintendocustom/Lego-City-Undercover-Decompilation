#include "script/actions/SAction_SafeGuard_ProtectFor.h"

const char* SAction_SafeGuard_ProtectFor::GetName() const {
    return "SafeGuard_ProtectFor";
}

void SAction_SafeGuard_ProtectFor::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_SafeGuard_ProtectFor::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
