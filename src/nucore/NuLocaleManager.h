#pragma once

int NuStrICmp(const char* a, const char* b);
class NuCore {
public:
    void static* GetApplicationState();
};

enum class NuLanguage : int {
    JAPANESE = 0,
    KOREAN = 1,
    ENGLISH = 2,
    AMERICAN = 3,
    GERMAN = 4,
    FRENCH = 5,
    SPANISH = 6,
    ITALIAN = 7,
    DUTCH = 8,
    PORTUGUESE = 9,
    DANISH = 10,
    NORWEGIAN = 11,
    SWEDISH = 12,
    FINNISH = 13,
    GREEK = 14,
    CZECH = 15,
    POLISH = 16,
    RUSSIAN = 17,
    BRAZILIAN_PORTUGUESE = 18,
    CHINESE_SIMPLIFIED = 19,
    HUNGARIAN = 20,
    FRENCH_CANADIAN = 21,
    LATIN_AMERICAN_SPANISH = 22,
    ARABIC = 23,
    CHINESE_TRADITIONAL = 24,

    COUNT = 25,
    INVALID = -1
};

enum class NuRegion : int {
    NONE = 0,
    JAPAN = 1,
    AMERICA = 2,
    EUROPE = 3,
    RUSSIA = 4,

    COUNT = 5,
    INVALID = -1
};

class NuLocaleManager {
public:
    NuLocaleManager();

    bool SetCurrentLanguageFromConsole(bool* availableLangs);
    NuLanguage GetLanguageFromEnglishName(const char* name) const;
    const char* GetEnglishNameNoSpaces(NuLanguage lang) const;
    NuLanguage GetLanguageFromEnglishNameTriple(const char* name) const;
    const char* GetEnglishNameTriple(NuLanguage lang) const;
    bool IsThisTheCurrentLanguage(const char* name) const;
    NuLanguage GetCurrentLanguage() const;
    NuLanguage GetLanguageFromIsoCode(const char* name) const;
    const char* GetIsoCode(NuLanguage lang) const;
    bool IsPEGICountry_CAFE_SPECIFIC() const;
    void FallbackLangaugePair(NuLanguage lang1, NuLanguage lang2);
    void SetCurrentLanguageIfAvailable(NuLanguage lang);
    void SetLangaugeFallback();
    void SetCurrentLanguage(NuLanguage lang);
    void SetCurrentRegion(NuRegion region);
    const char* GetCornwallName(NuLanguage lang) const;
    const char* GetEnglishName(NuLanguage lang) const;
    NuRegion GetCurrentRegion() const;
    const char* GetLocalisedName(NuLanguage lang) const;
    const char* GetEnglishNameRegion(NuRegion region) const;
    NuLanguage GetRootLanguage(NuLanguage lang) const;

private:
    NuLanguage m_currentLanguage;
    NuRegion m_currentRegion;
    const bool* m_availableLanguages;
    bool m_languageLocked;
    bool m_regionLocked;
    static NuLanguage* m_localisationLanguages[];
};
