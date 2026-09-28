#include "script/actions/VehicleAction/VehicleAction_DisableManualAIControl.h"

const char* VehicleAction_DisableManualAIControl::GetName() const {
    return "Vehicle_DisableManualAIControl";
}

void VehicleAction_DisableManualAIControl::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_DisableManualAIControl::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
