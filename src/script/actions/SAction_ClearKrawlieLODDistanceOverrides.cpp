#include "script/actions/SAction_ClearKrawlieLODDistanceOverrides.h"

const char* SAction_ClearKrawlieLODDistanceOverrides::GetName() const {
    return "ClearKrawlieLODDistanceOverrides";
}

void SAction_ClearKrawlieLODDistanceOverrides::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_ClearKrawlieLODDistanceOverrides::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
