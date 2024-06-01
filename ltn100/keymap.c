/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keymap.h"
#include "oled.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [DEFAULT] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_ENT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LCTL,   KC_LALT,  MO(NUM),     MO(NUM),   KC_SPC, KC_RGUI
                                      //`--------------------------'  `--------------------------'

  ),

    [NUM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_INS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_NUHS, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, KC_NUBS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  MO(FN),     MO(FN),  _______ , _______
                                      //`--------------------------'  `--------------------------'
  ),

    [FN] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       DF(FN),  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                        KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
       DF(NUM), XXXXXXX, RGB_RMOD, RGB_TOG, RGB_MOD, XXXXXXX,                     KC_LEFT,  KC_DOWN,  KC_UP, KC_RGHT,  KC_F11, KC_PSCR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      DF(DEFAULT),XXXXXXX,RGB_HUD,RGB_VAD,RGB_VAI,RGB_HUI,                        KC_BRID, KC_VOLD, KC_VOLU, KC_BRIU,  KC_F12, MO(LAYER3),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______,   _______,  _______,   _______, _______, _______
                                      //`--------------------------'  `--------------------------'
  ),

    [LAYER3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      _______, QK_CLEAR_EEPROM, _______, _______, _______, _______,              _______, _______, _______, _______, _______, _______,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          _______, _______,  _______,     _______,  _______ , _______
                                      //`--------------------------'  `--------------------------'
  )

};


// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     return oled_process_record_user(keycode, record);
// }

// void matrix_scan_user(void) {
//     oled_matrix_scan_user();
// }

// layer_state_t layer_state_set_user(layer_state_t state) {
// // #ifdef RGBLIGHT_ENABLE
//     switch (biton32(state)) {
//     case FN:
//       rgblight_sethsv_noeeprom();
//       break;
//     case NUM:
//       rgblight_sethsv_noeeprom_yellow();
//       rgblight_mode_noeeprom(5);
//       break;
//     default: //  for any other layers, or the default layer
//       switch (biton32(default_layer_state)) {
//         case FN:
//            rgblight_sethsv_noeeprom_magenta(); break;
//         case NUM:
//             rgblight_sethsv_noeeprom_green(); break;
//           default:
//         rgblight_sethsv_noeeprom_cyan(); break
//         }
//       break;
//     }
// // #endif // RGBLIGHT_ENABLE
//     return state;
// }
