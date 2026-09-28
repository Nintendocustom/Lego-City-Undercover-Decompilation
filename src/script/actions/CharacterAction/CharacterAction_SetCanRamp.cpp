#include "script/actions/CharacterAction/CharacterAction_SetCanRamp.h"

const char* CharacterAction_SetCanRamp::GetName() const {
    return "Character_SetCanRamp";
}

void CharacterAction_SetCanRamp::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetCanRamp::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
