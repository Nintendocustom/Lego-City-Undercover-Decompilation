#pragma once

#include "kestrel/script/actions/CityPDA_Scanner/CityPDA_CommunicatorScriptAction.h"

class SAction_PDADemo_IsRunning : public CityPDA_CommunicatorScriptAction {
public:
    ~SAction_PDADemo_IsRunning() override;
    const char* GetName() const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
