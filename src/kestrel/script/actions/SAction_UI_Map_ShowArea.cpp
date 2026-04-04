#include "kestrel/script/actions/SAction_UI_Map_ShowArea.h"

const char* SAction_UI_Map_ShowArea::GetName() const {
    return "UI_Map_ShowArea";
}
void SAction_UI_Map_ShowArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_POSITION);
    params.AddParam(SV_NUMBER);
}
void SAction_UI_Map_ShowArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
