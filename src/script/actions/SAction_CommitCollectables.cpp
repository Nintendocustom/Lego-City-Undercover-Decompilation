#include "script/actions/SAction_CommitCollectables.h"

const char* SAction_CommitCollectables::GetName() const {
    return "CommitCollectables";
}

void SAction_CommitCollectables::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}

void SAction_CommitCollectables::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
