#include "script/actions/VehicleAction/VehicleAction_IsAtTheEndOfSpline.h"

const char* VehicleAction_IsAtTheEndOfSpline::GetName() const {
    return "Vehicle_IsAtTheEndOfSpline";
}

void VehicleAction_IsAtTheEndOfSpline::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_IsAtTheEndOfSpline::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
