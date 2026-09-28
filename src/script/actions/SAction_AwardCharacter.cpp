#include "script/actions/SAction_AwardCharacter.h"

const char* SAction_AwardCharacter::GetName() const {
    return "AwardCharacter";
}

void SAction_AwardCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_AwardCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
