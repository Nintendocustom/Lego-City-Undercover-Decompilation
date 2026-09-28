#include "script/actions/VehicleAction/VehicleAction_SetBossIcons.h"

const char* VehicleAction_SetBossIcons::GetName() const {
    return "Vehicle_SetBossIcons";
}

void VehicleAction_SetBossIcons::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_ANY);
}

void VehicleAction_SetBossIcons::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
