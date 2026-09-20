#include "script/actions/CharacterAction/CharacterAction_SetDriveToBoost.h"

const char* CharacterAction_SetDriveToBoost::GetName() const {
    return "CharacterAction_SetDriveToBoost";
}

void CharacterAction_SetDriveToBoost::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_NUMBER);
}

void CharacterAction_SetDriveToBoost::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
