#include "script/actions/SAction_SetParticleEmitterState.h"

const char* SAction_SetParticleEmitterState::GetName() const {
    return "SetParticleEmitterState";
}

void SAction_SetParticleEmitterState::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_BOOL);
}

void SAction_SetParticleEmitterState::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
