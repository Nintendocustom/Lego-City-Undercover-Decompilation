#include "script/actions/SAction_UI_WarnAboutProgressOnExitLevel.h"

const char* SAction_UI_WarnAboutProgressOnExitLevel::GetName() const {
    return "UI_WarnAboutProgressOnExitLevel";
}

void SAction_UI_WarnAboutProgressOnExitLevel::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_UI_WarnAboutProgressOnExitLevel::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
