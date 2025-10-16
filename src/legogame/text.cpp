#include "text.h"

int Text_SetLanguage_Game(int language_id) {
    return language_id;
}

void Text_DecodeButtons(char* input_name, char* output_buffer) {
    if (NuStrICmp(input_name, "tag") == 0) {
        NuStrCpy(output_buffer, "triangle");
    }
    if (NuStrICmp(input_name, "special") == 0) {
        NuStrCpy(output_buffer, "circle");
    }
    if (NuStrICmp(input_name, "action") == 0) {
        NuStrCpy(output_buffer, "square");
    }
    if (NuStrICmp(input_name, "jump") == 0) {
        NuStrCpy(output_buffer, "cross");
    }
    if (NuStrICmp(input_name, "toggleleft") == 0) {
        NuStrCpy(output_buffer, "l1");
    }
    if (NuStrICmp(input_name, "toggleright") == 0) {
        NuStrCpy(output_buffer, "r1");
    }
}