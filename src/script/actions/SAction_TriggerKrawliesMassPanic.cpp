#include "script/actions/SAction_TriggerKrawliesMassPanic.h"

const char* SAction_TriggerKrawliesMassPanic::GetName() const {
    return "TriggerKrawliesMassPanic";
}

void SAction_TriggerKrawliesMassPanic::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
    } else if (m_InputVariant == 1) {
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
    }
}

void SAction_TriggerKrawliesMassPanic::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
