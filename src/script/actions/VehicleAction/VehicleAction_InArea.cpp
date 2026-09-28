#include "script/actions/VehicleAction/VehicleAction_InArea.h"

const char* VehicleAction_InArea::GetName() const {
    return "Vehicle_InArea";
}

void VehicleAction_InArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_AREA);
}

void VehicleAction_InArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
