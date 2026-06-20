#include "kestrel/script/actions/CityPDA_Scanner/CityPDA_CommunicatorScriptAction.h"

void CityPDA_CommunicatorScriptAction::GetInputs(SCmdParams& params) const {
    params.SanityCheck();
}
void CityPDA_CommunicatorScriptAction::GetOutputs(SCmdParams& params) const {
    params.SanityCheck();
}
ActionState CityPDA_CommunicatorScriptAction::Exec(ScriptContext& context) {
    return ACTION_FINISHED;
}