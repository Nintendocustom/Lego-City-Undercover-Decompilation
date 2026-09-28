#include "script/actions/SAction_GridlockToggleLayer.h"

const char* SAction_GridlockToggleLayer::GetName() const {
    return "GridlockToggleLayer";
}

void SAction_GridlockToggleLayer::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
}

void SAction_GridlockToggleLayer::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GRIDLOCK_TOGGLE_LAYER);
}
