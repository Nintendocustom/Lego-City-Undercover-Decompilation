#include "script/actions/SAction_ConvertKrawlieToCharacter.h"

const char* SAction_ConvertKrawlieToCharacter::GetName() const {
    return "ConvertKrawlieToCharacter";
}

void SAction_ConvertKrawlieToCharacter::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_BOOL);
}

void SAction_ConvertKrawlieToCharacter::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}
