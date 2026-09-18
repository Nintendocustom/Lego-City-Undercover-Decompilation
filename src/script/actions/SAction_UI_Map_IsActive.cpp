#include "script/actions/SAction_UI_Map_IsActive.h"

const char* SAction_UI_Map_IsActive::GetName() const {
    return "UI_Map_IsActive";
}

void SAction_UI_Map_IsActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void SAction_UI_Map_IsActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
