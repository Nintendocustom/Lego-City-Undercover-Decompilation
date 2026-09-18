#include "script/actions/SAction_TakeSnapShot.h"

const char* SAction_TakeSnapShot::GetName() const {
    return "TakeSnapShot";
}

void SAction_TakeSnapShot::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_TakeSnapShot::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
