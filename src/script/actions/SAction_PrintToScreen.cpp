#include "script/actions/SAction_PrintToScreen.h"

const char* SAction_PrintToScreen::GetName() const {
    return "PrintToScreen";
}

void SAction_PrintToScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_PrintToScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
