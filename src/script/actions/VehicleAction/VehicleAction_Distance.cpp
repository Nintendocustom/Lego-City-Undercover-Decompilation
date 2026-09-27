#include "script/actions/VehicleAction/VehicleAction_Distance.h"

const char* VehicleAction_Distance::GetName() const {
    return "DistanceTo";
}

void VehicleAction_Distance::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_POSITION);
}

void VehicleAction_Distance::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
