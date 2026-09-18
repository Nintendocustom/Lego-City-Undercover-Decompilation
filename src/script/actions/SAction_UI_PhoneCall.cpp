#include "script/actions/SAction_UI_PhoneCall.h"

const char* SAction_UI_PhoneCall::GetName() const {
    return "UI_PhoneCall";
}

void SAction_UI_PhoneCall::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.AddParam(SV_BOOL);
        params.AddParam(SV_NUMBER);
    } else if (m_InputVariant == 2) {
        params.SanityCheck();
        params.AddParam(SV_BOOL);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_TEXT);
    } else {
        params.AddParam(SV_BOOL);
    }
}

void SAction_UI_PhoneCall::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_UI_PhoneCall::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
