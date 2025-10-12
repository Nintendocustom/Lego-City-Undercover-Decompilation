#pragma once

namespace CityTimeOfDay {
enum TimeOfDay : int { NOON = 0, DAWN = 1, DUSK = 2, UNKNOWN = 3 };

void SetTimeOfDay(TimeOfDay newTime);
void SetTimeOfDay(const char* timeName);
TimeOfDay GetTimeOfDay();
const char* GetTimeOfDayName();
}  // namespace CityTimeOfDay