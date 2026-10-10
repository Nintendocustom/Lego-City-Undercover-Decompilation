#pragma once

#include "kestrel/WeakPtr.h"
#include "script/actions/SAction.h"

class cAttackManager {
public:
    void CalcSuspendPositions();

    uint8_t m_Padding[0x3564];
    bool m_bool_0x3564;
    uint8_t m_Padding2[0x364f];
    bool m_bool_0x6bb4;
    uint8_t m_Padding3[0x13b];
    int32_t m_AttackersCount;
    uint8_t m_Unk_0x6cf4[0x14];
    bool m_AttackedInCombat;
    uint8_t m_field_0x6d09;
    bool m_Finished;
    uint8_t m_field_0x6d0b;
    bool m_TutorialMode;
    uint8_t m_field_0x6d0d;
    bool m_Suspended;
    bool m_AllowAttacks;
    bool m_AutoSuspended;
};

class SAction_AtkMngr_Command : public SAction {
public:
    ActionState Exec(ScriptContext& context) override;

protected:
    virtual ActionState DoExec(WeakPtr<cAttackManager>& manager, ScriptContext& context) = 0;

    uint8_t m_Member0xc = 0;
    uint8_t m_Member0xd = 0;
    bool m_AutoSuspend;
};