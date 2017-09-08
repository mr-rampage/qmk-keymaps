#include "macro_pad.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  KEYMAP(
       KC_P7,  KC_P8,  KC_P9,KC_PPLS,   TO(1), \
       KC_P4,  KC_P5,  KC_P6,KC_PMNS, RGB_TOG, \
       KC_P1,  KC_P2,  KC_P3,KC_PAST, KC_NLCK, \
       KC_P0,KC_PDOT,KC_PENT,KC_PSLS, KC_PEQL \
  ),
  KEYMAP(
        KC_7,   KC_8,   KC_9,KC_PLUS,   TO(2), \
        KC_4,   KC_5,   KC_6,KC_MINS, RGB_TOG, \
        KC_1,   KC_2,   KC_3,KC_ASTR,  KC_INS, \
        KC_0, KC_DOT, KC_ENT,KC_SLSH,KC_LSHIFT \
  ),
  KEYMAP(
       KC_F10, KC_F11, KC_F12,RGB_MOD,   TO(0), \
        KC_F7,  KC_F8,  KC_F9,RGB_HUI, RGB_HUD, \
        KC_F4,  KC_F5,  KC_F6,RGB_SAI, RGB_SAD, \
        KC_F1,  KC_F2,  KC_F3,RGB_VAI, RGB_VAD  \
  )
};

