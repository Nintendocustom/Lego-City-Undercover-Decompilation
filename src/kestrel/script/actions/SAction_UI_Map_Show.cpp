#include "kestrel/script/actions/SAction_UI_Map_Show.h"

const char* SAction_UI_Map_Show::GetName() const {
    return "UI_Map_SetVehicleActive";
}
void SAction_UI_Map_Show::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_ANY);
}
void SAction_UI_Map_Show::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
