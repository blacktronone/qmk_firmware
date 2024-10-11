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
        TO(BASE),  KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   C(KC_H),            KC_PGUP,
        TO(SYMBOL),  KC_TAB,   KC_Q,     KC_W,   LT(GAMING, KC_E),     KC_R,     KC_T,      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
        TO(GAMING),  LT(BACKSPACE,KC_BSPC), LT(BACKSPACE, KC_A), MT(MOD_LCTL,KC_S), MT(MOD_LALT,KC_D), MT(MOD_LSFT,KC_F), KC_G, KC_H, MT(MOD_LSFT,KC_J), MT(MOD_LALT,KC_K), MT(MOD_LCTL,KC_L), KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT, KC_HOME,
        TO(BACKSPACE),  KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     LT(SYMBOL, KC_V),      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   _______,  _______,  KC_UP,
        _______,  KC_LCTL,  KC_LWIN,  KC_MS_BTN1,  LT(SYMBOL, KC_ESC),         LT(GAMING, KC_ENT),              MT(MOD_LSFT,KC_SPC), KC_RALT,  MO(BACKSPACE), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [SYMBOL] = LAYOUT_92_iso(
        RGB_TOG,  _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   _______,  _______,  RGB_TOG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,    _______,  _______,            _______,
        _______,  RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,   _______,  RALT(KC_4), RALT(KC_EQL), LSFT(KC_EQL),  _______,  _______,    _______,                      _______,
        _______,  _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,   KC_SLSH,  LSFT(KC_SLSH), RSFT(KC_7) ,RALT(KC_NUBS), _______,  _______,    _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,   _______,  _______,  _______,  _______,  _______,  _______,              _______,  _______,
        _______,  _______,  _______,  _______,  _______,            _______,                       _______,            _______,  _______,    _______,  _______,  _______,  _______),

    [GAMING] = LAYOUT_92_iso(
        KC_MUTE,     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,     KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,     KC_F12,   KC_INS,   KC_DEL,   KC_MUTE,
        _______,     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,      KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
        _______,     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,      KC_Y,     KC_U,     KC_UP,     KC_O,    KC_P,     KC_LBRC,    KC_RBRC,                      KC_PGDN,
        _______,     _______,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,      KC_H,     KC_LEFT,  KC_DOWN,   KC_RGHT, KC_SCLN,  KC_QUOT,    KC_NUHS,  KC_ENT,             KC_HOME,
        _______,     KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,  KC_UP,
        _______,     KC_LCTL,  KC_LWIN,  KC_LALT,  MO(BACKSPACE),         KC_SPC,                        KC_SPC,             KC_RALT,  MO(BACKSPACE), KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

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
bool rgb_matrix_indicators_user(void) {
	    switch(get_highest_layer(layer_state|default_layer_state)) {
		    case BASE:
                rgb_matrix_set_color_all(0,0,0);
                rgb_matrix_set_color(7,255,0,198);
                rgb_matrix_set_color(1,255,0,198);
                rgb_matrix_set_color(3,80,250,0);
                rgb_matrix_set_color(5,100,0,255);
                rgb_matrix_set_color(9,241,255,0);
                rgb_matrix_set_color(11,255,0,198);
                rgb_matrix_set_color(13,80,250,0);
                rgb_matrix_set_color(17,100,0,255);
                rgb_matrix_set_color(19,241,255,0);
                rgb_matrix_set_color(21,255,0,198);
                rgb_matrix_set_color(23,80,250,0);
                rgb_matrix_set_color(25,100,0,255);
                rgb_matrix_set_color(27,241,255,0);
                rgb_matrix_set_color(31,255,0,198);
                rgb_matrix_set_color(33,80,250,0);
                rgb_matrix_set_color(35,100,0,255);
                rgb_matrix_set_color(37,241,255,0);
                rgb_matrix_set_color(39,255,0,198);
                rgb_matrix_set_color(41,80,250,0);
                rgb_matrix_set_color(43,100,0,255);
                rgb_matrix_set_color(45,241,255,0);
                rgb_matrix_set_color(47,255,0,198);
                rgb_matrix_set_color(49,80,250,0);
                rgb_matrix_set_color(51,100,0,255);
                rgb_matrix_set_color(53,241,255,0);
                break;
            case SYMBOL:
                rgb_matrix_set_color_all(0,0,0);
                rgb_matrix_set_color(15,80,250,0);
                rgb_matrix_set_color(0,255,0,198);
                rgb_matrix_set_color(2,80,250,0);
                rgb_matrix_set_color(4,100,0,255);
                rgb_matrix_set_color(6,241,255,0);
                rgb_matrix_set_color(8,241,255,0);
                rgb_matrix_set_color(10,255,0,198);
                rgb_matrix_set_color(12,80,250,0);
                rgb_matrix_set_color(14,100,0,255);
                rgb_matrix_set_color(16,255,0,198);
                rgb_matrix_set_color(18,80,250,0);
                rgb_matrix_set_color(20,100,0,255);
                rgb_matrix_set_color(24,241,255,0);
                rgb_matrix_set_color(26,80,250,0);
                rgb_matrix_set_color(28,100,0,255);
                rgb_matrix_set_color(30,241,255,0);
                rgb_matrix_set_color(32,255,0,198);
                rgb_matrix_set_color(34,255,0,198);
                rgb_matrix_set_color(36,80,250,0);
                rgb_matrix_set_color(38,100,0,255);
                rgb_matrix_set_color(40,241,255,0);
                rgb_matrix_set_color(42,80,250,0);
                rgb_matrix_set_color(44,100,0,255);
                rgb_matrix_set_color(46,241,255,0);
                rgb_matrix_set_color(48,255,0,198);
                rgb_matrix_set_color(50,255,0,198);
                rgb_matrix_set_color(52,80,250,0);
                break;
            case GAMING:
                rgb_matrix_set_color_all(0,0,0);
                rgb_matrix_set_color(22,100,0,255);
                rgb_matrix_set_color(1,255,0,198);
                rgb_matrix_set_color(3,80,250,0);
                rgb_matrix_set_color(5,100,0,255);
                rgb_matrix_set_color(9,241,255,0);
                rgb_matrix_set_color(11,255,0,198);
                rgb_matrix_set_color(13,80,250,0);
                rgb_matrix_set_color(17,100,0,255);
                rgb_matrix_set_color(19,241,255,0);
                rgb_matrix_set_color(21,255,0,198);
                rgb_matrix_set_color(23,80,250,0);
                rgb_matrix_set_color(25,100,0,255);
                rgb_matrix_set_color(27,241,255,0);
                rgb_matrix_set_color(31,255,0,198);
                rgb_matrix_set_color(33,80,250,0);
                rgb_matrix_set_color(35,100,0,255);
                rgb_matrix_set_color(37,241,255,0);
                rgb_matrix_set_color(39,255,0,198);
                rgb_matrix_set_color(41,80,250,0);
                rgb_matrix_set_color(43,100,0,255);
                rgb_matrix_set_color(45,241,255,0);
                rgb_matrix_set_color(47,255,0,198);
                rgb_matrix_set_color(49,80,250,0);
                rgb_matrix_set_color(51,100,0,255);
                rgb_matrix_set_color(53,241,255,0);
                break;
            case BACKSPACE:
                rgb_matrix_set_color_all(0,0,0);
                rgb_matrix_set_color(29,241,255,0);
                rgb_matrix_set_color(0,255,0,198);
                rgb_matrix_set_color(2,80,250,0);
                rgb_matrix_set_color(4,100,0,255);
                rgb_matrix_set_color(6,241,255,0);
                rgb_matrix_set_color(8,241,255,0);
                rgb_matrix_set_color(10,255,0,198);
                rgb_matrix_set_color(12,80,250,0);
                rgb_matrix_set_color(14,100,0,255);
                rgb_matrix_set_color(16,255,0,198);
                rgb_matrix_set_color(18,80,250,0);
                rgb_matrix_set_color(20,100,0,255);
                rgb_matrix_set_color(24,241,255,0);
                rgb_matrix_set_color(26,80,250,0);
                rgb_matrix_set_color(28,100,0,255);
                rgb_matrix_set_color(30,241,255,0);
                rgb_matrix_set_color(32,255,0,198);
                rgb_matrix_set_color(34,255,0,198);
                rgb_matrix_set_color(36,80,250,0);
                rgb_matrix_set_color(38,100,0,255);
                rgb_matrix_set_color(40,241,255,0);
                rgb_matrix_set_color(42,80,250,0);
                rgb_matrix_set_color(44,100,0,255);
                rgb_matrix_set_color(46,241,255,0);
                rgb_matrix_set_color(48,255,0,198);
                rgb_matrix_set_color(50,255,0,198);
                rgb_matrix_set_color(52,80,250,0);
                break;
            default: //  for any other layers, or the default layer
                break;
        }
  return false;
}
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron(keycode, record)) {
        return false;
    }

    return true;
}
