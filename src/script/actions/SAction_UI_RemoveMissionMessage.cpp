#include "script/actions/SAction_UI_RemoveMissionMessage.h"

const char* SAction_UI_RemoveMissionMessage::GetName() const {
    return "UI_RemoveMissionMessage";
}

void SAction_UI_RemoveMissionMessage::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_UI_RemoveMissionMessage::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
