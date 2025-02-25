#include QMK_KEYBOARD_H

#define _MA 0
#define _FN 1


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MA] = LAYOUT_ansi(
            KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_TILD,
    KC_F13, KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
    KC_F14, KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,  KC_PGUP,
    KC_F15, KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_PGDN,
    KC_F16, KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                    MO(_FN), KC_RALT, KC_RCTL, KC_LEFT,          KC_DOWN, KC_RGHT
  ),
  [_FN] = LAYOUT_ansi(
               RESET,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_HOME,  KC_INS,
    RGB_TOG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, KC_BCIU,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_MUTE, KC_BRID,
    _______, _______, _______, _______,                   _______,                   _______, _______, _______, KC_MPRV,          KC_MPLY, KC_MNXT
  ),

};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  process_record_remote_kb(keycode, record);
  switch(keycode) {
    case KC_CUST: //custom macro
      if (record->event.pressed) {
      }
    break;

    case RM_1: //remote macro 1
      if (record->event.pressed) {
      }
    break;

    case RM_2: //remote macro 2
      if (record->event.pressed) {
      }
    break;

    case RM_3: //remote macro 3
      if (record->event.pressed) {
      }
    break;

    case RM_4: //remote macro 4
      if (record->event.pressed) {
      }
    break;
    
  }
return true;
}

void matrix_init_user(void) {
  matrix_init_remote_kb();
}

void matrix_scan_user(void) {
  matrix_scan_remote_kb();
}