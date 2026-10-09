#include "script/actions/SAction_CharacterGetPaintColour.h"

const char* SAction_CharacterGetPaintColour::GetName() const {
    return "GetPaintColour";
}

void SAction_CharacterGetPaintColour::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
}

void SAction_CharacterGetPaintColour::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
}