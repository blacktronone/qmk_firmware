/********************************************************************************************************************
*
*  ██████╗  ██╗ ██╗    ██╗  ██╗███████╗██╗   ██╗███╗   ███╗ █████╗ ██████╗               ███████╗██████╗ ███████╗
* ██╔═══██╗███║███║    ██║ ██╔╝██╔════╝╚██╗ ██╔╝████╗ ████║██╔══██╗██╔══██╗              ██╔════╝██╔══██╗██╔════╝
* ██║   ██║╚██║╚██║    █████╔╝ █████╗   ╚████╔╝ ██╔████╔██║███████║██████╔╝    █████╗    ███████╗██████╔╝█████╗
* ██║▄▄ ██║ ██║ ██║    ██╔═██╗ ██╔══╝    ╚██╔╝  ██║╚██╔╝██║██╔══██║██╔═══╝     ╚════╝    ╚════██║██╔══██╗██╔══╝
* ╚██████╔╝ ██║ ██║    ██║  ██╗███████╗   ██║   ██║ ╚═╝ ██║██║  ██║██║                   ███████║██████╔╝███████╗
*  ╚══▀▀═╝  ╚═╝ ╚═╝    ╚═╝  ╚═╝╚══════╝   ╚═╝   ╚═╝     ╚═╝╚═╝  ╚═╝╚═╝                   ╚══════╝╚═════╝ ╚══════╝
*
*********************************************************************************************************************/

#include QMK_KEYBOARD_H
#include "keychron_common.h"

enum layers{
    BASE,
    SYMBOL,
    GAMING,
    BACKSPACE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_92_iso(
        KC_MUTE,  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_INS,   KC_DEL,   KC_MUTE,
        _______,  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        _______,  KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
        _______,  LT(BACKSPACE,KC_BSPC), LT(GAMING,KC_A), MT(MOD_LCTL,KC_S), MT(MOD_LALT,KC_D), MT(MOD_LSFT,KC_F), KC_G, KC_H, MT(MOD_LSFT,KC_J), MT(MOD_LALT,KC_K), MT(MOD_LCTL,KC_L), KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, KC_HOME,
        _______,  KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        _______,  KC_LCTL,  KC_LWIN,  KC_MS_BTN1,  MO(SYMBOL),         KC_ENT,              MT(MOD_LSFT,KC_SPC), KC_RALT,  MO(BACKSPACE), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [SYMBOL] = LAYOUT_92_iso(
        RGB_TOG,  _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  _______,  RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,   _______,  _______,  RALT(KC_EQL),  _______,  _______,  _______,    _______,                      _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,   _______,  _______,  RALT(KC_NUBS), RSFT(KC_7),  _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,  _______,  _______,            _______,                       _______,            _______,  _______,    _______,  _______,  _______,  _______),

    [GAMING] = LAYOUT_92_iso(
        KC_MUTE,  KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_INS,   KC_DEL,   KC_MUTE,
        MC_1,     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        MC_2,     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_UP,     KC_O,    KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
        MC_3,     KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_LEFT,  KC_DOWN,   KC_RGHT, KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_HOME,
        MC_4,     KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        MC_5,     KC_LCTL,  KC_LWIN,  KC_LALT,  MO(BACKSPACE),         KC_SPC,                        KC_SPC,             KC_RALT,  MO(BACKSPACE), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [BACKSPACE] = LAYOUT_92_iso(
        RGB_TOG,  _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FLXP,  RGB_VAD,   RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,    KC_VOLU,  _______,  _______,  RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,   _______,  KC_BSPC,  KC_BSPC,  KC_BSPC,  KC_BSPC,  KC_BSPC,    _______,                      _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,   _______,  KC_BSPC,  KC_BSPC,  KC_BSPC,  KC_BSPC,  KC_BSPC,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,  _______,  _______,            _______,                       _______,            _______,  _______,    _______,  _______,  _______,  _______),
};

#if defined(ENCODER_ENABLE) && defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_DIRECTIONS][NUM_DIRECTIONS] = {
    [BASE] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [SYMBOL]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [GAMING] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [BACKSPACE]   = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI), ENCODER_CCW_CW(RGB_VAD, RGB_VAI)}
};
#endif // ENCODER_MAP_ENABLE

// clang-format on

void housekeeping_task_user(void) {
    housekeeping_task_keychron();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron(keycode, record)) {
        return false;
    }

    return true;
}
