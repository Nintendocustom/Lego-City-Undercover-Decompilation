#include "script/commands/SCmdOr.h"

SCmdOr::SCmdOr(ScriptFile* file, int line) : SCmdLogicOp(file, line) {}

const char* SCmdOr::GetName() const {
    return "SCmdOr";
}

bool SCmdOr::Op(bool a, bool b) {
    return a || b;
}
