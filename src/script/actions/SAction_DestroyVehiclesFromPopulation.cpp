#include "script/actions/SAction_DestroyVehiclesFromPopulation.h"

const char* SAction_DestroyVehiclesFromPopulation::GetName() const {
    return "DestroyVehiclesFromPopulation";
}

void SAction_DestroyVehiclesFromPopulation::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
}

void SAction_DestroyVehiclesFromPopulation::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
