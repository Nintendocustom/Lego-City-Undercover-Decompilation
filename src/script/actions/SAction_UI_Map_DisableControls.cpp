#include "script/actions/SAction_UI_Map_DisableControls.h"

const char* SAction_UI_Map_DisableControls::GetName() const {
    return "UI_Map_DisableControls";
}

void SAction_UI_Map_DisableControls::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_UI_Map_DisableControls::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
