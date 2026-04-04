#include "legoapi/timing.h"

float LegoGetFrameTime() {
    if (OVERRIDEFPS > 0.0f) {
        return OVERRIDEFPS;
    }
    return theGameFramework->frameTime;
}
