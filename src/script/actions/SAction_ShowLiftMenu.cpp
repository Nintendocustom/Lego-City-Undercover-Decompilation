#include "script/actions/SAction_ShowLiftMenu.h"

const char* SAction_ShowLiftMenu::GetName() const {
    return "ShowLiftMenu";
}

void SAction_ShowLiftMenu::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_ANY);
}

void SAction_ShowLiftMenu::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
