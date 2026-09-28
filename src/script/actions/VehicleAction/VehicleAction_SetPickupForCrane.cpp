#include "script/actions/VehicleAction/VehicleAction_SetPickupForCrane.h"

const char* VehicleAction_SetPickupForCrane::GetName() const {
    return "Vehicle_SetPickupForCrane";
}

void VehicleAction_SetPickupForCrane::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_GIZMO);
}

void VehicleAction_SetPickupForCrane::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
