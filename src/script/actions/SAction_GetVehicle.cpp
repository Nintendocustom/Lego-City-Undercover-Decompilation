#include "script/actions/SAction_GetVehicle.h"

const char* SAction_GetVehicle::GetName() const {
    return "GetVehicle";
}

void SAction_GetVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_GetVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE, "This ApiVehicle");
}
