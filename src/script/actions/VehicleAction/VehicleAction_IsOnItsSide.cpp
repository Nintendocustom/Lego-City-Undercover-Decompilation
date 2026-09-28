#include "script/actions/VehicleAction/VehicleAction_IsOnItsSide.h"

const char* VehicleAction_IsOnItsSide::GetName() const {
    return "VehicleAction_IsOnItsSide";
}

void VehicleAction_IsOnItsSide::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_IsOnItsSide::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
