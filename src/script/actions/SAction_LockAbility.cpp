#include "script/actions/SAction_LockAbility.h"

const char* SAction_LockAbility::GetName() const {
    return "LockAbility";
}

void SAction_LockAbility::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}

void SAction_LockAbility::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
