#include "script/actions/VehicleAction/VehicleAction_ReduceTumbling.h"

const char* VehicleAction_ReduceTumbling::GetName() const {
    return "Vehicle_ReduceTumbling";
}

void VehicleAction_ReduceTumbling::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_ReduceTumbling::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
