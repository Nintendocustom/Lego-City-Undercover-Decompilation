#include "script/actions/SAction_UI_Map_Hide.h"

const char* SAction_UI_Map_Hide::GetName() const {
    return "UI_Map_Hide";
}

void SAction_UI_Map_Hide::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}

void SAction_UI_Map_Hide::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
