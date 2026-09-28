#include "script/actions/SAction_StreamedCharacterReleaseAll.h"

const char* SAction_StreamedCharacterReleaseAll::GetName() const {
    return "StreamedCharacterReleaseAll";
}

void SAction_StreamedCharacterReleaseAll::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}

void SAction_StreamedCharacterReleaseAll::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
