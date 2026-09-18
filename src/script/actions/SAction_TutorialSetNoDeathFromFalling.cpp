#include "script/actions/SAction_TutorialSetNoDeathFromFalling.h"

const char* SAction_TutorialSetNoDeathFromFalling::GetName() const {
    return "TutorialSetNoFalling";
}

void SAction_TutorialSetNoDeathFromFalling::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}

void SAction_TutorialSetNoDeathFromFalling::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
