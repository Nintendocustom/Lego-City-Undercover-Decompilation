#include "script/actions/SAction_AILocatorSet.h"

const char* SAction_AILocatorSet::GetName() const {
    return "LocatorSet";
}

void SAction_AILocatorSet::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_AILocatorSet::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR_SET);
}
