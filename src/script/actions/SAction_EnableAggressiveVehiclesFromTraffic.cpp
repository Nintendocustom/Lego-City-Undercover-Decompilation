#include "script/actions/SAction_EnableAggressiveVehiclesFromTraffic.h"

const char* SAction_EnableAggressiveVehiclesFromTraffic::GetName() const {
    return "EnableAggressiveVehiclesFromTraffic";
}

void SAction_EnableAggressiveVehiclesFromTraffic::GetInputs(SCmdParams& params) const {
    switch (m_InputVariant) {
    case 3:
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_ANY);
        break;
    case 2:
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        break;
    case 1:
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_ANY);
        break;
    default:
        params.AddParam(SV_HASH);
        params.AddParam(SV_HASH);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
        break;
    }
}

void SAction_EnableAggressiveVehiclesFromTraffic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
