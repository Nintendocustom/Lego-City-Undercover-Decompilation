#include "script/actions/VehicleAction/VehicleAction_GetOccupant.h"

const char* VehicleAction_GetOccupant::GetName() const {
    return "Vehicle_GetOccupant";
}

void VehicleAction_GetOccupant::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
}

void VehicleAction_GetOccupant::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
