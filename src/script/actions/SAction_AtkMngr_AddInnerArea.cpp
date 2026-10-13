#include "script/actions/SAction_AtkMngr_AddInnerArea.h"

SAction_AtkMngr_AddInnerArea::SAction_AtkMngr_AddInnerArea() {
    m_Member0xc = 1;
}

const char* SAction_AtkMngr_AddInnerArea::GetName() const {
    return "AddInnerArea";
}

void SAction_AtkMngr_AddInnerArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ATTACK_MANAGER);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_AREA);
}

void SAction_AtkMngr_AddInnerArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}