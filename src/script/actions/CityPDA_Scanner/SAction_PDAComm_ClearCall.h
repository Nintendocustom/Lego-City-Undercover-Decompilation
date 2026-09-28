#pragma once

#include "script/actions/CityPDA_Scanner/CityPDA_CommunicatorScriptAction.h"

class SAction_PDAComm_ClearCall : public CityPDA_CommunicatorScriptAction {
public:
    const char* GetName() const override;
    ActionState Exec(ScriptContext& context) override;
};
