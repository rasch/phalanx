#include QMK_KEYBOARD_H

enum combos {
  C_LOCK_SYS,
  C_CAPS_WORD,
  C_RIGHT_CLICK,
  C_LEFT_CLICK,
  C_LEFT_ALT,
};

enum layers {
  L_ALPHA = 0,
  L_A2,
  L_SYM1,
  L_SYM2,
  L_NUM,
  L_SYS,
  L_A2U,
};

#define ALT_0 LALT_T(KC_0)
#define ALT_3 RALT_T(KC_3)
#define ALT_G LALT_T(KC_G)
#define ALT_QUOT RALT_T(KC_QUOT)
#define ALT_U RALT_T(KC_U)
#define ALT_W LALT_T(KC_W)
#define CAP_B LSFT(KC_B)
#define CAP_F LSFT(KC_F)
#define CAP_J LSFT(KC_J)
#define CAP_K LSFT(KC_K)
#define CAP_M LSFT(KC_M)
#define CAP_P LSFT(KC_P)
#define CAP_Q LSFT(KC_Q)
#define CAP_V LSFT(KC_V)
#define CAP_W LSFT(KC_W)
#define CAP_X LSFT(KC_X)
#define CAP_Y LSFT(KC_Y)
#define CAP_Z LSFT(KC_Z)
#define CS_TAB RCS(KC_TAB)
#define CTL_4 RCTL_T(KC_4)
#define CTL_DOT LCTL_T(KC_DOT)
#define CTL_L LCTL_T(KC_L)
#define CTL_O RCTL_T(KC_O)
#define CTL_TAB RCTL(KC_TAB)
#define CTL_V LCTL_T(KC_V)
#define CTL_Z RCTL_T(KC_Z)
#define END_GLBRC LT(0, LGUI(KC_LBRC))
#define GGRV_TAB LT(0, KC_TAB)
#define GRBRC LGUI(KC_RBRC)
#define GUI_1 LGUI_T(KC_1)
#define GUI_2 RGUI_T(KC_2)
#define GUI_D LGUI_T(KC_D)
#define GUI_F RGUI_T(KC_F)
#define GUI_H RGUI_T(KC_H)
#define GUI_M LGUI_T(KC_M)
#define HOME_DEL LT(0, KC_DEL)
#define MEH_SPC MEH_T(KC_SPC)
#define NUM_C LT(L_NUM, KC_C)
#define NUM_I LT(L_NUM, KC_I)
#define OS_A2 OSL(L_A2)
#define OS_A2U OSL(L_A2U)
#define OS_CTL OSM(MOD_RCTL)
#define OS_GUI OSM(MOD_RGUI)
#define OS_SFT OSM(MOD_LSFT)
#define PSCR_RIGHT LT(0, KC_RIGHT)
#define PSTE_COPY LT(0, LCTL(KC_C))
#define QUES_EXLM LT(0, KC_EXLM)
#define Q_BSPC LT(0, KC_BSPC)
#define SYM1_E LT(L_SYM1, KC_E)
#define SYM1_R LT(L_SYM1, KC_R)
#define SYM2_A LT(L_SYM2, KC_A)
#define SYM2_S LT(L_SYM2, KC_S)
#define SYS_N LT(L_SYS, KC_N)
#define SYS_T LT(L_SYS, KC_T)
#define TAB_LEFT LT(0, KC_LEFT)
#define TO_A2 TO(L_A2)
#define TO_ALPHA TO(L_ALPHA)

/*************************************************
 * Keymap / Layers
 *************************************************/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_ALPHA] = LAYOUT(
    XXXXXXX, CTL_L,   ALT_G,   GUI_D,   GUI_H,   ALT_U,   CTL_O,   XXXXXXX,
    NUM_I,   SYM2_S,  SYM1_R,  SYS_T,   SYS_N,   SYM1_E,  SYM2_A,  NUM_C,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      QK_REP,  MEH_SPC, OS_A2,   OS_A2U
  ),
  [L_A2] = LAYOUT(
    XXXXXXX, CTL_V,   ALT_W,    GUI_M,   GUI_F,   ALT_QUOT, CTL_Z,   XXXXXXX,
    KC_Q,    KC_J,    KC_P,     KC_K,    KC_B,    KC_DOT,   KC_X,    KC_Y,
    XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX,
                      TO_ALPHA, OS_SFT,  OS_A2U,  XXXXXXX
  ),
  [L_SYM1] = LAYOUT(
    XXXXXXX, XXXXXXX, KC_HASH, KC_DLR,  KC_LT,   KC_GT,   KC_CIRC, XXXXXXX,
    KC_GRV,  KC_TILD, KC_UNDS, KC_BSLS, KC_LBRC, KC_RBRC, KC_PIPE, KC_SLSH,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      KC_TRNS, KC_TRNS, XXXXXXX, XXXXXXX
  ),
  [L_SYM2] = LAYOUT(
    XXXXXXX, KC_AT,   XXXXXXX,   XXXXXXX, KC_LPRN, KC_RPRN, KC_SCLN, XXXXXXX,
    KC_ASTR, KC_PERC, QUES_EXLM, KC_DQUO, KC_LCBR, KC_RCBR, KC_AMPR, KC_COLN,
    XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      KC_TRNS,   KC_TRNS, XXXXXXX, XXXXXXX
  ),
  [L_NUM] = LAYOUT(
    XXXXXXX, CTL_DOT, ALT_0,   GUI_1,   GUI_2,   ALT_3,   CTL_4,   XXXXXXX,
    KC_MINS, KC_PLUS, KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_EQL,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      KC_TRNS, OS_SFT,  XXXXXXX, XXXXXXX
  ),
  [L_SYS] = LAYOUT(
    XXXXXXX,  KC_ESC,   CS_TAB,    CTL_TAB, PSTE_COPY, KC_UP,   Q_BSPC,     XXXXXXX,
    GGRV_TAB, HOME_DEL, END_GLBRC, GRBRC,   TAB_LEFT,  KC_DOWN, PSCR_RIGHT, KC_ENT,
    XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX,    XXXXXXX,
                        TO_ALPHA,  OS_SFT,  OS_GUI,    OS_CTL
  ),
  [L_A2U] = LAYOUT(
    XXXXXXX, CAP_V,   CAP_W,    CAP_M,   CAP_F,   KC_DQUO, CAP_Z,   XXXXXXX,
    CAP_Q,   CAP_J,   CAP_P,    CAP_K,   CAP_B,   KC_COMM, CAP_X,   CAP_Y,
    XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      TO_ALPHA, KC_TRNS, TO_A2,   XXXXXXX
  ),
};

/*************************************************
 * Combos
 *************************************************/

const uint16_t PROGMEM lock_sys[] = {GUI_H, ALT_U, CTL_O, COMBO_END};
const uint16_t PROGMEM caps_word[] = {SYS_N, SYM1_E, SYM2_A, COMBO_END};
const uint16_t PROGMEM right_click[] = {PSTE_COPY, KC_UP, COMBO_END};
const uint16_t PROGMEM left_click[] = {TAB_LEFT, KC_DOWN, COMBO_END};
const uint16_t PROGMEM left_alt[] = {END_GLBRC, GRBRC, COMBO_END};

combo_t key_combos[] = {
  [C_LOCK_SYS] = COMBO(lock_sys, TO(L_SYS)),
  [C_CAPS_WORD] = COMBO(caps_word, CW_TOGG),
  [C_RIGHT_CLICK] = COMBO(right_click, KC_BTN2),
  [C_LEFT_CLICK] = COMBO(left_click, KC_BTN1),
  [C_LEFT_ALT] = COMBO(left_alt, OSM(MOD_LALT)),
};

/*************************************************
 * Macros & Mod-Tap Overrides
 *************************************************/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case GGRV_TAB:
      if (!record->tap.count && record->event.pressed) {
        tap_code16(LGUI(KC_GRV));
        return false;
      }
      return true;
    case Q_BSPC:
      if (!record->tap.count && record->event.pressed) {
        tap_code(KC_Q);
      }  return true;
    case TAB_LEFT:
      if (!record->tap.count && record->event.pressed) {
        tap_code(KC_TAB);
        return false;
      }
      return true;
    case PSCR_RIGHT:
      if (!record->tap.count && record->event.pressed) {
        tap_code(KC_PSCR);
        return false;
      }
      return true;
    case HOME_DEL:
      if (!record->tap.count && record->event.pressed) {
        tap_code(KC_HOME);
        return false;
      }
      return true;
    case END_GLBRC:
      if (record->tap.count && record->event.pressed) {
        tap_code16(LGUI(KC_LBRC));
      } else if (record->event.pressed) {
        tap_code(KC_END);
      }
      return false;
    case QUES_EXLM:
      if (record->tap.count && record->event.pressed) {
        tap_code16(LSFT(KC_1));
      } else if (record->event.pressed) {
        tap_code16(LSFT(KC_SLSH));
      }
      return false;
    case PSTE_COPY:
      if (record->tap.count && record->event.pressed) {
        tap_code16(LCTL(KC_C));
      } else if (record->event.pressed) {
        tap_code16(LCTL(KC_V));
      }
      return false;
  }
  return true;
}

/*************************************************
 * Force One-Shot Mod to Clear One-Shot Layer
 *************************************************/

void post_process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (IS_QK_ONE_SHOT_MOD(keycode) && is_oneshot_layer_active() && record->event.pressed) {
    clear_oneshot_layer_state(ONESHOT_OTHER_KEY_PRESSED);
  }
  return;
}
