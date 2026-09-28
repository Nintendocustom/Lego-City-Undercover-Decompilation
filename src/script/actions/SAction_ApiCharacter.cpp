#include "script/actions/SAction_ApiCharacter.h"

const char* SAction_ApiCharacter::GetName() const {
    return "Character";
}

void SAction_ApiCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_ApiCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
