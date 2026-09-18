#include "script/actions/SAction_CutscenePlay.h"

const char* SAction_CutscenePlay::GetName() const {
    return "Cutscene_Play";
}

void SAction_CutscenePlay::GetInputs(SCmdParams& params) const {
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
}

void SAction_CutscenePlay::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
