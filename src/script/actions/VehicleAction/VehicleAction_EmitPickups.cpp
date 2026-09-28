#include "script/actions/VehicleAction/VehicleAction_EmitPickups.h"

const char* VehicleAction_EmitPickups::GetName() const {
    return "Vehicle_EmitPickups";
}

void VehicleAction_EmitPickups::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_BOOL);
}

void VehicleAction_EmitPickups::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
