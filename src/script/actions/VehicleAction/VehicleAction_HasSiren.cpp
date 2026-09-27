#include "script/actions/VehicleAction/VehicleAction_HasSiren.h"

const char* VehicleAction_HasSiren::GetName() const {
    return "VehicleAction_HasSiren";
}

void VehicleAction_HasSiren::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_HasSiren::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
