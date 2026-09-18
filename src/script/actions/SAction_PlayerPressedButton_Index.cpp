#include "script/actions/SAction_PlayerPressedButton_Index.h"

const char* SAction_PlayerPressedButton_Index::GetName() const {
    return "PlayerPressedButton";
}

void SAction_PlayerPressedButton_Index::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_NUMBER);
    params.AddParam(SV_TEXT);
}

void SAction_PlayerPressedButton_Index::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_BOOL);
}
