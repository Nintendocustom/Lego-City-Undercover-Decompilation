#include "script/commands/SCmdGreaterThanEqual.h"

SCmdGreaterThanEqual::SCmdGreaterThanEqual(ScriptFile* file, int line) : SCmdEqualityOp(file, line) {}

const char* SCmdGreaterThanEqual::GetName() const {
    return "SCmdGreaterThanEqual";
}

bool SCmdGreaterThanEqual::Op(float a, float b) {
    return a >= b;
}
