#include "script/actions/SAction_UnlockAbility.h"

const char* SAction_UnlockAbility::GetName() const {
    return "UnlockAbility";
}

void SAction_UnlockAbility::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}

void SAction_UnlockAbility::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
