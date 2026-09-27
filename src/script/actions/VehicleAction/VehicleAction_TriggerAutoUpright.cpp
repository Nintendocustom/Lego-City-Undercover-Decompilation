#include "script/actions/VehicleAction/VehicleAction_TriggerAutoUpright.h"

const char* VehicleAction_TriggerAutoUpright::GetName() const {
    return "Vehicle_TriggerAutoUpright";
}

void VehicleAction_TriggerAutoUpright::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_TriggerAutoUpright::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
