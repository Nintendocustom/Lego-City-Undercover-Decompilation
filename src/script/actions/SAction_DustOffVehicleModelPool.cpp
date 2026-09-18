#include "script/actions/SAction_DustOffVehicleModelPool.h"

const char* SAction_DustOffVehicleModelPool::GetName() const {
    return "DustOffVehicleModelPool";
}

void SAction_DustOffVehicleModelPool::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_DustOffVehicleModelPool::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
