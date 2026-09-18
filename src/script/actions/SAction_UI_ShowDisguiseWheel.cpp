#include "script/actions/SAction_UI_ShowDisguiseWheel.h"

const char* SAction_UI_ShowDisguiseWheel::GetName() const {
    return "UI_ShowDisguiseWheel";
}

void SAction_UI_ShowDisguiseWheel::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_UI_ShowDisguiseWheel::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
