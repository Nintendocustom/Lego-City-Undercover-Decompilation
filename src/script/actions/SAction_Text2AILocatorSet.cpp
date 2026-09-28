#include "script/actions/SAction_Text2AILocatorSet.h"

const char* SAction_Text2AILocatorSet::GetName() const {
    return "LocatorSet";
}

void SAction_Text2AILocatorSet::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2AILocatorSet::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR_SET);
}
