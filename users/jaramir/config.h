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

#define RSFT_ET RSFT_T(KC_ENT)

#ifdef TAP_DANCE_ENABLE
#define TAPPING_TERM 150
#endif

#ifndef TAP_DANCE_ENABLE
#define GUI_S_A LGUI(LSFT(KC_A))
#endif
