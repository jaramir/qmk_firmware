#ifdef AUDIO_ENABLE
    #define WORKMAN_SOUND \
        E__NOTE(_GS7),    \
        ED_NOTE(_E7),     \
        S__NOTE(_REST),   \
        E__NOTE(_A6),     \
        S__NOTE(_REST),   \
        ED_NOTE(_GS6),
#endif

// Tap Layer Arrows
#define ESC_ARR LT(_ARROWS, KC_ESC)

// Mod Tap
#define RSH_ENT MT(MOD_RSFT, KC_ENT)
#define LSH_SPC MT(MOD_LSFT, KC_SPC)

// Spectacle shortcuts
#define SP_FULL LALT(LGUI(KC_F))
#define SP_CENT LALT(LGUI(KC_C))

#define SP_TOP LALT(LGUI(KC_UP))
#define SP_BOTT LALT(LGUI(KC_DOWN))
#define SP_LEFT LALT(LGUI(KC_LEFT))
#define SP_RGHT LALT(LGUI(KC_RIGHT))

#define SP_TLFT LCTL(LGUI(KC_LEFT))
#define SP_TRGH LCTL(LGUI(KC_RIGHT))
#define SP_BLFT LSFT(LCTL(LGUI(KC_LEFT)))
#define SP_BRGH LSFT(LCTL(LGUI(KC_RIGHT)))

#define SP_NTHR LALT(LCTL(KC_RIGHT))
#define SP_PTHR LALT(LCTL(KC_LEFT))

// Various shortcuts
#define GUI_SHA LGUI(LSFT(KC_A))
#define SCR_CAP LGUI(LSFT(LCTL(KC_4)))
