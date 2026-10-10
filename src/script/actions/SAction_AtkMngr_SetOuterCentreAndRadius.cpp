#include "script/actions/SAction_AtkMngr_SetOuterCentreAndRadius.h"

SAction_AtkMngr_SetOuterCentreAndRadius::SAction_AtkMngr_SetOuterCentreAndRadius() {
    m_Member0xc = 1;
}

const char* SAction_AtkMngr_SetOuterCentreAndRadius::GetName() const {
    return "SetOuterCentreAndRadius";
}

void SAction_AtkMngr_SetOuterCentreAndRadius::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_POSITION);
    params.AddParam(SV_NUMBER);
}

void SAction_AtkMngr_SetOuterCentreAndRadius::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}