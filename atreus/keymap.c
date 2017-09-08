/*
 * Keyboard: Atreus
 * Keymap:   replicaJunction
 * Version:  0.3
 *
 * This keymap is designed to complement my Ergodox keyboard layout, found in keyboards/ergodox_ez.
 * The Atreus keyboard is a 40% board whose design was heavily influenced by the Ergodox. I now
 * have both keyboards, so I've designed these layouts in an effort to make switching between the
 * two as easy as possible.
 *
 * Clearly, the Atreus is the limiting factor in this equation, so I've taken heavy advantage of
 * function and dual-role keys.
 *
 * The default key layout in this keymap is Colemak-ModDH. Information on that layout can be found
 * here: https://colemakmods.github.io/mod-dh/
 */

#include "atreus.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

// Note that whatever is set as layer 0 will be the default layer of the keyboard.

#define _QW 0 // QWERTY
#define _CO 1 // Workman
#define _GA 2 // Gaming
#define _EXL 3 // Extend
#define _EXR 4 // Extend
#define _NU 5 // Numpad
#define _FN 6 // Function

// Some quick aliases, just to make it look pretty
#define _______ KC_TRNS
#define KCX_CA  LCTL(KC_LALT)
#define KCX_CS  LCTL(KC_LSFT)
#define KCX_CSA LCTL(LSFT(KC_LALT))
#define KCX_LST LSFT(KC_TAB)
#define KX_COPY LCTL(KC_C)
#define KX_CUT  LCTL(KC_X)
#define KX_PAST LCTL(KC_V)
#define KX_UNDO LCTL(KC_Z)

; // This doesn't do anything. It's just for VSCode because its syntax highlighting is weird for the above #define statements.

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_CO] = KEYMAP(
  KC_Q,        KC_D,    KC_R,    KC_W,    KC_B,                                   KC_J,            KC_F,    KC_U,    KC_P,    KC_SCLN,
  KC_A,        KC_S,    KC_H,    KC_T,    KC_G,                                   KC_Y,            KC_N,    KC_E,    KC_O,    KC_I,
  SFT_T(KC_Z),        KC_X,    KC_M,    KC_C,    KC_V,                                   KC_K,            KC_L,    KC_COMM, KC_DOT,  SFT_T(KC_SLSH),
  KC_ESC,KC_LGUI, MO(_FN), MO(_EXR), KC_BSPC, CTL_T(KC_DEL), ALT_T(KC_ENT),  LT(_NU, KC_SPC), MO(_EXL), KC_MINS, KC_QUOT, KC_EQL
),

[_QW] = KEYMAP( /* Qwerty */
  KC_Q,        KC_W,    KC_E,    KC_R,    KC_T,                                  KC_Y,            KC_U,    KC_I,    KC_O,    KC_P,
  KC_A,        KC_S,    KC_D,    KC_F,    KC_G,                                  KC_H,            KC_J,    KC_K,    KC_L,    KC_SCLN,
  SFT_T(KC_Z),        KC_X,    KC_C,    KC_V,    KC_B,                                  KC_N,            KC_M,    KC_COMM, KC_DOT,  SFT_T(KC_SLSH),
  KC_ESC,      KC_LGUI, MO(_FN), MO(_EXR), LT(_NU, KC_BSPC), CTL_T(KC_DEL), ALT_T(KC_ENT), LT(_NU, KC_SPC), MO(_EXL), KC_MINS, KC_QUOT, KC_EQL
),

[_EXL] = KEYMAP( /* Extend */
   KC_TAB, KCX_LST, _______, _______, LALT(LCTL(KC_DEL)),        KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_BSPC,
   KC_ESC, _______, _______, _______, _______,                   KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT,
  KX_UNDO,  KX_CUT, KX_COPY, KX_PAST, LSFT(KC_INS),              _______, _______, _______, _______,  KC_INS,
  KC_LSFT, _______, _______, _______, _______, _______, _______,  KC_SPC, _______, _______, _______, KC_PSCR
),

[_EXR] = KEYMAP( /* Extend */
  _______, _______, _______, _______, LALT(LCTL(KC_DEL)),                   KC_HOME, KC_PGDN, KC_PGUP,  KC_END, KC_BSPC,
  _______, _______, _______, _______, _______,                   KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, KC_QUOT,
  KC_LSFT, _______, _______, _______, _______,                   _______, _______, _______, _______,  KC_ENT,
  _______, _______, _______, _______, _______, KC_LCTL, KC_LALT,  KC_SPC, _______, _______, _______, KC_PSCR
),

[_NU] = KEYMAP( /* Numbers and symbols */
   KC_GRV, KC_TILD,    KC_7,    KC_8,    KC_9,                     KC_ASTR, KC_UNDS, KC_PLUS, KC_LPRN, KC_RPRN,
  KC_EXLM,  KC_DLR,    KC_4,    KC_5,    KC_6,                      KC_DLR, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC,
    KC_AT, KC_PERC,    KC_1,    KC_2,    KC_3,                KC_BSLS, KC_AMPR, KC_PIPE, KC_LCBR, KC_RCBR,
  KC_HASH, KC_CIRC,    KC_0,  KC_DOT, _______,  _______,  _______, _______, _______, _______, _______, _______
),

[_FN] = KEYMAP( /* Functions */
  KC_DEL,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,                   _______, KC_F9,  KC_F10,  KC_F11,  KC_F12,
  KC_BSPC, KC_LEFT, KC_DOWN, KC_RGHT, KC_DOWN,                   _______, KC_F5,   KC_F6,   KC_F7,   KC_F8,
  _______, KC_VOLU, KC_MUTE, KC_VOLD, KC_MPLY,                   _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,
  _______, TG(_GA), _______, _______, KC_MSTP, _______, _______, _______, KC_NO,   DF(_CO), DF(_QW), RESET
),

[_GA] = KEYMAP( /* Gaming */
  _______, _______, _______, _______, _______,                   _______, KC_WH_U, KC_MS_U, KC_WH_D, _______,
  _______, _______, _______, _______, _______,                   _______, KC_MS_L, KC_MS_D, KC_MS_R, _______,
  KC_Z,    _______, _______, _______, _______,                   KC_BTN3, _______, KC_MS_D, _______, _______,
  _______, TG(_QW), _______, KC_LSFT, KC_SPC,  KC_BSPC, KC_BTN2, KC_BTN1, _______, _______, _______, _______
)};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
