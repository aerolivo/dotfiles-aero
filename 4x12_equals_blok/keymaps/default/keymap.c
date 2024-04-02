// Copyright 2022 @waffle87
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H
#include "quantum/os_detection.h"


enum layers {
    _MAIN,
    _RAISE,
    _RAISE_2,
    _LOWER,
    _LOWER_2
};

#define MAIN        OSL(_MAIN)
#define LOWER       OSL(_LOWER)
#define LOWER_2     OSL(_LOWER_2)
#define RAISE       OSL(_RAISE)
#define RAISE_2     OSL(_RAISE_2)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_MAIN] = LAYOUT_ortho_4x12(
    KC_ESC,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_BSPC,
    KC_TAB,     KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,       KC_J,       KC_K,       KC_L,       KC_SCLN,    KC_QUOT,
    KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,       KC_M,       KC_COMM,    KC_DOT,     RSFT_T(KC_SLSH),    RSFT_T(KC_ENT),
    KC_LCTL,    KC_LGUI,    KC_LALT,    MAIN,       LOWER,      KC_SPC,     KC_SPC,     RAISE,      KC_LEFT,    KC_DOWN,    KC_UP,      KC_RGHT
  ),
  [_RAISE] = LAYOUT_ortho_4x12(
    KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       _______,
    KC_CAPS,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_MINS,    KC_PLUS,    KC_LBRC,    KC_RBRC,    KC_BSLS,
    _______,    KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_TILD,    KC_EQL,     _______,    KC_LCBR,    KC_RCBR,    _______,
    _______,    KC_F12,     _______,    _______,    _______,    _______,    _______,    RAISE_2,    KC_HOME,    KC_PGDN,    KC_PGUP,    KC_END
  ),
  [_RAISE_2] = LAYOUT_ortho_4x12(
    KC_TILD,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_MSTP,
    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_MPRV,    KC_MPLY,    KC_MNXT,    KC_VOLD,    KC_VOLU,    _______,
    _______,    KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     S(KC_NUHS), S(KC_NUBS), KC_HOME,    KC_END,     KC_PSCR,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______
  ),
  [_LOWER] = LAYOUT_ortho_4x12(
    KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_DEL,
    RGB_TOG,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,    KC_BSLS,
    BL_TOGG,    KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_NUHS,    KC_NUBS,    KC_PGUP,    KC_PGDN,    _______,
    _______,    _______,    _______,    _______,    LOWER_2,    _______,    _______,    _______,    KC_MNXT,    KC_VOLD,    KC_VOLU,    KC_MPLY
  ),
  [_LOWER_2] = LAYOUT_ortho_4x12(
    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
    RGB_TOG,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_MINS,    KC_EQL,     KC_LBRC,    KC_RBRC,    KC_BSLS,
    BL_TOGG,    _______,    _______,    KC_F9,      KC_F10,     KC_F11,     KC_F12,     KC_NUHS,    KC_NUBS,    KC_PGUP,    KC_PGDN,    _______,
    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______,    _______
  )
};
