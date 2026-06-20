#pragma once

#include "kestrel/script/actions/ActionInstanceData.h"

class MechCharacter;

class CityPDA_CommunicatorScriptAction : public ActionInstanceData {
public:
    ~CityPDA_CommunicatorScriptAction() override;
    bool GetCommunicator(ScriptContext& context, int index);
    bool GetCommunicator(ScriptContext& context, MechCharacter* player);
    virtual const char* GetName() const;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState Exec(ScriptContext& context) override;
};
