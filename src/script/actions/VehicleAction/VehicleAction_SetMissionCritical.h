#pragma once
#include "script/actions/VehicleAction/VehicleAction.h"

class VehicleAction_SetMissionCritical : public VehicleAction {
public:
    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState VehicleExec(ApiVehicle* pVehicle, ScriptContext& context) override;
};
