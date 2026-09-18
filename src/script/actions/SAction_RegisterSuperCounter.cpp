#include "script/actions/SAction_RegisterSuperCounter.h"

const char* SAction_RegisterSuperCounter::GetName() const {
    return "RegisterSuperCounter";
}

void SAction_RegisterSuperCounter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
}

void SAction_RegisterSuperCounter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
