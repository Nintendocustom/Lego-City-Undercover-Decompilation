#include "script/actions/SAction_PlayConversation.h"

const char* SAction_PlayConversation::GetName() const {
    return "PlayConversation";
}

void SAction_PlayConversation::GetInputs(SCmdParams& params) const {
    switch (m_InputVariant) {
    case 0:
        params.SanityCheck();
        params.AddParam(SV_TEXT);
        break;
    case 1:
        params.SanityCheck();
        params.AddParam(SV_TEXT);
        params.AddParam(SV_BOOL);
        break;
    }
}

void SAction_PlayConversation::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}