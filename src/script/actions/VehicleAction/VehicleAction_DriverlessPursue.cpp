#include "script/actions/VehicleAction/VehicleAction_DriverlessPursue.h"

const char* VehicleAction_DriverlessPursue::GetName() const {
    return "Vehicle_DriverlessPursue";
}

void VehicleAction_DriverlessPursue::GetInputs(SCmdParams& params) const {
    switch (m_InputVariant) {
    case 3:
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_ANY);
        break;
    case 2:
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_NUMBER);
        break;
    case 1:
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_ANY);
        break;
    default:
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_NUMBER);
        break;
    }
}

void VehicleAction_DriverlessPursue::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
