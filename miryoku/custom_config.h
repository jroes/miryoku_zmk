// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Use standard media keys (vi nav will change these)
#define MIRYOKU_ALTERNATIVES_MEDIA_VI MIRYOKU_ALTERNATIVES_MEDIA
#define MIRYOKU_KLUDGE_SOFT_OFF
#define MIRYOKU_ALPHAS_QWERTY
#define MIRYOKU_NAV_VI
#define MIRYOKU_CLIPBOARD_MAC

#define MIRYOKU_LAYER_EXTRA \
    U_MT(N6, N1),      U_MT(N7, N2),      U_MT(N8, N3),      U_MT(N9, N4),      U_MT(N0, N5),      &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
    U_MT(LCTRL, T),    &kp Q,             &kp W,             &kp E,             &kp R,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
    U_MT(LSHFT, Z),    &kp A,             &kp S,             &kp D,             U_MT(TAB, F),      &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
    U_NP,              U_NP,              U_MT(LGUI, ESC),   U_MT(K, SPACE),    U_MT(LALT, B),     U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
