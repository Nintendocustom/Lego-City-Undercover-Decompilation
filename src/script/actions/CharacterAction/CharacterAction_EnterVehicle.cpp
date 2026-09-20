#include "script/actions/CharacterAction/CharacterAction_EnterVehicle.h"

const char* CharacterAction_EnterVehicle::GetName() const {
    return "CharacterAction_EnterVehicle";
}

void CharacterAction_EnterVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
}

void CharacterAction_EnterVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
