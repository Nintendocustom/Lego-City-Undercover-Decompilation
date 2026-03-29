#pragma once

struct GameFramework {
    char pad[0x29F0];
    float frameTime;
};
GameFramework *theGameFramework;
float OVERRIDEFPS;
