#include "script/actions/VehicleAction/VehicleAction_DistanceXZ.h"

const char* VehicleAction_DistanceXZ::GetName() const {
    return "DistanceToXZ";
}

void VehicleAction_DistanceXZ::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_POSITION);
}

void VehicleAction_DistanceXZ::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
