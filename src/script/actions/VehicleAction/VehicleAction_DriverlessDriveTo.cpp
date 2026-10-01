#include "script/actions/VehicleAction/VehicleAction_DriverlessDriveTo.h"

const char* VehicleAction_DriverlessDriveTo::GetName() const {
    return "Vehicle_DriverlessDriveTo";
}

void VehicleAction_DriverlessDriveTo::GetInputs(SCmdParams& params) const {
    switch (m_InputVariant) {
    case 0:
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_LOCATOR);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_ANY);
        break;
    case 1:
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_ANY);
        break;
    }
}

void VehicleAction_DriverlessDriveTo::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
