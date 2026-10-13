#include "script/actions/SAction_AtkMngr_SetDiffculty.h"

SAction_AtkMngr_SetDiffculty::SAction_AtkMngr_SetDiffculty() {
    m_Member0xd = 1;
}

const char* SAction_AtkMngr_SetDiffculty::GetName() const {
    return "SetDifficulty";
}

void SAction_AtkMngr_SetDiffculty::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_NUMBER);
}

void SAction_AtkMngr_SetDiffculty::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}