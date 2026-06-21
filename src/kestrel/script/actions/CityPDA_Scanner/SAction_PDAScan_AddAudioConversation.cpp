#include "kestrel/script/actions/CityPDA_Scanner/SAction_PDAScan_AddAudioConversation.h"

const char* SAction_PDAScan_AddAudioConversation::GetName() const {
    return "PDAScan_AddAudioConversation";
}
void SAction_PDAScan_AddAudioConversation::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
    params.AddParam(SV_LOCATOR);
    params.AddParam(SV_HASH);
    if (m_InputVariant == 1) {
        params.AddParam(SV_TEXT);
    }
}
void SAction_PDAScan_AddAudioConversation::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
