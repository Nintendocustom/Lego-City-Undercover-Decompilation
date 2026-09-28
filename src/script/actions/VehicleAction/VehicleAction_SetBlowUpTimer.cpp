#include "script/actions/VehicleAction/VehicleAction_SetBlowUpTimer.h"

const char* VehicleAction_SetBlowUpTimer::GetName() const {
    return "Vehicle_SetBlowUpTimer";
}

void VehicleAction_SetBlowUpTimer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_NUMBER);
}

void VehicleAction_SetBlowUpTimer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
