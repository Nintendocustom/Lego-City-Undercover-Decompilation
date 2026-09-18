#pragma once

#include "script/actions/CityPDA_Scanner/CityPDA_CommunicatorScriptAction.h"

class SAction_PDADemo_Run : public CityPDA_CommunicatorScriptAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
