#include "script/actions/SAction_IsDistrictGroupUnlocked.h"

const char* SAction_IsDistrictGroupUnlocked::GetName() const {
    return "IsDistrictGroupUnlocked";
}

void SAction_IsDistrictGroupUnlocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}

void SAction_IsDistrictGroupUnlocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
