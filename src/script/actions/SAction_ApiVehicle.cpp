#include "script/actions/SAction_ApiVehicle.h"

const char* SAction_ApiVehicle::GetName() const {
    return "Vehicle";
}

void SAction_ApiVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_ApiVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}
