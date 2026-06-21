#pragma once

#include "kestrel/script/actions/CityPDA_Scanner/CityPDA_CommunicatorScriptAction.h"

class SAction_PDAComm_SetVideoCallAction : public CityPDA_CommunicatorScriptAction {
public:
    ~SAction_PDAComm_SetVideoCallAction() override;
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
