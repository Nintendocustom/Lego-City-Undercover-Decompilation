#pragma once

class GizmoPickup;
class CityPDA_ScannerHudInterface;
class NuConstStringManager {
public:
    static void Free(NuConstStringManager* mgr, const char* str);
};

namespace NuCore {
NuConstStringManager* GetConstStringManager();
}

struct Tint {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char m_unk;
};

class ScannableCollectableType {
public:
    ScannableCollectableType(int param1, int param2, const char* iconName, const char* infoText,
                             const char* instanceText);

    virtual ~ScannableCollectableType();

    bool Get2DIconTextureName(char* outBuffer, int param1, int param2) const;
    int GetIconId() const;
    const Tint* GetTint() const;
    void SetIconTint(const char* tint);
    void ShowFocusHud(CityPDA_ScannerHudInterface& hud);
    void HideFocusHud(CityPDA_ScannerHudInterface& hud);
    const char* GetInfoText(GizmoPickup* pickup) const;
    const char* GetInstanceText(GizmoPickup* pickup, bool& flag) const;

private:
    unsigned char padding[0x12];
    int m_iconId;
    const char* m_iconName;
    const char* m_infoText;
    const char* m_instanceText;
    Tint m_tint;
};
