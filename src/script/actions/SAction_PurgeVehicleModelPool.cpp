#include "script/actions/SAction_PurgeVehicleModelPool.h"

const char* SAction_PurgeVehicleModelPool::GetName() const {
    return "PurgeVehicleModelPool";
}

void SAction_PurgeVehicleModelPool::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_PurgeVehicleModelPool::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
