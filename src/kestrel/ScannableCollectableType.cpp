#include "ScannableCollectableType.h"
#include <cstdio>

namespace NuCore {
    NuConstStringManager* GetConstStringManager();
}

int ReadNextNumber(const char** str, int max);

bool ScannableCollectableType::Get2DIconTextureName(char* outBuffer, int param1, int param2) const {
    sprintf(outBuffer, "stuff\\icons\\%s.TEX", m_iconName);
    return true;
}

int ScannableCollectableType::GetIconId() const {
    return m_iconId;
}

const Tint* ScannableCollectableType::GetTint() const {
    return &m_tint;
}

void ScannableCollectableType::SetIconTint(const char* param1) {
    const char* local = param1;
    if(local != nullptr) {
        m_tint.r = (unsigned char)ReadNextNumber(&local, 0xff);
        m_tint.g = (unsigned char)ReadNextNumber(&local, 0xff);
        m_tint.b = (unsigned char)ReadNextNumber(&local, 0xff);
    }
}

void ScannableCollectableType::ShowFocusHud(CityPDA_ScannerHudInterface& param1) {
    return;
}

void ScannableCollectableType::HideFocusHud(CityPDA_ScannerHudInterface& param1) {
    return;
}

const char* ScannableCollectableType::GetInfoText(GizmoPickup* pickup) const {
    return m_infoText;
}

const char* ScannableCollectableType::GetInstanceText(GizmoPickup* pickup, bool& flag) const {
    flag = false;
    return m_instanceText;
}

ScannableCollectableType::~ScannableCollectableType()
{
    const char* str;

    str = m_iconName;
    if (str != nullptr)
    {
        NuConstStringManager* mgr = NuCore::GetConstStringManager();
        NuConstStringManager::Free(mgr, str);
    }

    str = m_infoText;
    if (str != nullptr)
    {
        NuConstStringManager* mgr = NuCore::GetConstStringManager();
        NuConstStringManager::Free(mgr, str);
    }

    str = m_instanceText;
    if (str != nullptr)
    {
        NuConstStringManager* mgr = NuCore::GetConstStringManager();
        NuConstStringManager::Free(mgr, str);
    }

    // Todo add memoryManager
}