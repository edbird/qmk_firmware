/* Copyright 2018 'mechmerlin'
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
  QMKBEST = SAFE_RANGE,
  QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


// XXXXXX NOOP
// ______ TRANS

  /* Keymap (Base Layer) Default Layer QWERTY
   * ,----------------------------------------------------------------.
   * |~ `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Backsp |ESC |
   * |----------------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  |X   |
   * |----------------------------------------------------------------|
   * |Mo2    |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |DF1 |
   * |----------------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift | Up|X   |
   * |----------------------------------------------------------------|
   * |Ctrl|Win |Alt | Backsp    |   | Space |Mo3|Alt|Ctrl|Lef|Dow|Righ|
   * `----------------------------------------------------------------'
   */
[0] = LAYOUT_65_ansi_split_space(
  KC_GRV,  KC_1,    KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  XXXXXXX, KC_ESC, \
  KC_TAB,  KC_Q,    KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_NO,  \
  MO(2),   KC_A,    KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           DF(1),  \
  KC_LSFT, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   KC_NO,  \
  KC_LCTL, KC_LGUI, KC_LALT,KC_SPC,       KC_DEL,KC_BSPC,                     MO(3),   KC_RALT, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),



  /* Keymap (Base Layer 1) Alt Default Layer COLEMAK
   * ,----------------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |   |   |       |    |
   * |----------------------------------------------------------------|
   * |     |  Q|  W|  F|  P|  G|  J|  L|  U|  Y|  ;|   |   |     |DF0 |
   * |----------------------------------------------------------------|
   * |       |  A|  R|  S|  T|  D|  H|  N|  E|  I|  O|   |       |    |
   * |----------------------------------------------------------------|
   * |        |  Z|  X|  C|  V|  B|  K|  M|   |   |   |      |   |    |
   * |----------------------------------------------------------------|
   * |    |    |    |           |   |       |   |   |    |   |   |    |
   * `----------------------------------------------------------------'
   */
[1] = LAYOUT_65_ansi_split_space(
  _______, _______, _______,_______,_______,_______,_______,_______,_______, _______,_______,  _______, _______, _______, _______, \
  _______, KC_Q,    KC_W,   KC_F,   KC_P,   KC_G,   KC_J,   KC_L,   KC_U,    KC_Y,    KC_SCLN, _______, _______, _______,   DF(0), \
  _______, KC_A,    KC_R,   KC_S,   KC_T,   KC_D,   KC_H,   KC_N,   KC_E,    KC_I,    KC_O,    _______, _______,            KC_NO, \
  _______, KC_Z,    KC_X,   KC_C,   KC_V,   KC_B,   KC_K,   KC_M,   _______, _______, _______, _______,          _______, _______, \
  _______, _______, _______,_______,        _______,_______,                 _______, _______, _______, _______, _______, _______),



  /* Keymap Fn0 Layer
   * ,----------------------------------------------------------------.
   * |ESC|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |X   |
   * |----------------------------------------------------------------|
   * |X    |X  |X  |X  |X  |X  |X  |PgU|Up |PgD|X  |X  |X  |X    |X   |
   * |----------------------------------------------------------------|
   * |X      |X  |X  |X  |X  |X  |Hom|Lef|Dow|Rig|End|X  |X      |X   |
   * |----------------------------------------------------------------|
   * |X        |X  |X  |X  |X  |X  |X  |X  |X  |X  |X  |      |   |X  |
   * |----------------------------------------------------------------|
   * |X   |X   |X   |X          |X  |X      |X  |X  |X   |   |   |    |
   * `----------------------------------------------------------------'
   */
[2] = LAYOUT_65_ansi_split_space(
  KC_ESC,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,XXXXXXX, \
  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_PGUP,  KC_UP,KC_PGDN,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, \
  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT, KC_END,XXXXXXX,XXXXXXX,        XXXXXXX, \
  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,        _______,XXXXXXX, \
  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,        XXXXXXX,XXXXXXX,                XXXXXXX,XXXXXXX,XXXXXXX,_______,_______,_______),



  /* Keymap Fn1 Layer
   * ,----------------------------------------------------------------.
   * |~ `|F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|Del    |RST |
   * |----------------------------------------------------------------|
   * |     |PRS|BRK|SRQ|   |   |   |   |   |   |   |   |   |     |    |
   * |----------------------------------------------------------------|
   * |CAPSL |NUL|SCL|   |   |   |   |   |   |   |   |   |        |    |
   * |----------------------------------------------------------------|
   * |        |   |   |   |   |   |   |   |   |   |   |      |   |    |
   * |----------------------------------------------------------------|
   * |    |    |    |           |   |       |   |   |    |   |   |    |
   * `----------------------------------------------------------------'
   */
[3] = LAYOUT_65_ansi_split_space(
  XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, KC__MUTE,KC__VOLDOWN,KC__VOLUP, XXXXXXX, RESET, \
  XXXXXXX,KC_PSCR,KC_BRK,KC_SYSREQ,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,KC_MSTP,KC_MPLY,KC_MPRV,KC_MNXT,XXXXXXX,XXXXXXX, \
  KC_CLCK,KC_SLCK,KC_SLCK,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX,XXXXXXX,        XXXXXXX, \
  KC_LSFT,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,XXXXXXX,        XXXXXXX,_______, \
  KC_LCTL,XXXXXXX,XXXXXXX,XXXXXXX,        XXXXXXX,XXXXXXX,                XXXXXXX,  KC_APP,KC_RCTL,_______,_______,_______)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QMKBEST:
      if (record->event.pressed) {
        // when keycode QMKBEST is pressed
        SEND_STRING("QMK is the best thing ever!");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    case QMKURL:
      if (record->event.pressed) {
        // when keycode QMKURL is pressed
        SEND_STRING("https://qmk.fm/" SS_TAP(X_ENTER));
      } else {
        // when keycode QMKURL is released
      }
      break;
  }
  return true;
}
