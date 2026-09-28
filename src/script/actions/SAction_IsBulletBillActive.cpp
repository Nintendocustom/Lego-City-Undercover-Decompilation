#include "script/actions/SAction_IsBulletBillActive.h"

const char* SAction_IsBulletBillActive::GetName() const {
    return "IsBulletBillActive";
}

void SAction_IsBulletBillActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_IsBulletBillActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
