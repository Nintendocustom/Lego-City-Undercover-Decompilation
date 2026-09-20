#include "script/actions/CharacterAction/CharacterAction_LockInPlace.h"

const char* CharacterAction_LockInPlace::GetName() const {
    return "CharacterAction_LockInPlace";
}

void CharacterAction_LockInPlace::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}

void CharacterAction_LockInPlace::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
