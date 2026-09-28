#include "script/actions/SAction_AILocatorSetSize.h"

const char* SAction_AILocatorSetSize::GetName() const {
    return "GetLocatorSetSize";
}

void SAction_AILocatorSetSize::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR_SET);
}

void SAction_AILocatorSetSize::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}
