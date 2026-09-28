#include "nn/oe.h"
#include "nucore/NuLocaleManager.h"

void NuLanguageInitPS(NuLanguage* out_lang, NuRegion* out_region);
bool NuLanguageConsoleSelectable(bool* availableLangs);

static const char* s_englishNames[static_cast<int>(NuLanguage::COUNT)] = {
    "JAPANESE",  "KOREAN",          "ENGLISH", "AMERICAN",  "GERMAN",
    "FRENCH",    "SPANISH",         "ITALIAN", "DUTCH",     "PORTUGUESE",
    "DANISH",    "NORWEGIAN",       "SWEDISH", "FINNISH",   "GREEK",
    "CZECH",     "POLISH",          "RUSSIAN", "BRAZILIAN", "CHINESE SIMPLIFIED",
    "HUNGARIAN", "FRENCH CANADIAN", "MEXICAN", "ARABIC",    "CHINESE TRADITIONAL",
};

static const char* s_englishNamesTriple[static_cast<int>(NuLanguage::COUNT)] = {
    "JPN", "KOR", "FRE", "SPA", "ITA", "DUT", "DAN", "NOR", "SWE", "FIN", "GER",
    "CZE", "POL", "RUS", "BRA", "CHI", "HUN", "FRC", "MEX", "ARA", "ZHO",
};

static const char* s_isoCodes[static_cast<int>(NuLanguage::COUNT)] = {
    "ja-jp", "ko-kr", "en-gb", "en-us", "de-de", "fr-fr", "es-es", "it-it", "nl-nl",
    "pt-pt", "da-dk", "no-no", "sv-se", "fi-fi", "el-gr", "cs-cz", "pl-pl", "ru-ru",
    "pt-br", "zh-cn", "hu-hu", "fr-ca", "es-mx", "ar-sa", "zh-tw",
};

extern const char* const lang_name_japanese;
extern const char* const lang_name_korean;
extern const char* const lang_name_english;
extern const char* const lang_name_american;
extern const char* const lang_name_german;
extern const char* const lang_name_french;
extern const char* const lang_name_spanish;
extern const char* const lang_name_italian;
extern const char* const lang_name_dutch;
extern const char* const lang_name_portuguese;
extern const char* const lang_name_danish;
extern const char* const lang_name_norwegian;
extern const char* const lang_name_swedish;
extern const char* const lang_name_finnish;
extern const char* const lang_name_greek;
extern const char* const lang_name_czech;
extern const char* const lang_name_polish;
extern const char* const lang_name_russian;
extern const char* const lang_name_brazilian;
extern const char* const lang_name_chinese;
extern const char* const lang_name_hungarian;
extern const char* const lang_name_french_canadian;
extern const char* const lang_name_mexican;
extern const char* const lang_name_arabic;
extern const char* const lang_name_chinese_traditional;

static const char* s_localisedNames[static_cast<int>(NuLanguage::COUNT)] = {
    lang_name_japanese,
    lang_name_korean,
    lang_name_english,
    lang_name_american,
    lang_name_german,
    lang_name_french,
    lang_name_spanish,
    lang_name_italian,
    lang_name_dutch,
    lang_name_portuguese,
    lang_name_danish,
    lang_name_norwegian,
    lang_name_swedish,
    lang_name_finnish,
    lang_name_greek,
    lang_name_czech,
    lang_name_polish,
    lang_name_russian,
    lang_name_brazilian,
    lang_name_chinese,
    lang_name_hungarian,
    lang_name_french_canadian,
    lang_name_mexican,
    lang_name_arabic,
    lang_name_chinese_traditional,
};

static const char* s_englishRegionNames[static_cast<int>(NuRegion::COUNT)]{
    "None", "Japan", "America", "Europe", "Russia",
};

// todo some of the code in this file is weird and bad
NuLocaleManager::NuLocaleManager() : m_languageLocked(false), m_regionLocked(false) {
    NuCore::GetApplicationState();

    m_currentLanguage = NuLanguage::ENGLISH;
    m_currentRegion = NuRegion::INVALID;
    m_availableLanguages = nullptr;

    NuLanguageInitPS(&m_currentLanguage, &m_currentRegion);

    int** ppLanguages = reinterpret_cast<int**>(m_localisationLanguages);
    int* pLanguages = *ppLanguages;

    if (pLanguages != nullptr) {
        bool languageFlags[32];

        languageFlags[24] = false;
        *reinterpret_cast<uint64_t*>(&languageFlags[8]) = 0;
        *reinterpret_cast<uint64_t*>(&languageFlags[16]) = 0;
        *reinterpret_cast<uint64_t*>(&languageFlags[0]) = 0;

        int languageId = *pLanguages;

        if (languageId != 0x19) {
            pLanguages++;

            do {
                languageFlags[languageId] = true;
                languageId = *pLanguages;
                pLanguages++;
            } while (languageId != 0x19);
        }
        SetCurrentLanguageFromConsole(languageFlags);
    }
}

bool NuLocaleManager::SetCurrentLanguageFromConsole(bool* consoleLanguages) {
    m_availableLanguages = consoleLanguages;
    SetLangaugeFallback();

    if (!m_availableLanguages[static_cast<int>(m_currentLanguage)]) {
        NuLanguage selectedLanguage;
        bool languageFound = false;

        for (int i = 0; i != 16; i++) {
            if (consoleLanguages[i]) {
                selectedLanguage = static_cast<NuLanguage>(i);
                languageFound = true;
                break;
            }
        }

        if (!languageFound && consoleLanguages[16] && consoleLanguages[17]) {
            if (!m_languageLocked) {
                m_currentLanguage = static_cast<NuLanguage>(17);
            }
            bool result = NuLanguageConsoleSelectable(consoleLanguages);
            return result;
        }

        if (!languageFound) {
            for (int i = 16; i != 25; i++) {
                if (consoleLanguages[i]) {
                    selectedLanguage = static_cast<NuLanguage>(i);
                    languageFound = true;
                    break;
                }
            }
        }

        if (languageFound && !m_languageLocked) {
            m_currentLanguage = selectedLanguage;
        }
    }

    bool result = NuLanguageConsoleSelectable(consoleLanguages);
    return result;
}
NuLanguage NuLocaleManager::GetCurrentLanguage() const {
    return m_currentLanguage;
}
NuRegion NuLocaleManager::GetCurrentRegion() const {
    return m_currentRegion;
}
void NuLocaleManager::SetCurrentLanguage(NuLanguage lang) {
    if (!m_languageLocked) {
        m_currentLanguage = lang;
    }
}
void NuLocaleManager::SetCurrentLanguageIfAvailable(NuLanguage lang) {
    if (m_availableLanguages && m_availableLanguages[static_cast<int>(lang)] && !m_languageLocked) {
        m_currentLanguage = lang;
    }
}
void NuLocaleManager::SetCurrentRegion(NuRegion region) {
    if (!m_regionLocked) {
        m_currentRegion = region;
    }
}
const char* NuLocaleManager::GetEnglishName(NuLanguage lang) const {
    if (lang == NuLanguage::INVALID) {
        lang = this->m_currentLanguage;
    }
    return s_englishNames[static_cast<int>(lang)];
}
const char* NuLocaleManager::GetEnglishNameNoSpaces(NuLanguage lang) const {
    if (lang == NuLanguage::INVALID) {
        lang = this->m_currentLanguage;
    }
    switch (lang) {
    case NuLanguage::CHINESE_SIMPLIFIED:
        return "CHINESE_SIMPLIFIED";
    case NuLanguage::FRENCH_CANADIAN:
        return "FRENCH_CANADIAN";
    case NuLanguage::CHINESE_TRADITIONAL:
        return "CHINESE_TRADITIONAL";
    case NuLanguage::INVALID:
        lang = this->m_currentLanguage;
    default:
        break;
    }
    return s_englishNames[static_cast<int>(lang)];
}
const char* NuLocaleManager::GetEnglishNameTriple(NuLanguage lang) const {
    if (lang == NuLanguage::INVALID) {
        lang = this->m_currentLanguage;
    }
    return s_englishNamesTriple[static_cast<int>(lang)];
}
const char* NuLocaleManager::GetIsoCode(NuLanguage lang) const {
    if (lang != NuLanguage::INVALID) {
        return s_isoCodes[static_cast<int>(lang)];
    }
    return "NONE";
}
const char* NuLocaleManager::GetLocalisedName(NuLanguage lang) const {
    if (static_cast<int>(lang) == static_cast<int>(NuLanguage::INVALID)) {
        lang = this->m_currentLanguage;
    }
    return s_localisedNames[static_cast<int>(lang)];
}
const char* NuLocaleManager::GetCornwallName(NuLanguage lang) const {
    if (lang == NuLanguage::INVALID) {
        lang = this->m_currentLanguage;
    }
    if (lang != NuLanguage::BRAZILIAN_PORTUGUESE) {
        if (lang == NuLanguage::INVALID) {
            lang = this->m_currentLanguage;
        }
        return s_localisedNames[static_cast<int>(lang)];
    }
    return "BR PORTUGUESE";
}
const char* NuLocaleManager::GetEnglishNameRegion(NuRegion region) const {
    if (static_cast<int>(region) == 0) {
        region = m_currentRegion;
    }
    return s_englishRegionNames[static_cast<int>(region)];
}
NuLanguage NuLocaleManager::GetLanguageFromEnglishName(const char* name) const {
    for (unsigned int i = 0; i < static_cast<int>(NuLanguage::COUNT); i++) {
        const char* nameToCheck;
        NuLanguage langToCheck = static_cast<NuLanguage>(i);
        if (langToCheck == NuLanguage::FRENCH_CANADIAN) {
            nameToCheck = "FRENCH_CANADIAN";
        } else if (langToCheck == NuLanguage::CHINESE_SIMPLIFIED) {
            nameToCheck = "CHINESE_SIMPLIFIED";
        } else if (langToCheck == NuLanguage::CHINESE_TRADITIONAL) {
            nameToCheck = "CHINESE_TRADITIONAL";
        } else {
            nameToCheck = s_englishNames[i];
        }
        if (NuStrICmp(name, nameToCheck) == 0) {
            return langToCheck;
        }
    }
    if (NuStrICmp(name, "CHINESE") == 0) {
        return NuLanguage::CHINESE_SIMPLIFIED;
    }
    return NuLanguage::INVALID;
}
// todo weird code, improve
NuLanguage NuLocaleManager::GetLanguageFromEnglishNameTriple(const char* name) const {
    int i = 0;
    while (true) {
        if (NuStrICmp(name, s_englishNamesTriple[i]) == 0) {
            return static_cast<NuLanguage>(i);
        }
        if (++i > static_cast<unsigned int>(NuLanguage::COUNT) - 1)
            break;
    }
    return NuLanguage::INVALID;
}
// todo weird code, improve
NuLanguage NuLocaleManager::GetLanguageFromIsoCode(const char* name) const {
    int i = 0;
    while (true) {
        if (NuStrICmp(name, s_isoCodes[i]) == 0) {
            return static_cast<NuLanguage>(i);
        }
        if (++i > static_cast<unsigned int>(NuLanguage::COUNT) - 1)
            break;
    }
    return NuLanguage::INVALID;
}
// todo mismatching due to loop
bool NuLocaleManager::IsThisTheCurrentLanguage(const char* name) const {
    const int currentLang = static_cast<int>(m_currentLanguage);
    unsigned int i;

    for (i = 0; i <= static_cast<int>(NuLanguage::COUNT) - 1; i++) {
        const char* compareStr;

        if (i == static_cast<int>(NuLanguage::FRENCH_CANADIAN)) {
            compareStr = "FRENCH_CANADIAN";
        } else if (i == static_cast<int>(NuLanguage::CHINESE_SIMPLIFIED)) {
            compareStr = "CHINESE_SIMPLIFIED";
        } else if (i == static_cast<int>(NuLanguage::CHINESE_TRADITIONAL)) {
            compareStr = "CHINESE_TRADITIONAL";
        } else {
            compareStr = s_englishNames[i];
        }

        if (NuStrICmp(name, compareStr) == 0) {
            break;
        }
    }

    if (i > 24) {
        i = NuStrICmp(name, "CHINESE") == 0 ? 19 : -1;
    }

    return currentLang == static_cast<int>(i);
}

NuLanguage NuLocaleManager::GetRootLanguage(NuLanguage lang) const {
    if (lang == NuLanguage::INVALID) {
        lang = this->m_currentLanguage;
    }
    NuLanguage val = lang;

    if (val == NuLanguage::AMERICAN) {
        val = NuLanguage::ENGLISH;
    } else if (val == NuLanguage::FRENCH_CANADIAN) {
        val = NuLanguage::FRENCH;
    }
    return val;
}

bool NuLocaleManager::IsPEGICountry_CAFE_SPECIFIC() const {
    return false;
}

void NuLocaleManager::SetLangaugeFallback() {
    switch (m_currentLanguage) {
    case NuLanguage::ENGLISH:
        if (m_availableLanguages && !m_availableLanguages[static_cast<int>(NuLanguage::ENGLISH)]
            && m_availableLanguages[static_cast<int>(NuLanguage::AMERICAN)] && !m_languageLocked) {
            m_currentLanguage = NuLanguage::AMERICAN;
        }
        break;

    case NuLanguage::AMERICAN:
        if (m_availableLanguages && !m_availableLanguages[static_cast<int>(NuLanguage::AMERICAN)]
            && m_availableLanguages[static_cast<int>(NuLanguage::ENGLISH)] && !m_languageLocked) {
            m_currentLanguage = NuLanguage::ENGLISH;
        }
        break;

    case NuLanguage::FRENCH:
        if (m_availableLanguages && !m_availableLanguages[static_cast<int>(NuLanguage::FRENCH)]
            && m_availableLanguages[static_cast<int>(NuLanguage::FRENCH_CANADIAN)] && !m_languageLocked) {
            m_currentLanguage = NuLanguage::FRENCH_CANADIAN;
        }
        break;

    case NuLanguage::SPANISH:
        if (m_availableLanguages && !m_availableLanguages[static_cast<int>(NuLanguage::SPANISH)]
            && m_availableLanguages[static_cast<int>(NuLanguage::LATIN_AMERICAN_SPANISH)]
            && !m_languageLocked) {
            m_currentLanguage = NuLanguage::LATIN_AMERICAN_SPANISH;
        }
        break;

    case NuLanguage::CHINESE_SIMPLIFIED:
        if (m_availableLanguages && !m_availableLanguages[static_cast<int>(NuLanguage::CHINESE_SIMPLIFIED)]
            && m_availableLanguages[static_cast<int>(NuLanguage::CHINESE_TRADITIONAL)] && !m_languageLocked) {
            m_currentLanguage = NuLanguage::CHINESE_TRADITIONAL;
        }
        break;

    case NuLanguage::FRENCH_CANADIAN:
        if (m_availableLanguages && !m_availableLanguages[static_cast<int>(NuLanguage::FRENCH_CANADIAN)]
            && m_availableLanguages[static_cast<int>(NuLanguage::FRENCH)] && !m_languageLocked) {
            m_currentLanguage = NuLanguage::FRENCH;
        }
        break;

    case NuLanguage::LATIN_AMERICAN_SPANISH:
        if (m_availableLanguages
            && !m_availableLanguages[static_cast<int>(NuLanguage::LATIN_AMERICAN_SPANISH)]
            && m_availableLanguages[static_cast<int>(NuLanguage::SPANISH)] && !m_languageLocked) {
            m_currentLanguage = NuLanguage::SPANISH;
        }
        break;

    case NuLanguage::CHINESE_TRADITIONAL:
        if (m_availableLanguages && !m_availableLanguages[static_cast<int>(NuLanguage::CHINESE_TRADITIONAL)]
            && m_availableLanguages[static_cast<int>(NuLanguage::CHINESE_SIMPLIFIED)] && !m_languageLocked) {
            m_currentLanguage = NuLanguage::CHINESE_SIMPLIFIED;
        }
        break;

    default:
        break;
    }
}
void NuLocaleManager::FallbackLangaugePair(NuLanguage lang1, NuLanguage lang2) {
    if (lang1 == m_currentLanguage) {
        if (!m_availableLanguages[static_cast<int>(lang1)]) {
            if (m_availableLanguages && m_availableLanguages[static_cast<int>(lang2)] && !m_languageLocked) {
                m_currentLanguage = lang2;
            }
            return;
        }
    }

    if (lang2 == m_currentLanguage) {
        if (m_availableLanguages && !m_availableLanguages[static_cast<int>(lang2)]
            && m_availableLanguages[static_cast<int>(lang1)] && !m_languageLocked) {
            m_currentLanguage = lang1;
        }
    }
}
