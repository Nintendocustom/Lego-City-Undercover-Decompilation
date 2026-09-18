#include "script/actions/SAction_FastTravelStationScript.h"

const char* SAction_FastTravelStationScript::GetName() const {
    return "FastTravelStationScript";
}

void SAction_FastTravelStationScript::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
    params.AddParam(SV_GIZMO);
}

void SAction_FastTravelStationScript::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}

ActionState SAction_FastTravelStationScript::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}
