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

enum combos {
  GM,
  MF
};

const uint16_t PROGMEM gm_combo[] = {KC_G, KC_M, COMBO_END};
const uint16_t PROGMEM mf_combo[] = {KC_M, KC_F, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [GM] = COMBO(gm_combo, KC_LEFT_PAREN),
  [MF] = COMBO(mf_combo, KC_RIGHT_PAREN)
};

enum layer_number {
  _BASE,
  _NAV,
  _NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_split_3x5_3(
          KC_B,                  KC_L,                 KC_M,                 KC_K,                  KC_SLASH,                                      KC_QUES,                KC_Y,                  KC_O,               KC_U,              KC_Q,
          MT(MOD_RGUI,KC_R),     MT(MOD_LALT,KC_S),    MT(MOD_LCTL,KC_T),    MT(MOD_LSFT,KC_H),     MT(MOD_RALT,KC_QUOTE),                         MT(MOD_RALT,KC_P),     MT(MOD_LSFT,KC_N),     MT(MOD_LCTL,KC_A), MT(MOD_LALT,KC_I), MT(MOD_RGUI,KC_F),
          KC_V,                  KC_C,                  KC_W,                KC_D,                   KC_COMMA,                                     KC_DOT,                  KC_J,                  KC_G,               KC_X,          KC_Z,
                          KC_ESC,  LT(_NAV,KC_SPC), KC_TAB,                  KC_ENT, LT(_NUM,KC_E), KC_NO
  ),
  [_NAV] = LAYOUT_split_3x5_3(
       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, KC_NO,
       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                                   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                        KC_NO, KC_TRNS,  KC_NO,                             KC_ENT,   KC_BSPC, KC_NO
  ),
  [_NUM] = LAYOUT_split_3x5_3(
       KC_NO, KC_4,  KC_5, KC_6, KC_NO,                                     KC_NO, KC_NO,    KC_NO,    KC_NO,    KC_NO,
       KC_NO, KC_1,  KC_2, KC_3, KC_NO,                                     KC_NO, KC_NO, KC_NO, KC_NO,  KC_LGUI,
       KC_NO, KC_7,  KC_8, KC_9, KC_NO,                                     KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                      KC_NO, KC_TRNS,  KC_NO,                                     KC_NO,   KC_BSPC, KC_NO
  ),
};
