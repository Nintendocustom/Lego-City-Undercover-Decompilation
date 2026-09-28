#include "script/actions/VehicleAction/VehicleAction_TurnOnSiren.h"

const char* VehicleAction_TurnOnSiren::GetName() const {
    return "Vehicle_TurnOnSirene";
}

void VehicleAction_TurnOnSiren::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_TurnOnSiren::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
