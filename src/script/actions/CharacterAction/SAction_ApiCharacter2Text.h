#pragma once

#include "kestrel/NuMemoryPool.h"
#include "script/actions/CharacterAction/CharacterAction.h"

class SAction_ApiCharacter2Text : public CharacterAction {
public:
    void operator delete(void* ptr, size_t size) { ScriptMemory::m_Pool->PoolBlockFree(ptr, size); }

    const char* GetName() const override;
    void GetInputs(SCmdParams& params) const override;
    void GetOutputs(SCmdParams& params) const override;
    ActionState CharacterExec(ApiCharacter*, ScriptContext&) override;
};
