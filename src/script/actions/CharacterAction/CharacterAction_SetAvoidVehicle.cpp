#include "script/actions/CharacterAction/CharacterAction_SetAvoidVehicle.h"

const char* CharacterAction_SetAvoidVehicle::GetName() const {
    return "CharacterAction_SetAvoidVehicle";
}

void CharacterAction_SetAvoidVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}

void CharacterAction_SetAvoidVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
