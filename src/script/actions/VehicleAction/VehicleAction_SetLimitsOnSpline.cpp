#include "script/actions/VehicleAction/VehicleAction_SetLimitsOnSpline.h"

const char* VehicleAction_SetLimitsOnSpline::GetName() const {
    return "Vehicle_SetLimitsOnSpline";
}

void VehicleAction_SetLimitsOnSpline::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_SetLimitsOnSpline::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
