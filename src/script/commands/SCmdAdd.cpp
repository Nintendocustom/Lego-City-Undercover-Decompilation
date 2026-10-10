#include "script/commands/SCmdAdd.h"

SCmdAdd::SCmdAdd(ScriptFile* file, int line) : SCmdArithmeticOp(file, line) {}

const char* SCmdAdd::GetName() const {
    return "SCmdAdd";
}

float SCmdAdd::Op(float a, float b) {
    return a + b;
}