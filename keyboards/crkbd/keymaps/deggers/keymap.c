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
#include <stdio.h>

enum layer_number {
  _BASE,
  _NAV,
  _NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x6_3(
      KC_NO,    KC_TAB,  KC_G,    KC_M,    KC_F,    KC_V,                         KC_QUES, KC_U,    KC_K,    KC_J,   KC_P,   KC_NO,
      KC_NO,    KC_R,    KC_S,    KC_N,    KC_T,    KC_P,                         KC_Y,    KC_A,    KC_O,    MT(MOD_LALT,KC_I),   MT(MOD_RGUI,KC_H),   KC_NO,
      KC_NO,    KC_X,    KC_C,    KC_L,    KC_D,    KC_B,                         KC_MINS, KC_W, KC_SLASH,  KC_COMMA, KC_DOT,  KC_NO,
                         KC_ESC,   LT(_NAV,KC_SPC),  KC_TAB,                      KC_ENT,   LT(_NUM,KC_E), KC_NO

  ),
  [_NAV] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                        KC_NO, KC_TRNS,  KC_NO,                                   KC_NO,   KC_BSPC, KC_NO
  ),
  [_NUM] = LAYOUT_split_3x6_3(
      KC_NO, KC_NO, KC_4,  KC_5, KC_6, KC_NO,                                     KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO, KC_NO,
      KC_NO, KC_NO, KC_1,  KC_2, KC_3, KC_NO,                                     KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_NO, KC_NO,
      KC_NO, KC_NO, KC_7,  KC_8, KC_9, KC_NO,                                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                      KC_NO, KC_TRNS,  KC_NO,                                     KC_NO,   KC_BSPC, KC_NO
  ),
};
