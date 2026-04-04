#include "kestrel/script/actions/SAction_UI_Map_ShowHintArrow.h"

const char* SAction_UI_Map_ShowHintArrow::GetName() const {
    return "UI_Map_ShowHintArrow";
}
void SAction_UI_Map_ShowHintArrow::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}
void SAction_UI_Map_ShowHintArrow::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
