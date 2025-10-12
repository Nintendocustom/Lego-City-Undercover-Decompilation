#include "TimeOfDay.h"
#include "nu2api/nuString.h"

namespace CityTimeOfDay {
static TimeOfDay timeOfDay = UNKNOWN;

void SetTimeOfDay(TimeOfDay newTime) {
    timeOfDay = newTime;
}
void SetTimeOfDay(const char* timeName) {
    if (timeName == nullptr) {
        timeOfDay = UNKNOWN;
        return;
    }
    switch (timeName[0]) {
    case 'D':
    case 'd':
        if (NuStrICmp(timeName, "DAWN") == 0) {
            timeOfDay = DAWN;
        } else if (NuStrICmp(timeName, "DUSK") == 0) {
            timeOfDay = DUSK;
        }
        break;
    case 'N':
    case 'n':
        if (NuStrICmp(timeName, "NOON") == 0) {
            timeOfDay = NOON;
        }
        break;
    default:
        timeOfDay = UNKNOWN;
        break;
    }
}
TimeOfDay GetTimeOfDay() {
    return timeOfDay;
}
const char* GetTimeOfDayName() {
    static const char* timeNames[] = {"NOON", "DAWN", "DUSK"};
    if (static_cast<unsigned>(timeOfDay) <= 2) {
        return timeNames[timeOfDay];
    }
    return "UNKNOWN";
}
}  // namespace CityTimeOfDay