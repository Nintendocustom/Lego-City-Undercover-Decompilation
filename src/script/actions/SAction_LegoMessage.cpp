#include "script/actions/SAction_LegoMessage.h"

const char* SAction_LegoMessage::GetName() const {
    return "Message";
}

void SAction_LegoMessage::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_LegoMessage::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_MESSAGE);
}
