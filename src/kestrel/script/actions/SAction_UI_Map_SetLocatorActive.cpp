#include "kestrel/script/actions/SAction_UI_Map_SetLocatorActive.h"

const char* SAction_UI_Map_SetLocatorActive::GetName() const {
    return "UI_Map_SetLocatorActive";
}
void SAction_UI_Map_SetLocatorActive::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
    params.AddParam(SV_BOOL);
    params.AddParam(SV_ANY);
}
void SAction_UI_Map_SetLocatorActive::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
