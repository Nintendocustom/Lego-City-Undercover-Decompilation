#include "script/actions/CharacterAction/CharacterAction_DeployParachute.h"

const char* CharacterAction_DeployParachute::GetName() const {
    return "CharacterAction_DeployParachute";
}

void CharacterAction_DeployParachute::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void CharacterAction_DeployParachute::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
