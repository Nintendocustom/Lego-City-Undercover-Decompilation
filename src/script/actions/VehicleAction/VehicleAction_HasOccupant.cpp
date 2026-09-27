#include "script/actions/VehicleAction/VehicleAction_HasOccupant.h"

const char* VehicleAction_HasOccupant::GetName() const {
    return "Vehicle_HasOccupant";
}

void VehicleAction_HasOccupant::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_CHARACTER);
}

void VehicleAction_HasOccupant::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
