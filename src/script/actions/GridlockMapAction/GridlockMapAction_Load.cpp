#include "script/actions/GridlockMapAction/GridlockMapAction_Load.h"

const char* GridlockMapAction_Load::GetName() const {
    return "GridlockMap_Load";
}

void GridlockMapAction_Load::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GRIDLOCK_MAP);
}

void GridlockMapAction_Load::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
