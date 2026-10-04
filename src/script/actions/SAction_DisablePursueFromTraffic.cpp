#include "script/actions/SAction_DisablePursueFromTraffic.h"

const char* SAction_DisablePursueFromTraffic::GetName() const {
    return "DisablePursueFromTraffic";
}

void SAction_DisablePursueFromTraffic::GetInputs(SCmdParams& params) const {
    int field = this->m_field_0xc;

    params.SanityCheck();
    params.AddParam(SV_HASH);

    params.SanityCheck();
    params.AddParam(SV_HASH);

    if (field == 1) {
        params.SanityCheck();
        params.AddParam(SV_ANY);
    }
}

void SAction_DisablePursueFromTraffic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
