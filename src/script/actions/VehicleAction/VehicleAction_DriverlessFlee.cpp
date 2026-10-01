#include "script/actions/VehicleAction/VehicleAction_DriverlessFlee.h"

const char* VehicleAction_DriverlessFlee::GetName() const {
    return "Vehicle_DriverlessFlee";
}

void VehicleAction_DriverlessFlee::GetInputs(SCmdParams& params) const {
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

void VehicleAction_DriverlessFlee::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
