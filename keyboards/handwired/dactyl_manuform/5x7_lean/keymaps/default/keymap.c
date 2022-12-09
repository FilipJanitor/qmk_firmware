#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _FN 1
#define _SLOVAK 2
#define _SLOVAK_SHIFT 3

#define _M_S UC(0x0161)
#define _V_S UC(0x0160)

#define _M_C UC(0x010D)
#define _V_C UC(0x010C)

#define _M_T UC(0x0165)
#define _V_T UC(0x0164)

#define _M_Z UC(0x017E)
#define _V_Z UC(0x017D)

#define _M_YY UC(0xFD)
#define _V_YY UC(0xDD)

#define _M_AA UC(0xE1)
#define _V_AA UC(0xC1)

#define _M_II UC(0xED)
#define _V_II UC(0xCD)

#define _M_EE UC(0xE9)
#define _V_EE UC(0xC9)

#define _M_UU UC(0xFA)
#define _V_UU UC(0xDA)

#define _M_A UC(0xE4)
#define _V_A UC(0xC4)

#define _M_OO UC(0xF3)
#define _V_OO UC(0xD3)

#define _M_UO UC(0xF4)
#define _V_UO UC(0xD4)

#define _M_N UC(0x0148)
#define _V_N UC(0x0147)

#define _M_RR UC(0x155)
#define _V_RR UC(0x154)

#define _M_D UC(0x010F)
#define _V_D UC(0x010E)

#define _M_L UC(0x013E)
#define _V_L UC(0x013D)

#define _M_LL UC(0x013A)
#define _V_LL UC(0x0139)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT_5x7_lean(
  KC_GRV,        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_PSCR,                                KC_6,      KC_7,      KC_8,    KC_9,    KC_0,      KC_MINS,   KC_EQL,    
  KC_TAB,        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC,                                KC_RBRC,   KC_Y,    KC_U,    KC_I,      KC_O,      KC_P,      KC_BSLS,
  KC_LSFT,       KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LEFT,                                KC_RGHT,   KC_H,    KC_J,    KC_K,      KC_L,      KC_SCLN,   KC_QUOT,
  KC_LCTR,       KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                                       KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,   TT(_FN),
                 KC_ESC , KC_LGUI,                                                                                                 KC_HOME,   KC_END,
                                   MO(_FN), KC_SPC,                                                              KC_ENT, KC_DEL,
                                                              KC_UP,  KC_DOWN,               KC_BSPC, KC_RSFT,  
                                                              TT(_SLOVAK), KC_LCTR,          KC_PGUP, KC_PGDN
    ),
[_FN] = LAYOUT_5x7_lean(
  KC_ESC,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,   KC_TRNS,   KC_TRNS,
  KC_TRNS,       KC_ENT,  KC_BCK,  KC_UP,   KC_DEL,  KC_PGUP, KC_TRNS,                                KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS,   KC_LBRC,   KC_RBRC,
  KC_F5,         KC_HOME, KC_LEFT, KC_DOWN, KC_RIGHT,KC_END,  KC_TRNS,                                KC_TRNS,   KC_TRNS, KC_BCK,  KC_DEL,    KC_TRNS,   KC_LBRC,   KC_RBRC,
  KC_TRNS,       KC_LCTR, KC_F10,  KC_F11,  KC_F12,  KC_PGDN,                                                    KC_LALT, KC_LEFT, KC_RGHT,   KC_F5,     KC_TRNS,   KC_TRNS,
                 KC_TRNS, KC_TRNS,                                                                                                 KC_TRNS,   KC_TRNS,
                                   KC_TRNS, KC_TRNS,                                                             KC_ENT,  KC_SPC,
                                                              KC_TRNS, KC_TRNS,              KC_LGUI, KC_RSFT,  
                                                              KC_TRNS, KC_TRNS,              KC_TRNS, KC_RCTR
    ),

[_SLOVAK] = LAYOUT_5x7_lean(
  KC_ESC,       _M_OO,    _M_L,    _M_S,    _M_C,    _M_T,    _M_D,                                   _M_Z,      _M_YY,   _M_AA,   _M_II,     _M_EE,     _M_UU,    _M_N,
  KC_TAB,       KC_Q,     KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,                                KC_TRNS,   KC_Z,    KC_U,    KC_I,      KC_O,      KC_P,     _M_A,
  KC_LSFT,      KC_A,     KC_S,    KC_D,    KC_F,    KC_G,    KC_LPRN,                                KC_RPRN,   KC_H,    KC_J,    KC_K,      KC_L,      _M_UO,    KC_QUOT,
  KC_LCTR,      KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,                                                       KC_N,    KC_M,    KC_COMM,   KC_DOT,    KC_SLSH,  KC_TRNS,
                 KC_ESC ,    KC_LGUI,                                                                                                         KC_HOME,   KC_END,
                                         MO(_FN),    KC_SPC,                                                                 KC_ENT, KC_DEL,
                                                                 KC_TRNS,KC_TRNS,            KC_BSPC, MO(_SLOVAK_SHIFT),  
                                                                 KC_TRNS,KC_TRNS,            KC_PGUP, KC_PGDN
    ),
[_SLOVAK_SHIFT] = LAYOUT_5x7_lean(
  KC_TRNS,       _V_OO,   _V_L,    _V_S,    _V_C,    _V_T,    _V_D,                                   _V_Z,    _V_YY,   _V_AA,   _V_II,     _V_EE, _V_UU,   _V_N,
  KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _V_A,
  KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, _V_UO,   KC_EXLM,
  KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                  KC_TRNS, KC_TRNS, KC_TRNS, KC_QUES, KC_COLN, KC_QUES,
                 KC_TRNS, KC_TRNS,                                                                                                        KC_TRNS, KC_TRNS,
                                   KC_TRNS, KC_TRNS,                                                                    KC_TRNS, KC_TRNS,
                                                              KC_TRNS,KC_TRNS,               KC_TRNS, KC_TRNS,  
                                                              KC_TRNS,KC_TRNS,               KC_TRNS, KC_TRNS
    ),
};
