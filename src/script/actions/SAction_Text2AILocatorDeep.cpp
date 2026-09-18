#include "script/actions/SAction_Text2AILocatorDeep.h"

const char* SAction_Text2AILocatorDeep::GetName() const {
    return "LocatorDeep";
}

void SAction_Text2AILocatorDeep::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2AILocatorDeep::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
}
