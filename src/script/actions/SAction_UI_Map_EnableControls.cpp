#include "script/actions/SAction_UI_Map_EnableControls.h"

const char* SAction_UI_Map_EnableControls::GetName() const {
    return "UI_Map_EnableControls";
}

void SAction_UI_Map_EnableControls::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_UI_Map_EnableControls::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
