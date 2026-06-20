#include "kestrel/script/actions/SAction_TriggerAutoSave.h"

const char* SAction_TriggerAutoSave::GetName() const {
    return "TriggerAutoSave";
}
void SAction_TriggerAutoSave::GetInputs(SCmdParams& params) const {
    if (!*reinterpret_cast<const uint8_t*>(&m_InputVariant)) {
        ActionInstanceData::GetInputs(params);
        return;
    }
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
void SAction_TriggerAutoSave::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
