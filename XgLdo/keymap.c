#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_PSCR,        
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,                                           KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_DELETE,      
    KC_ESCAPE,      LT(3,KC_A),     MT(MOD_LGUI, KC_R),MT(MOD_LALT, KC_S),MT(MOD_LCTL, KC_T),KC_G,                                           KC_M,           MT(MOD_RCTL, KC_N),MT(MOD_RALT, KC_E),MT(MOD_RGUI, KC_I),MT(MOD_RSFT, KC_O),KC_ENTER,       
    TO(5),          KC_Z,           KC_X,           KC_C,           KC_D,           KC_V,                                           KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       TO(2),          
                                                    KC_BSPC,        KC_LEFT_SHIFT,                                  MO(1),          KC_SPACE
  ),
  [1] = LAYOUT_voyager(
    KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,                                          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_SCLN,        KC_COLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSLS,        KC_LPRN,        KC_RPRN,        KC_PIPE,        KC_TILD,                                        KC_DQUO,        KC_QUOTE,       KC_MINUS,       KC_EQUAL,       KC_PLUS,        KC_ENTER,       
    KC_TRANSPARENT, KC_LBRC,        KC_LCBR,        KC_RCBR,        KC_RBRC,        KC_GRAVE,                                       KC_NO,          KC_TRANSPARENT, KC_UNDS,        KC_NO,          KC_QUES,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_SLASH,       KC_ASTR,        KC_MINUS,       KC_BSPC,        
    KC_TAB,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT, 
    KC_ESCAPE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_4,           KC_5,           KC_6,           KC_EQUAL,       KC_ENTER,       
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_1,           KC_2,           KC_3,           KC_DOT,         TO(0),          
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_SPACE,       KC_0
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_INSERT,      KC_UP,          KC_NO,          KC_BSPC,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_ENTER,       
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_NO,          KC_HOME,        KC_PAGE_UP,     KC_PGDN,        KC_END,         KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_F1,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,                                           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_CAPS,        KC_LEFT_CTRL,   KC_A,           KC_S,           KC_D,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_F,           KC_G,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_SPACE,       KC_LEFT_SHIFT,                                  KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case MT(MOD_LGUI, KC_R):
            return TAPPING_TERM + 15;
        case MT(MOD_LALT, KC_S):
            return TAPPING_TERM + 80;
        case MT(MOD_LCTL, KC_T):
            return TAPPING_TERM + 80;
        case KC_BSPC:
            return 0;
        case MT(MOD_RCTL, KC_N):
            return TAPPING_TERM + 80;
        case MT(MOD_RALT, KC_E):
            return TAPPING_TERM + 80;
        case MT(MOD_RGUI, KC_I):
            return TAPPING_TERM + 15;
        case TO(2):
            return TAPPING_TERM + 20;
        case KC_SPACE:
            return TAPPING_TERM -15;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {153,255,255}, {204,218,204}, {204,218,204}, {204,218,204}, {204,218,204}, {204,218,204}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {75,218,204}, {197,207,255}, {197,207,255}, {197,207,255}, {153,255,255}, {75,218,204}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {197,207,255}, {204,218,204}, {204,218,204}, {204,218,204}, {204,218,204}, {204,218,204}, {20,251,250}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {197,207,255}, {197,207,255}, {197,207,255}, {197,207,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {153,255,255}, {75,218,204}, {75,218,204}, {153,255,255} },

    [1] = { {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {197,183,238}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {14,183,238}, {131,255,255}, {86,207,255}, {86,207,255}, {131,255,255}, {246,255,255}, {110,218,204}, {28,255,255}, {188,255,255}, {188,255,255}, {28,255,255}, {246,255,255}, {14,183,238}, {59,183,237}, {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {234,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {28,255,255}, {0,0,0}, {0,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {110,218,204}, {0,183,238}, {118,183,238} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,223,172}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {16,223,172}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {59,183,237}, {0,0,0}, {0,0,0}, {225,248,253}, {225,248,253}, {225,248,253}, {14,183,238}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {225,248,253}, {0,0,0}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {225,248,253}, {58,251,250}, {0,0,0}, {31,255,255}, {31,255,255}, {31,255,255}, {225,248,253}, {110,218,204}, {0,0,0}, {31,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {110,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {135,218,204}, {197,207,255}, {135,218,204}, {135,218,204}, {0,0,0}, {0,0,0}, {197,207,255}, {197,207,255}, {197,207,255}, {0,0,0}, {32,228,255}, {0,0,0}, {58,251,250}, {58,251,250}, {58,251,250}, {58,251,250}, {110,218,204}, {0,0,0}, {0,0,0} },

    [4] = { {20,251,250}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {20,251,250}, {153,255,255}, {0,0,0}, {20,251,250}, {197,207,255}, {197,207,255}, {153,255,255}, {153,255,255}, {153,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {153,255,255}, {197,207,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {29,218,204}, {29,218,204}, {29,218,204}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {29,218,204}, {29,218,204}, {29,218,204}, {29,218,204}, {29,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}



