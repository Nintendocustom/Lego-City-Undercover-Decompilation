#include "script/actions/SAction_LoadCharacter.h"

const char* SAction_LoadCharacter::GetName() const {
    return "LoadCharacter";
}

void SAction_LoadCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_LoadCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
