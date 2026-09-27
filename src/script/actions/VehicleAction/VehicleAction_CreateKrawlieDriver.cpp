#include "script/actions/VehicleAction/VehicleAction_CreateKrawlieDriver.h"

const char* VehicleAction_CreateKrawlieDriver::GetName() const {
    return "Vehicle_CreateKrawlieDriver";
}

void VehicleAction_CreateKrawlieDriver::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_VEHICLE);
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
}

void VehicleAction_CreateKrawlieDriver::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
