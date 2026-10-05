#include "script/actions/SAction_DisablePursueFromTraffic.h"

const char* SAction_DisablePursueFromTraffic::GetName() const {
    return "DisablePursueFromTraffic";
}

void SAction_DisablePursueFromTraffic::GetInputs(SCmdParams& params) const {
    int InputVariant = m_InputVariant;

    params.SanityCheck();
    params.AddParam(SV_HASH);
    params.AddParam(SV_HASH);

    if (InputVariant == 1) {
        params.AddParam(SV_ANY);
    }
}

void SAction_DisablePursueFromTraffic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
