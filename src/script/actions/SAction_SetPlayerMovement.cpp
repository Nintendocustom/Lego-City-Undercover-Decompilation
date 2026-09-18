#include "script/actions/SAction_SetPlayerMovement.h"

const char* SAction_SetPlayerMovement::GetName() const {
    return "PlayerSetMovement";
}

void SAction_SetPlayerMovement::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.SanityCheck();
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);

    } else if (m_InputVariant == 1) {
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
        params.AddParam(SV_BOOL);
    }
}

void SAction_SetPlayerMovement::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
