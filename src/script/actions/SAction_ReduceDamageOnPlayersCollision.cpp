#include "script/actions/SAction_ReduceDamageOnPlayersCollision.h"

const char* SAction_ReduceDamageOnPlayersCollision::GetName() const {
    return "ReduceDamageOnPlayersCollision";
}

void SAction_ReduceDamageOnPlayersCollision::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_ReduceDamageOnPlayersCollision::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
