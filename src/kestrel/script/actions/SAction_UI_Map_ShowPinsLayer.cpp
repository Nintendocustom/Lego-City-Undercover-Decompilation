#include "kestrel/script/actions/SAction_UI_Map_ShowPinsLayer.h"

const char* SAction_UI_Map_ShowPinsLayer::GetName() const {
    return "UI_Map_ShowPinsLayer";
}
void SAction_UI_Map_ShowPinsLayer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}
void SAction_UI_Map_ShowPinsLayer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
