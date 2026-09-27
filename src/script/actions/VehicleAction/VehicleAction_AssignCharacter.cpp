#include "script/actions/VehicleAction/VehicleAction_AssignCharacter.h"

const char* VehicleAction_AssignCharacter::GetName() const {
    return "Vehicle_AssignCharacter";
}

void VehicleAction_AssignCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_TEXT);
}

void VehicleAction_AssignCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
