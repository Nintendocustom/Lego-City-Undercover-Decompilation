#include "script/actions/SAction_RequestParkedVehicle.h"

const char* SAction_RequestParkedVehicle::GetName() const {
    return "RequestParkedVehicle";
}

void SAction_RequestParkedVehicle::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.AddParam(SV_WORLD_LEVEL);
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_POSITION);
    } else if (m_InputVariant == 1) {
        params.AddParam(SV_WORLD_LEVEL);
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
    } else if (m_InputVariant == 2) {
        params.AddParam(SV_WORLD_LEVEL);
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_HASH);
    } else if (m_InputVariant == 3) {
        params.AddParam(SV_WORLD_LEVEL);
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_HASH);
        params.AddParam(SV_BOOL);
    }
}

void SAction_RequestParkedVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
