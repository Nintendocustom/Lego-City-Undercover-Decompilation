#include "kestrel/NuMemory.h"
#include "script/actions/SAction.h"
#include "script/commands/ScriptCommand.h"

ScriptCommand::ScriptCommand(ScriptFile* file, int line) : Link(), m_converters(nullptr) {
    m_pNext = nullptr;
    (void)file;
    (void)line;
}

ScriptCommand::~ScriptCommand() {
    NuMemory* mem = NuMemoryGet();
    NuMemoryManager* mgr = mem->GetThreadMem();
    mgr->BlockFree(m_converters, 0);
}

void ScriptCommand::SetConditionDataIx(int& ix) {}

void ScriptCommand::Run(ScriptContext& context, int skipConversions) {
    if (skipConversions == 0) {
        ConvertTypes(context);
    }
    this->Exec(context);
}

void ScriptCommand::AddConverter(int paramIndex, SAction* converter) {
    if (m_converters == nullptr) {
        SCmdParams params;
        this->GetInputs(params);

        NuMemory* mem = NuMemoryGet();
        NuMemoryManager* mgr = mem->GetThreadMem();

        m_converters = static_cast<SAction**>(mgr->_BlockAlloc(
            static_cast<size_t>(params.m_CurrentParamIndex) * sizeof(SAction*), 0x10, 1, "", 0));
    }
    m_converters[paramIndex] = converter;
}

void ScriptCommand::Error(const char* msg) const {}

void ScriptCommand::Print() const {}
