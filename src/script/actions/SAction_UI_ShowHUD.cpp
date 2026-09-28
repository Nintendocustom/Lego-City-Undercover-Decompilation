#include "script/actions/SAction_UI_ShowHUD.h"

const char* SAction_UI_ShowHUD::GetName() const {
    return "UI_ShowHUD";
}

void SAction_UI_ShowHUD::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UI_ShowHUD::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
