#include "script/actions/SAction_SVarSoundListener_SetFocusPositionEnabled.h"

const char* SAction_SVarSoundListener_SetFocusPositionEnabled::GetName() const {
    return "SoundListener_SetFocusPositionEnabled";
}

void SAction_SVarSoundListener_SetFocusPositionEnabled::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_SOUND_LISTENER);
    params.AddParam(SV_BOOL);
}

void SAction_SVarSoundListener_SetFocusPositionEnabled::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}