#include "script/actions/SAction_Text2ApiVehicle.h"

const char* SAction_Text2ApiVehicle::GetName() const {
    return "Vehicle";
}

void SAction_Text2ApiVehicle::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2ApiVehicle::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}
