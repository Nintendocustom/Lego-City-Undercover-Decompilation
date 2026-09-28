#include "script/actions/SAction_OverrideKrawlieLODDistances.h"

const char* SAction_OverrideKrawlieLODDistances::GetName() const {
    return "OverrideKrawlieLODDistances";
}

void SAction_OverrideKrawlieLODDistances::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
}

void SAction_OverrideKrawlieLODDistances::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
