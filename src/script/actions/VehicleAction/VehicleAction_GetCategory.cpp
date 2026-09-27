#include "script/actions/VehicleAction/VehicleAction_GetCategory.h"

const char* VehicleAction_GetCategory::GetName() const {
    return "Vehicle_GetCategory";
}

void VehicleAction_GetCategory::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
}

void VehicleAction_GetCategory::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
