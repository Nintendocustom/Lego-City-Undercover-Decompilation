#include "script/actions/SAction_AtkMngr_AddAttacker.h"

SAction_AtkMngr_AddAttacker::SAction_AtkMngr_AddAttacker() {
    m_Member0xd = 0;
}

const char* SAction_AtkMngr_AddAttacker::GetName() const {
    return "AddAttacker";
}

void SAction_AtkMngr_AddAttacker::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_CHARACTER);
}

void SAction_AtkMngr_AddAttacker::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}