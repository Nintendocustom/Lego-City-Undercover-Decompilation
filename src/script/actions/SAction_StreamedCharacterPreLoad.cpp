#include "script/actions/SAction_StreamedCharacterPreLoad.h"

const char* SAction_StreamedCharacterPreLoad::GetName() const {
    return "StreamedCharacterPreLoad";
}

void SAction_StreamedCharacterPreLoad::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_StreamedCharacterPreLoad::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
