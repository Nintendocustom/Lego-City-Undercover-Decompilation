#include "script/actions/SAction_AILocatorSet2Text.h"

const char* SAction_AILocatorSet2Text::GetName() const {
    return "Text";
}

void SAction_AILocatorSet2Text::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR_SET);
}

void SAction_AILocatorSet2Text::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}
