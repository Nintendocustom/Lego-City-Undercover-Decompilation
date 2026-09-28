#include "script/actions/SAction_GoThroughDoor.h"

const char* SAction_GoThroughDoor::GetName() const {
    return "PlayerGoThroughDoor";
}

void SAction_GoThroughDoor::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_GoThroughDoor::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
