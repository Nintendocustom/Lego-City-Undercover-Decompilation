#pragma once

#include "script/actions/SAction.h"

class ApiVehicle;

class VehicleAction : public SAction {
public:
    static uint32_t sm_DriverHash;
    static uint32_t sm_AnySeatHash;
    static uint32_t sm_AnyPassengerHash;
    static uint32_t sm_AnyPassengerSeatHash;
    static uint32_t sm_Passenger1Hash;
    static uint32_t sm_Passenger2Hash;
    static uint32_t sm_Passenger3Hash;
    static uint32_t sm_Passenger4Hash;
    static uint32_t sm_Passenger5Hash;

    ActionState Exec(ScriptContext& context) override;
    virtual ActionState VehicleExec(ApiVehicle* pVehicle, ScriptContext& context) = 0;
};
