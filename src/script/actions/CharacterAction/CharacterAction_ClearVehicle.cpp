#include "script/actions/CharacterAction/CharacterAction_ClearVehicle.h"

const char* CharacterAction_ClearVehicle::GetName() const {
    return "CharacterAction_ClearVehicle";
}

void CharacterAction_ClearVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_ClearVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
