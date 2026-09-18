#include "script/actions/SAction_PursueFromTrafficDriver.h"

const char* SAction_PursueFromTrafficDriver::GetName() const {
    return "PursueFromTrafficDriver";
}

void SAction_PursueFromTrafficDriver::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);
}

void SAction_PursueFromTrafficDriver::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
