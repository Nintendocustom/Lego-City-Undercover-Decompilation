#pragma once

#include "script/actions/CityPDA_Scanner/CityPDA_CommunicatorScriptAction.h"

class SAction_PDAComm_CanTakeCall : public SAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
