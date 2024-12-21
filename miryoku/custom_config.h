// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define XXX &none
#define ULK &studio_unlock

#define MIRYOKU_LAYOUTMAPPING_MEDIA( \
    K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
    K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
    K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
    N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39  \
) \
    K00  K01  K02  K03  K04       K05  K06  K07  K08  K09 \
    K10  K11  K12  K13  K14       K15  K16  K17  K18  K19 \
    K20  ULK  K22  K23  K24       K25  K26  K27  K28  K29 \
              K32  K33  K34       K35  K36  K37

#define MIRYOKU_LAYER_EXTRA \
    U_MT(N6, N1),      U_MT(N7, N2),      U_MT(N8, N3),      U_MT(N9, N4),      U_MT(N0, N5),      &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
    U_MT(LCTRL, T),      &kp Q,             &kp W,             &kp E,             &kp R,             &kp H,             U_MT(LSHFT, J),    U_MT(LCTRL, K),    U_MT(LALT, L),     U_MT(LGUI, SQT),   \
    U_MT(LSHFT, Z),    &kp A,             &kp S,             &kp D,             U_MT(TAB, F),    &kp N,             &kp M,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
    U_NP,              U_NP,              U_MT(LGUI, ESC),   U_MT(K, SPACE),    U_MT(LALT, B),     U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
