#include "script/actions/CharacterAction/CharacterAction_GetVehicle.h"

const char* CharacterAction_GetVehicle::GetName() const {
    return "Character_GetVehicle";
}

void CharacterAction_GetVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_GetVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}
