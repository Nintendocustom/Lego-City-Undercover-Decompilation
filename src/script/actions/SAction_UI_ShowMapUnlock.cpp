#include "script/actions/SAction_UI_ShowMapUnlock.h"

const char* SAction_UI_ShowMapUnlock::GetName() const {
    return "UI_ShowMapUnlock";
}

void SAction_UI_ShowMapUnlock::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UI_ShowMapUnlock::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
