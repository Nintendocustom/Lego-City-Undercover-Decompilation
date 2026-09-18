#include "script/actions/SAction_Text2ApiCharacter.h"

const char* SAction_Text2ApiCharacter::GetName() const {
    return "Character";
}

void SAction_Text2ApiCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2ApiCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
