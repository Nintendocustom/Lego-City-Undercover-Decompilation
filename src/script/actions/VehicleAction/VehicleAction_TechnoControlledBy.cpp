#include "script/actions/VehicleAction/VehicleAction_TechnoControlledBy.h"

const char* VehicleAction_TechnoControlledBy::GetName() const {
    return "Vehicle_TechnoVehicleControlledBy";
}

void VehicleAction_TechnoControlledBy::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_TechnoControlledBy::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
