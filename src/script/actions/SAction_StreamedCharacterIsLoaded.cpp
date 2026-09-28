#include "script/actions/SAction_StreamedCharacterIsLoaded.h"

const char* SAction_StreamedCharacterIsLoaded::GetName() const {
    return "StreamedCharacterIsLoaded";
}

void SAction_StreamedCharacterIsLoaded::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
}

void SAction_StreamedCharacterIsLoaded::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
