#include "kestrel/script/actions/SAction_UI_Map_TransformHintArrow_PlayerSpecific.h"

const char* SAction_UI_Map_TransformHintArrow_PlayerSpecific::GetName() const {
    return "UI_Map_TransformHintArrow_PlayerSpecific";
}
void SAction_UI_Map_TransformHintArrow_PlayerSpecific::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 0) {
        params.SanityCheck();
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_CHARACTER);
    } else if (m_InputVariant == 1) {
        params.AddParam(SV_POSITION);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_BOOL);
        params.AddParam(SV_CHARACTER);
    }
}
void SAction_UI_Map_TransformHintArrow_PlayerSpecific::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
