#include "script/actions/SAction_DisableAggressiveVehiclesFromTraffic.h"

const char* SAction_DisableAggressiveVehiclesFromTraffic::GetName() const {
    return "DisableAggressiveVehiclesFromTraffic";
}

void SAction_DisableAggressiveVehiclesFromTraffic::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
}

void SAction_DisableAggressiveVehiclesFromTraffic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
