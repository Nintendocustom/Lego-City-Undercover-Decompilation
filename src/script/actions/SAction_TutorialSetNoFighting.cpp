#include "script/actions/SAction_TutorialSetNoFighting.h"

const char* SAction_TutorialSetNoFighting::GetName() const {
    return "TutorialSetNoFighting";
}

void SAction_TutorialSetNoFighting::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_TutorialSetNoFighting::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
