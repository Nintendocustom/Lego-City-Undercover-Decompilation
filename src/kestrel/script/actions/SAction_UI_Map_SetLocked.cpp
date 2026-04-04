#include "kestrel/script/actions/SAction_UI_Map_SetLocked.h"

const char* SAction_UI_Map_SetLocked::GetName() const {
    return "UI_Map_SetLocked";
}
void SAction_UI_Map_SetLocked::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
void SAction_UI_Map_SetLocked::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
