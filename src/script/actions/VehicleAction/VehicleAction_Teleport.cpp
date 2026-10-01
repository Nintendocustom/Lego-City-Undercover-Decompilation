#include "script/actions/VehicleAction/VehicleAction_Teleport.h"

const char* VehicleAction_Teleport::GetName() const {
    return "Vehicle_Teleport";
}

void VehicleAction_Teleport::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_POSITION);
    if (m_InputVariant != 0) {
        params.AddParam(SV_NUMBER);
    }
}

void VehicleAction_Teleport::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
