#include "script/actions/SAction_AILocatorSetGetLocator.h"

const char* SAction_AILocatorSetGetLocator::GetName() const {
    return "GetLocatorFromLocatorSet";
}

void SAction_AILocatorSetGetLocator::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR_SET);
    params.AddParam(SV_NUMBER);
}

void SAction_AILocatorSetGetLocator::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
}
