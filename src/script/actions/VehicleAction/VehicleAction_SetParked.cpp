#include "script/actions/VehicleAction/VehicleAction_SetParked.h"

const char* VehicleAction_SetParked::GetName() const {
    return "Vehicle_SetParked";
}

void VehicleAction_SetParked::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_BOOL);
    if (m_InputVariant != 0) {
        params.AddParam(SV_NUMBER);
    }
}

void VehicleAction_SetParked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
