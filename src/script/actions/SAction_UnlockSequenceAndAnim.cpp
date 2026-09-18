#include "script/actions/SAction_UnlockSequenceAndAnim.h"

const char* SAction_UnlockSequenceAndAnim::GetName() const {
    return "UnlockSequenceAndAnim";
}

void SAction_UnlockSequenceAndAnim::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_TEXT);
}

void SAction_UnlockSequenceAndAnim::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
