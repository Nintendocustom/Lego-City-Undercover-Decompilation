#include "script/actions/SAction_AtkMngr_FinishAreaDefinition.h"

SAction_AtkMngr_FinishAreaDefinition::SAction_AtkMngr_FinishAreaDefinition() {
    m_Member0xc = 1;
}

const char* SAction_AtkMngr_FinishAreaDefinition::GetName() const {
    return "FinishAreaDefinition";
}

void SAction_AtkMngr_FinishAreaDefinition::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
}

void SAction_AtkMngr_FinishAreaDefinition::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}