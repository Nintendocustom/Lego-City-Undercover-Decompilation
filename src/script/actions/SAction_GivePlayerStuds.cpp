#include "script/actions/SAction_GivePlayerStuds.h"

const char* SAction_GivePlayerStuds::GetName() const {
    return "PlayerGiveStuds";
}

void SAction_GivePlayerStuds::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}

void SAction_GivePlayerStuds::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
