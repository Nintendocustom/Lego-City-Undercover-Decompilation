#include "script/actions/VehicleAction/VehicleAction_ReleaseCarriage.h"

const char* VehicleAction_ReleaseCarriage::GetName() const {
    return "Vehicle_ReleaseCarriage";
}

void VehicleAction_ReleaseCarriage::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_ReleaseCarriage::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
