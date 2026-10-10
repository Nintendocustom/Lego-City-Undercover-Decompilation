#pragma once

#include "kestrel/WeakPtr.h"
#include "script/actions/SAction.h"

class cAttackManager {
public:
    uint8_t m_Padding[0x6d08];
    bool m_field_0x6d08;
    uint8_t m_field_0x6d09;
    uint8_t m_field_0x6d0a;
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