#include "script/actions/SAction_AILocator2Text.h"

const char* SAction_AILocator2Text::GetName() const {
    return "Text";
}

void SAction_AILocator2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
}

void SAction_AILocator2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
