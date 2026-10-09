#include "script/commands/SCmdLessThanEqual.h"

SCmdLessThanEqual::SCmdLessThanEqual(ScriptFile* file, int line) : SCmdEqualityOp(file, line) {}

const char* SCmdLessThanEqual::GetName() const {
    return "SCmdLessThanEqual";
}

bool SCmdLessThanEqual::Op(float a, float b) {
    return a <= b;
}
