#include "script/actions/VehicleAction/VehicleAction_SetScript.h"

const char* VehicleAction_SetScript::GetName() const {
    return "Vehicle_SetScript";
}

void VehicleAction_SetScript::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_TEXT);
}

void VehicleAction_SetScript::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
