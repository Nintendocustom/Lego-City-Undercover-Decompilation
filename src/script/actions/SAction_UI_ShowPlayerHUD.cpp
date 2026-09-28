#include "script/actions/SAction_UI_ShowPlayerHUD.h"

const char* SAction_UI_ShowPlayerHUD::GetName() const {
    return "UI_ShowPlayerHUD";
}

void SAction_UI_ShowPlayerHUD::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UI_ShowPlayerHUD::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
