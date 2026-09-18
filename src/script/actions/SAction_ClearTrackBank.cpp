#include "script/actions/SAction_ClearTrackBank.h"

const char* SAction_ClearTrackBank::GetName() const {
    return "ClearKrawlieLODDistanceOverrides";
}

void SAction_ClearTrackBank::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_ClearTrackBank::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
