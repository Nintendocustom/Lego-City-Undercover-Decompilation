#include "script/actions/SAction_TriggerAutoSave.h"

const char* SAction_TriggerAutoSave::GetName() const {
    return "TriggerAutoSave";
}

void SAction_TriggerAutoSave::GetInputs(SCmdParams& params) const {
    if (m_InputVariant != 0) {
        params.AddParam(SV_BOOL);
        return;
    }
    params.SanityCheck();
}

void SAction_TriggerAutoSave::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
