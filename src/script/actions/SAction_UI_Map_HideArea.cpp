#include "script/actions/SAction_UI_Map_HideArea.h"

const char* SAction_UI_Map_HideArea::GetName() const {
    return "UI_Map_HideArea";
}

void SAction_UI_Map_HideArea::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_UI_Map_HideArea::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
