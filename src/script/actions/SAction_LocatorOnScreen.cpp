#include "script/actions/SAction_LocatorOnScreen.h"

const char* SAction_LocatorOnScreen::GetName() const {
    return "LocatorOnScreen";
}

void SAction_LocatorOnScreen::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_LOCATOR);
}

void SAction_LocatorOnScreen::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
