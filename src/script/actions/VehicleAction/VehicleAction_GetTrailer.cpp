#include "script/actions/VehicleAction/VehicleAction_GetTrailer.h"

const char* VehicleAction_GetTrailer::GetName() const {
    return "Vehicle_GetTrailer";
}

void VehicleAction_GetTrailer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetTrailer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}
