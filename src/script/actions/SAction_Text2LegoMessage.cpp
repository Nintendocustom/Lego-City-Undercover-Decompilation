#include "script/actions/SAction_Text2LegoMessage.h"

const char* SAction_Text2LegoMessage::GetName() const {
    return "Message";
}

void SAction_Text2LegoMessage::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_Text2LegoMessage::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_MESSAGE);
}
