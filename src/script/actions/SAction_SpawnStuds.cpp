#include "script/actions/SAction_SpawnStuds.h"

const char* SAction_SpawnStuds::GetName() const {
    return "SpawnStuds";
}

void SAction_SpawnStuds::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_POSITION);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_ANY);
}

void SAction_SpawnStuds::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
