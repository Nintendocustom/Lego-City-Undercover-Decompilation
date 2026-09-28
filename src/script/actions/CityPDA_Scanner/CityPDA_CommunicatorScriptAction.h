#pragma once

#include "script/actions/SAction.h"

class MechCharacter;

class CityPDA_CommunicatorScriptAction : public SAction {
public:
    bool GetCommunicator(ScriptContext& context, int index);
    bool GetCommunicator(ScriptContext& context, MechCharacter* player);
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
