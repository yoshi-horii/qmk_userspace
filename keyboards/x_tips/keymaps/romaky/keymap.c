#include QMK_KEYBOARD_H

combo_t key_combos[] = {};
uint16_t COMBO_LEN = 0;

enum custom_keycodes {
  REPEAT = SAFE_RANGE,
  // Other custom keys...
};

#include "features/repeat_key.h"

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  if (!process_repeat_key(keycode, record, REPEAT)) { return false; }
  // Your macros ...

  return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_1(
      XXXXXXX, KC_B   , KC_M   , KC_G   , XXXXXXX, XXXXXXX, XXXXXXX, KC_L   , KC_O   , KC_U   , KC_Q   ,
      KC_D   , KC_N   , KC_S   , KC_T   , XXXXXXX, XXXXXXX, XXXXXXX, KC_R   , KC_A   , KC_E   , KC_I   ,
      XXXXXXX, KC_F   , KC_C   , KC_P   , XXXXXXX, XXXXXXX, XXXXXXX, KC_H   , KC_COMM, KC_DOT , XXXXXXX,
      /*     */XXXXXXX, KC_SPC , REPEAT , XXXXXXX, OSL(2) , OSL(1)  , XXXXXXX
  ),
  [1] = LAYOUT_1(
      XXXXXXX, KC_Q   , KC_M   , KC_K   , XXXXXXX, XXXXXXX, XXXXXXX, KC_L   , KC_O   , KC_U   , XXXXXXX,
      KC_GRV , KC_Z   , KC_X   , KC_W   , XXXXXXX, XXXXXXX, XXXXXXX, KC_R   , KC_A   , KC_E   , KC_I   ,
      XXXXXXX, KC_J   , KC_C   , KC_V   , XXXXXXX, XXXXXXX, XXXXXXX, KC_H   , KC_COMM, KC_DOT , XXXXXXX,
      /*     */XXXXXXX, KC_SPC , REPEAT , XXXXXXX, OSL(1) , KC_LBRC, XXXXXXX
  )
    
};