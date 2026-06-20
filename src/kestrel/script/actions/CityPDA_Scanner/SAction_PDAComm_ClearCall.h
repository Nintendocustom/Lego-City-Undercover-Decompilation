#pragma once

#include "kestrel/script/actions/CityPDA_Scanner/CityPDA_CommunicatorScriptAction.h"

class SAction_PDAComm_ClearCall : public CityPDA_CommunicatorScriptAction {
public:
    ~SAction_PDAComm_ClearCall() override;
    const char* GetName() const override;
    ActionState Exec(ScriptContext& context) override;
};
