#include "script/actions/VehicleAction/VehicleAction_AttachToSpline_LoopTheLoop.h"

const char* VehicleAction_AttachToSpline_LoopTheLoop::GetName() const {
    return "Vehicle_AttachToSpline_LoopTheLoop";
}

void VehicleAction_AttachToSpline_LoopTheLoop::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_TEXT);
}

void VehicleAction_AttachToSpline_LoopTheLoop::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
