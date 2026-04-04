#include "kestrel/script/actions/SAction_UI_Map_SetCharacterActive.h"

const char* SAction_UI_Map_SetCharacterActive::GetName() const {
    return "UI_Map_SetCharacterActive";
}
void SAction_UI_Map_SetCharacterActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_BOOL);
}
void SAction_UI_Map_SetCharacterActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
