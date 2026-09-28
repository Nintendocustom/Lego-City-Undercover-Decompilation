#include "script/actions/VehicleAction/VehicleAction_AddKrawliePassenger.h"

const char* VehicleAction_AddKrawliePassenger::GetName() const {
    return "Vehicle_AddKrawliePassenger";
}

void VehicleAction_AddKrawliePassenger::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
}

void VehicleAction_AddKrawliePassenger::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
