#include "kestrel/script/actions/SAction_UI_Map_TransformHintArrow.h"

const char* SAction_UI_Map_TransformHintArrow::GetName() const {
    return "UI_Map_StartTutorial";
}
void SAction_UI_Map_TransformHintArrow::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.SanityCheck();
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
    } else if (m_InputVariant == 1) {
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
    }
}
void SAction_UI_Map_TransformHintArrow::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
