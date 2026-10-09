#include "script/actions/SAction_SVarSoundListener_Constructor_Character.h"

const char* SAction_SVarSoundListener_Constructor_Character::GetName() const {
    return "SoundListener";
}

void SAction_SVarSoundListener_Constructor_Character::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void SAction_SVarSoundListener_Constructor_Character::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_SOUND_LISTENER);
}
