#include "script/actions/SAction_DisablePursueFromTraffic.h"

uint32_t SAction_DisablePursueFromTraffic::sm_ReleasePursuers = 0;
uint32_t SAction_DisablePursueFromTraffic::sm_DestroyPursuers = 0;

const char* SAction_DisablePursueFromTraffic::GetName() const {
    return "DisablePursueFromTraffic";
}

void SAction_DisablePursueFromTraffic::GetInputs(SCmdParams& params) const {
    int InputVariant = this->m_InputVariant;

    params.SanityCheck();
    params.AddParam(SV_HASH);

    params.SanityCheck();
    params.AddParam(SV_HASH);

    if (InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_ANY);
    }
}

void SAction_DisablePursueFromTraffic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
