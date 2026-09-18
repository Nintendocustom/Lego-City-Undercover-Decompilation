#include "script/actions/SAction_UI_IsDisguiseWheelActive.h"

const char* SAction_UI_IsDisguiseWheelActive::GetName() const {
    return "UI_IsDisguiseWheelActive";
}

void SAction_UI_IsDisguiseWheelActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_IsDisguiseWheelActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
