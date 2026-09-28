#include "script/actions/SAction_KillSpawnedTraffic.h"

const char* SAction_KillSpawnedTraffic::GetName() const {
    return "IsStatusScreenActive";
}

void SAction_KillSpawnedTraffic::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_KillSpawnedTraffic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
