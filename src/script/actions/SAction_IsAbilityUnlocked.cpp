#include "script/actions/SAction_IsAbilityUnlocked.h"

const char* SAction_IsAbilityUnlocked::GetName() const {
    return "IsAbilityUnlocked";
}

void SAction_IsAbilityUnlocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}

void SAction_IsAbilityUnlocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
