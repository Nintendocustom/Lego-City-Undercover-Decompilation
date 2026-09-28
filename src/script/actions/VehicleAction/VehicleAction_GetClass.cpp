#include "script/actions/VehicleAction/VehicleAction_GetClass.h"

const char* VehicleAction_GetClass::GetName() const {
    return "Vehicle_GetClass";
}

void VehicleAction_GetClass::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetClass::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
