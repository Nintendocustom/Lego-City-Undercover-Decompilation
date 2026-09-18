#include "script/actions/SAction_GetVehicleInArea.h"

const char* SAction_GetVehicleInArea::GetName() const {
    return "GetVehicleInArea";
}

void SAction_GetVehicleInArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_AREA);
}

void SAction_GetVehicleInArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}
