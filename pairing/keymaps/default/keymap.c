#include "pairing.h"
/*
      KC_ESC,   KC_F,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,    KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  \
      KC_ESC,   KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,    KC_8,  KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  \
      KC_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,    KC_I,  KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  \
      LT(3, KC_ENT),  KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,     KC_J,    KC_K,  KC_L,     KC_SCLN,  KC_QUOT,  KC_NO,    KC_ENT,   \
      KC_LSFT,  KC_Z,    KC_X,     KC_C,    KC_V,     KC_B,     KC_N,     KC_M,    KC_COMM,  KC_DOT,  KC_SLSH,   KC_NO,  KC_NO,    KC_RSFT,  \
      KC_LCTL,  KC_LGUI,  KC_LALT,                     LT(2, KC_SPC),                                       MO(3),  MO(4),  MO(5),  TG(1) \
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = KEYMAP(
      KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,   KC_F12, KC_PSCR,KC_INS,KC_DEL, \
      KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,  KC_MINS,   KC_EQL, KC_BSPC,       KC_HOME, \
      KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,  KC_LBRC,  KC_RBRC, KC_BSLS,       KC_PGUP, \
      KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,  KC_SCLN,  KC_QUOT,   KC_ENT,                KC_PGDN, \
      KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,                           KC_END, \
      KC_LCTL,KC_LGUI, KC_LALT,LT(1, KC_SPC),                                                          KC_APP,    MO(1),  KC_LEFT,KC_DOWN,  KC_UP,KC_RGHT  \
  ),
  [1] = KEYMAP(
      RESET  ,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,KC_TRNS,KC_TRNS, \
      KC_TILD,KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,  KC_RPRN,  KC_UNDS,  KC_PLUS,  KC_DEL,       KC_TRNS, \
      KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_LCBR,  KC_RCBR, KC_PIPE,        KC_TRNS, \
      KC_TRNS,KC_LCBR, KC_RCBR, KC_PLUS, KC_UNDS, KC_TRNS, KC_TRNS, KC_MINS,  KC_EQL, KC_LBRC,  KC_RBRC,  KC_DQUO,  KC_TRNS,                 KC_TRNS, \
      KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LABK, KC_RABK,  KC_QUES,  KC_TRNS,                           KC_TRNS, \
      KC_TRNS,KC_TRNS, KC_TRNS, KC_TRNS,                                                               KC_TRNS,  KC_TRNS,  KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS  \
  )
};

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
