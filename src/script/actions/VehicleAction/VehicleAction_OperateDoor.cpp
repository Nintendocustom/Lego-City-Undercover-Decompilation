#include "script/actions/VehicleAction/VehicleAction_OperateDoor.h"

const char* VehicleAction_OperateDoor::GetName() const {
    return "Vehicle_OperateDoor";
}

void VehicleAction_OperateDoor::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_BOOL);
}

void VehicleAction_OperateDoor::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
