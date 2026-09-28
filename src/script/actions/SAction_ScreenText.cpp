#include "script/actions/SAction_ScreenText.h"

const char* SAction_ScreenText::GetName() const {
    return "ScreenText";
}

void SAction_ScreenText::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_ANY);
}

void SAction_ScreenText::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
