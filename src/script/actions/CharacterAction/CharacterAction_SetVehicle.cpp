#include "script/actions/CharacterAction/CharacterAction_SetVehicle.h"

const char* CharacterAction_SetVehicle::GetName() const {
    return "Character_SetVehicle";
}

void CharacterAction_SetVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
}

void CharacterAction_SetVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
