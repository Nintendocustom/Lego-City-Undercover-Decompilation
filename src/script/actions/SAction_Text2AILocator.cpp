#include "script/actions/SAction_Text2AILocator.h"

const char* SAction_Text2AILocator::GetName() const {
    return "Locator";
}

void SAction_Text2AILocator::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2AILocator::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
}
