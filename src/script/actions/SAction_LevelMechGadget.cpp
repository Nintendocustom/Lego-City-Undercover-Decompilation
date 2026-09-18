#include "script/actions/SAction_LevelMechGadget.h"

const char* SAction_LevelMechGadget::GetName() const {
    return "Gadget";
}

void SAction_LevelMechGadget::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_TEXT);
    params.AddParam(SV_WORLD_LEVEL);
}

void SAction_LevelMechGadget::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GADGET);
}
