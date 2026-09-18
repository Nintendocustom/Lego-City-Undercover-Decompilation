#pragma once

#include <cstdint>

enum ActionState : uint32_t {
    ACTION_FINISHED = 1,
    ACTION_YIELD = 5,
    ACTION_CONVERT_DEFAULT = 7,
    ACTION_STOP = 8,
};

enum ScriptVarType : uint32_t {
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
