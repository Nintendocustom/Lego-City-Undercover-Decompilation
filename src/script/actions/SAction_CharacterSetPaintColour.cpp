#include "script/actions/SAction_CharacterSetPaintColour.h"

const char* SAction_CharacterSetPaintColour::GetName() const {
    return "Character_SetPaintColour";
}

void SAction_CharacterSetPaintColour::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_CHARACTER);
    params.AddParam(SV_TEXT);
}

void SAction_CharacterSetPaintColour::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}