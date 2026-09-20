#include "script/actions/CharacterAction/CharacterAction_ResetToOrigin.h"

const char* CharacterAction_ResetToOrigin::GetName() const {
    return "CharacterAction_ResetToOrigin";
}

void CharacterAction_ResetToOrigin::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_ResetToOrigin::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
