#include "script/actions/VehicleAction/VehicleAction_Destroy.h"

const char* VehicleAction_Destroy::GetName() const {
    return "Vehicle_Destroy";
}

void VehicleAction_Destroy::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_ANY);
}

void VehicleAction_Destroy::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
