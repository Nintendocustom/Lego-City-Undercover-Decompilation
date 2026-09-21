#include "script/actions/CharacterAction/CharacterAction_SetSatNavDestinationFlags.h"

const char* CharacterAction_SetSatNavDestinationFlags::GetName() const {
    return "Character_SetSatNavDestinationFlags";
}

void CharacterAction_SetSatNavDestinationFlags::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void CharacterAction_SetSatNavDestinationFlags::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
