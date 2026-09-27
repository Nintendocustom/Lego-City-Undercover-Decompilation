#include "script/actions/VehicleAction/VehicleAction_DisableControls.h"

const char* VehicleAction_DisableControls::GetName() const {
    return "Vehicle_DisableControls";
}

void VehicleAction_DisableControls::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
}

void VehicleAction_DisableControls::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
