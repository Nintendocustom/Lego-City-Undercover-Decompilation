#include "script/actions/SAction_StreamedCharacterRelease.h"

const char* SAction_StreamedCharacterRelease::GetName() const {
    return "StreamedCharacterRelease";
}

void SAction_StreamedCharacterRelease::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_StreamedCharacterRelease::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
