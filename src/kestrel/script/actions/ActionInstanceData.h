#pragma once

#include <cstdint>

class NuConstStringManager {
public:
    static void Free(NuConstStringManager* mgr, char* str);
};
namespace NuCore {
NuConstStringManager* GetConstStringManager();
}
struct ScriptContext;

enum ActionState {
    ACTION_FINISHED = 1,
    ACTION_YIELD = 5,
    ACTION_UNKNOWN_7 = 7,
    ACTION_STOP = 8,
};

enum ScriptVarType {
    SV_GLOBAL = 0,
    SV_UNKNOWN_1 = 1,
    SV_NUMBER = 2,
    SV_BOOL = 3,
    SV_TIMER = 4,
    SV_TEXT = 5,
    SV_HASH = 6,
    SV_ANY = 7,
    SV_CHARACTER = 8,
    SV_VEHICLE = 9,
    SV_LOCATOR = 10,
    SV_LOCATOR_SET = 11,
    SV_POSITION = 12,
    SV_AREA = 13,
    SV_SCRIPT = 14,
    SV_WORLD_LEVEL = 15,
    SV_SOUND = 16,
    SV_SOUND_LISTENER = 17,
    SV_SPEECH = 18,
    SV_SPEECH_PACK = 19,
    SV_SPEECH_STREAM = 20,
    SV_TRACK_BANK = 22,
    SV_TRACK = 23,
    SV_ADD_ON_HANDLE = 24,
    SV_GADGET = 26,
    SV_ARRAY = 27,
    SV_GRIDLOCK_MAP = 28,
    SV_GRIDLOCK_TOGGLE_LAYER = 29,
    SV_NAVI_MAP = 30,
    SV_GIZMO = 31,
    SV_MESSAGE = 32,
    SV_WORLD_AREA = 33,
    SV_HOTSPOT = 34,
    SV_JOB = 36,
    SV_ATTACK_MANAGER = 37,
    SV_CITY_ARRAY = 39,
    SV_CITY_OBJECTIVE = 40
};

struct SCmdParamEntry {
    uint64_t _pad;

    union {
        char* m_String;
        uint64_t m_Value64;
    } m_Data;

    unsigned int m_Type;
    unsigned char m_Flag14;  // 0x14: Unknown flag
    unsigned char m_IsAllocated;
};

struct SCmdParams {
    SCmdParamEntry m_Args[64];  // 0x00 - 0x600: Array of 64 parameter entries
    int m_CurrentParamIndex;    // 0x600: Current index of arguments

    void AddParam(ScriptVarType type, const char* str = nullptr) {
        int idx = m_CurrentParamIndex;

        if (idx < 0) {
            m_CurrentParamIndex = 0;
            idx = 0;
        }

        SCmdParamEntry* entry = &m_Args[idx];

        entry->m_Type = type;
        entry->m_Flag14 = 0;

        uint64_t* dataPtr = &entry->m_Data.m_Value64;

        if (entry->m_IsAllocated) {
            char* strPtr = entry->m_Data.m_String;
            NuConstStringManager::Free(NuCore::GetConstStringManager(), strPtr);
            entry->m_IsAllocated = 0;
        }

        *dataPtr = 0;
        entry->m_Data.m_String = const_cast<char*>(str);

        m_CurrentParamIndex++;
    }
    void SanityCheck() {
        if (m_CurrentParamIndex < 0) {
            m_CurrentParamIndex = 0;
        }
    }
};

class ActionInstanceData {
public:
    int m_Signature;
    int m_InputVariant;

    ActionInstanceData();
    virtual ~ActionInstanceData();
    virtual const char* GetName() const = 0;
    virtual void GetInputs(SCmdParams& params) const { params.SanityCheck(); }
    virtual void GetOutputs(SCmdParams& params) const { params.SanityCheck(); }
    virtual ActionState Exec(ScriptContext& context) { return ACTION_FINISHED; }
};
