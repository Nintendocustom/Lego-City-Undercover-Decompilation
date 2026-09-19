#include "script/actions/CharacterAction/CharacterAction_AddDriveRubberBand.h"

const char* CharacterAction_AddDriveRubberBand::GetName() const {
    return "Character_AddDriveRubberBand";
}

void CharacterAction_AddDriveRubberBand::GetInputs(SCmdParams& params) const {
    if (m_InputVariant == 1) {
        params.SanityCheck();
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_VEHICLE);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    } else {
        params.SanityCheck();
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_CHARACTER);
        params.AddParam(SV_NUMBER);
        params.AddParam(SV_NUMBER);
    }
}

void CharacterAction_AddDriveRubberBand::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
