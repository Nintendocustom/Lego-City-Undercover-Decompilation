#include "script/actions/SAction_GetCharacter.h"

const char* SAction_GetCharacter::GetName() const {
    return "GetCharacter";
}

void SAction_GetCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_GetCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER, "This ApiCharacter");
}
