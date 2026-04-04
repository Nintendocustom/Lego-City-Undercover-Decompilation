#include "kestrel/script/actions/SAction_UI_Map_SetLocatorType.h"

const char* SAction_UI_Map_SetLocatorType::GetName() const {
    return "UI_Map_SetLocatorType";
}
void SAction_UI_Map_SetLocatorType::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
    params.AddParam(SV_TEXT);
}
void SAction_UI_Map_SetLocatorType::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
