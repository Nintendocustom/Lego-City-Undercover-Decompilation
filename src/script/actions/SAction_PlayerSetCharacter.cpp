#include "script/actions/SAction_PlayerSetCharacter.h"

const char* SAction_PlayerSetCharacter::GetName() const {
    return "PlayerSetCharacter";
}

void SAction_PlayerSetCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_TEXT);
}

void SAction_PlayerSetCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
