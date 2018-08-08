#ifdef AUDIO_ENABLE
    #define WORKMAN_SOUND \
        E__NOTE(_GS7),    \
        ED_NOTE(_E7),     \
        S__NOTE(_REST),   \
        E__NOTE(_A6),     \
        S__NOTE(_REST),   \
        ED_NOTE(_GS6),
#endif

#define ESC_ARR LT(_ARROWS, KC_ESC)
#define RSH_ENT MT(MOD_LSFT, KC_ENT)
#define LSH_SPC MT(MOD_LSFT, KC_SPC)
#define GUI_SHA LGUI(LSFT(KC_A))
#define SCR_CAP LGUI(LSFT(LCTL(KC_4)))
