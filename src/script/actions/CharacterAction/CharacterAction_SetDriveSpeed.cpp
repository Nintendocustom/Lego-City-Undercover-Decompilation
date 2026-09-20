#include "script/actions/CharacterAction/CharacterAction_SetDriveSpeed.h"

const char* CharacterAction_SetDriveSpeed::GetName() const {
    return "CharacterAction_SetDriveSpeed";
}

void CharacterAction_SetDriveSpeed::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_SetDriveSpeed::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
