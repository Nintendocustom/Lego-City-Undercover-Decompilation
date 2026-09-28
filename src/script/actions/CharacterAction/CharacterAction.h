#pragma once

#include "script/actions/SAction.h"

class ApiCharacter;

class CharacterAction : public SAction {
public:
    static uint32_t sm_DriverHash;
    static uint32_t sm_AnySeatHash;
    static uint32_t sm_AnyPassengerHash;
    static uint32_t sm_Passenger1Hash;
    static uint32_t sm_Passenger2Hash;
    static uint32_t sm_Passenger3Hash;
    static uint32_t sm_Passenger4Hash;
    static uint32_t sm_Passenger5Hash;

    static uint32_t sm_AIOnlyHash;
    static uint32_t sm_PlayerOnlyHash;

    static uint32_t sm_StraightLineHash;
    static uint32_t sm_ParkourNodesHash;
    static uint32_t sm_UseParkourHash;
    static uint32_t sm_FavourParkour;
    static uint32_t sm_NoArrest;
    static uint32_t sm_ForceFlatPace;
    static uint32_t sm_IgnoreTrafficLights;
    static uint32_t sm_MatchSpeed;
    static uint32_t sm_OffRoad;
    static uint32_t sm_AddAsWaypoint;
    static uint32_t sm_ArriveAtWaypoint;

    ActionState Exec(ScriptContext& context) override;
    virtual ActionState CharacterExec(ApiCharacter* pChar, ScriptContext& context) = 0;
};