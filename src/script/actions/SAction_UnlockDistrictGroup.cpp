#include "script/actions/SAction_UnlockDistrictGroup.h"

const char* SAction_UnlockDistrictGroup::GetName() const {
    return "UnlockDistrictGroup";
}

void SAction_UnlockDistrictGroup::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
}

void SAction_UnlockDistrictGroup::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
