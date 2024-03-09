#include QMK_KEYBOARD_H

enum combos {
  C_DM_REC1,
  C_DM_PLY1,
  C_DM_REC2,
  C_DM_PLY2,
  C_LOCK_NAV,
  C_ESC,
  C_REOPEN_TAB,
  C_MIDDLE_CLICK,
};

enum layers {
  L_ALPHA = 0,
  L_NUM,
  L_SYM,
  L_NAV,
  L_SYS,
};

enum custom_keycodes {
  M_CPL1 = SAFE_RANGE,
  M_CPL2,
  M_INCLUDE,
  M_THE,
  M_UPDIR,
  M_NG,
  M_COMM_BUT,
  M_QUOT_LL,
  M_SPC_CAP,
};

enum {
  TD_NAV_SYM,
  TD_SYS_SFT,
  TD_SFT_F1,
  TD_CTL_F2,
  TD_ALT_F3,
  TD_GUI_F4,
  TD_INS_F5,
  TD_PAUS_F6,
};

#define HYPR_B HYPR_T(KC_B)
#define MEH_Y MEH_T(KC_Y)
#define MEH_W MEH_T(KC_W)
#define HYPR_V HYPR_T(KC_V)
#define GUI_C LGUI_T(KC_C)
#define ALT_I LALT_T(KC_I)
#define CTL_E LCTL_T(KC_E)
#define SFT_A LSFT_T(KC_A)
#define SFT_H RSFT_T(KC_H)
#define CTRL_T RCTL_T(KC_T)
#define ALT_S LALT_T(KC_S)
#define GUI_N RGUI_T(KC_N)
#define NAV_SYM TD(TD_NAV_SYM)
#define NUM_BSPC LT(L_NUM, KC_BSPC)
#define NUM_SPC LT(L_NUM, KC_SPC)
#define SYS_SFT TD(TD_SYS_SFT)

#define HYPR_GRV HYPR_T(KC_GRV)
#define MEH_EQL MEH_T(KC_EQL)
#define MEH_LBRC MEH_T(KC_LBRC)
#define HYPR_RBRC HYPR_T(KC_RBRC)
#define GUI_ESC LGUI_T(KC_ESC)
#define ALT_SCLN LALT_T(KC_SCLN)
#define CTL_COMM LCTL_T(KC_COMM)
#define SFT_DOT LSFT_T(KC_DOT)
#define SFT_1 RSFT_T(KC_1)
#define CTL_2 RCTL_T(KC_2)
#define ALT_3 LALT_T(KC_3)
#define GUI_4 RGUI_T(KC_4)

#define CAP_Z LSFT(KC_Z)
#define CAP_Q LSFT(KC_Q)
#define CAP_ENT LSFT(KC_ENT)
#define TO_ALPHA TO(L_ALPHA)

#define HYPR_PGUP HYPR_T(KC_PGUP)
#define MEH_HOME MEH_T(KC_HOME)
#define WORD_UP LT(0, KC_UP)
#define CLK_END LT(0, KC_END)
#define GUI_PGDN LGUI_T(KC_PGDN)
#define ALT_LEFT LALT_T(KC_LEFT)
#define CTL_DOWN LCTL_T(KC_DOWN)
#define SFT_RGHT LSFT_T(KC_RGHT)
#define XTAB_DEL LT(0, KC_DEL)
#define UNDO_PTAB LT(0, C(KC_Z))
#define REDO_NTAB LT(0, C(KC_Y))
#define CPY_PSTE LT(0, C(KC_C))
#define ENT_TAB LT(0, KC_TAB)

#define MEH_F11 MEH_T(KC_F11)
#define HYPR_F12 HYPR_T(KC_F12)
#define SFT_F1 TD(TD_SFT_F1)
#define CTL_F2 TD(TD_CTL_F2)
#define ALT_F3 TD(TD_ALT_F3)
#define GUI_F4 TD(TD_GUI_F4)
#define INS_F5 TD(TD_INS_F5)
#define PAUS_F6 TD(TD_PAUS_F6)
#define SCRL_F7 LT(0, KC_F7)
#define PSCR_F8 LT(0, KC_F8)

/*************************************************
 * Keymap / Layers
 *************************************************/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [L_ALPHA] = LAYOUT(
    HYPR_B, MEH_Y, KC_O,    KC_U,    KC_L,     KC_D,   MEH_W, HYPR_V,
    GUI_C,  ALT_I, CTL_E,   SFT_A,   SFT_H,    CTRL_T, ALT_S, GUI_N,
    KC_G,   KC_X,  KC_J,    KC_K,    KC_R,     KC_M,   KC_F,  KC_P,
                   NAV_SYM, NUM_SPC, NUM_BSPC, SYS_SFT
  ),
  [L_NUM] = LAYOUT(
    HYPR_GRV, MEH_EQL,  KC_MINS,  KC_QUOT, KC_9,   KC_0,  MEH_LBRC, HYPR_RBRC,
    GUI_ESC,  ALT_SCLN, CTL_COMM, SFT_DOT, SFT_1,  CTL_2, ALT_3,    GUI_4,
    KC_Z,     KC_Q,     KC_BSLS,  KC_SLSH, KC_5,   KC_6,  KC_7,     KC_8,
                        QK_AREP,  QK_REP,  KC_TAB, KC_ENT
  ),
  [L_SYM] = LAYOUT(
    KC_TILD, KC_PLUS, KC_UNDS,  KC_DQUO, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR,
    KC_ESC,  KC_COLN, KC_LT,    KC_GT,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,
    CAP_Z,   CAP_Q,   KC_PIPE,  KC_QUES, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR,
                      TO_ALPHA, CAP_ENT, KC_Q,    KC_Z
  ),
  [L_NAV] = LAYOUT(
    HYPR_PGUP, MEH_HOME,  WORD_UP,   CLK_END,  KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_U,
    GUI_PGDN,  ALT_LEFT,  CTL_DOWN,  SFT_RGHT, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D,
    XTAB_DEL,  UNDO_PTAB, REDO_NTAB, CPY_PSTE, KC_BTN6, KC_BTN7, KC_BTN8, QK_LOCK,
                          TO_ALPHA,  ENT_TAB,  KC_BTN4, KC_BTN5
  ),
  [L_SYS] = LAYOUT(
    KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_F9,   KC_F10,  MEH_F11, HYPR_F12,
    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, SFT_F1,  CTL_F2,  ALT_F3,  GUI_F4,
    KC_DEL,  KC_VOLD, KC_VOLU, KC_MPLY, INS_F5,  PAUS_F6, SCRL_F7, PSCR_F8,
                      M_CPL2,  M_CPL1,  KC_SYRQ, XXXXXXX
  ),
};

/*************************************************
 * Key Overrides
 *************************************************/

const key_override_t o_mprv = ko_make_basic(MOD_MASK_CTRL, KC_VOLD, KC_MPRV);
const key_override_t o_mnxt = ko_make_basic(MOD_MASK_CTRL, KC_VOLU, KC_MNXT);
const key_override_t o_mute = ko_make_basic(MOD_MASK_CTRL, KC_MPLY, KC_MUTE);
const key_override_t o_brid = ko_make_basic(MOD_MASK_ALT, KC_VOLD, KC_BRID);
const key_override_t o_briu = ko_make_basic(MOD_MASK_ALT, KC_VOLU, KC_BRIU);
const key_override_t o_msel = ko_make_basic(MOD_MASK_ALT, KC_MPLY, KC_MSEL);

const key_override_t **key_overrides = (const key_override_t *[]){
  &o_mprv,
  &o_mnxt,
  &o_mute,
  &o_brid,
  &o_briu,
  &o_msel,
  NULL
};

/*************************************************
 * Combos
 *************************************************/

const uint16_t PROGMEM c_dm_rec1[] = {KC_O, KC_U, COMBO_END};
const uint16_t PROGMEM c_dm_ply1[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM c_dm_rec2[] = {KC_L, KC_D, COMBO_END};
const uint16_t PROGMEM c_dm_ply2[] = {KC_R, KC_M, COMBO_END};
const uint16_t PROGMEM c_lock_nav[] = {KC_L, KC_D, MEH_W, COMBO_END};
const uint16_t PROGMEM c_esc[] = {MEH_HOME, WORD_UP, COMBO_END};
const uint16_t PROGMEM c_reopen_tab[] = {UNDO_PTAB, REDO_NTAB, COMBO_END};
const uint16_t PROGMEM c_middle_click[] = {KC_MS_U, KC_BTN2, COMBO_END};

combo_t key_combos[] = {
  [C_DM_REC1] = COMBO(c_dm_rec1, DM_REC1),
  [C_DM_PLY1] = COMBO(c_dm_ply1, DM_PLY1),
  [C_DM_REC2] = COMBO(c_dm_rec2, DM_REC2),
  [C_DM_PLY2] = COMBO(c_dm_ply2, DM_PLY2),
  [C_LOCK_NAV] = COMBO(c_lock_nav, TO(L_NAV)),
  [C_ESC] = COMBO(c_esc, KC_ESC),
  [C_REOPEN_TAB] = COMBO(c_reopen_tab, RCS(KC_T)),
  [C_MIDDLE_CLICK] = COMBO(c_middle_click, KC_BTN3),
};

/*************************************************
 * Alt Repeat Definitions
 *************************************************/

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
  bool shift_held = (mods & MOD_MASK_SHIFT);
  bool ctrl_held = (mods & MOD_MASK_CTRL);

  switch (keycode) {
    case KC_TAB:
      if (shift_held) return KC_TAB;
      return S(KC_TAB);

    case KC_QUES:
    case KC_EXLM:
    case KC_COLN:
    case ALT_SCLN:
      return M_SPC_CAP;

    case KC_MINS:
    case MEH_EQL:
      return KC_GT;

    case NUM_SPC:
    case NUM_BSPC:
    case KC_ENT:
    case KC_DQUO:
      return M_THE;

    case SFT_DOT: return M_UPDIR;
    case KC_LPRN: return KC_RPRN;
    case ALT_I: return M_NG;
    case CTL_COMM: return M_COMM_BUT;
    case KC_QUOT: return M_QUOT_LL;
    case KC_HASH: return M_INCLUDE;
    case ALT_3: if (shift_held) return M_INCLUDE;
    case MEH_Y: if (ctrl_held) return C(KC_Z);
    case KC_Z: if (ctrl_held) return C(KC_Y);
  }

  return KC_TRNS;
}

/*************************************************
 * Completion / Additional "Alternate" Keys
 *************************************************/

bool remember_last_key_user(
  uint16_t keycode,
  keyrecord_t* record,
  uint8_t* remembered_mods
  ) {
  switch (keycode) {
    case SYS_SFT:
    case M_CPL1:
    case M_CPL2:
      return false;
  }

  return true;
}

static void handle_cpl1(uint16_t keycode, uint8_t mods) {
  switch (keycode) {
    case SFT_DOT: SEND_STRING("com"); break;
    case KC_QUOT: SEND_STRING("re"); break;
    case CTL_COMM: SEND_STRING(" however"); break;

    case NUM_SPC:
    case NUM_BSPC:
    case KC_ENT:
    case KC_DQUO:
      if (get_oneshot_mods() & MOD_MASK_SHIFT) {
        del_oneshot_mods(MOD_MASK_SHIFT);
        SEND_STRING("And");
      } else {
        SEND_STRING("and");
      }
      break;
  }
}

static void handle_cpl2(uint16_t keycode, uint8_t mods) {
  switch (keycode) {
    case SFT_DOT: SEND_STRING("org"); break;
    case KC_QUOT: SEND_STRING("ve"); break;
    case CTL_COMM: SEND_STRING(" since"); break;

    case NUM_SPC:
    case NUM_BSPC:
    case KC_ENT:
    case KC_DQUO:
      if (get_oneshot_mods() & MOD_MASK_SHIFT) {
        del_oneshot_mods(MOD_MASK_SHIFT);
        SEND_STRING("For");
      } else {
        SEND_STRING("for");
      }
      break;
  }
}

/*************************************************
 * Macros & Mod-Tap Overrides
 *************************************************/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case WORD_UP:
      if (!record->tap.count) {
        if (record->event.pressed) {
          SEND_STRING(SS_TAP(X_BTN1) SS_DELAY(50));
          register_code(KC_BTN1);
        } else {
          unregister_code(KC_BTN1);
        }
        return false;
      }
      return true;

    case CLK_END:
      if (!record->tap.count) {
        if (record->event.pressed) {
          register_code(KC_BTN1);
        } else {
          unregister_code(KC_BTN1);
        }
        return false;
      }
      return true;

    case XTAB_DEL:
      if (!record->tap.count && record->event.pressed) {
        tap_code16(C(KC_W));
        return false;
      }
      return true;

    case UNDO_PTAB:
      if (record->event.pressed) {
        if (record->tap.count) {
          tap_code16(RCS(KC_TAB));
        } else {
          tap_code16(C(KC_Z));
        }
      }
      return false;

    case REDO_NTAB:
      if (record->event.pressed) {
        if (record->tap.count) {
          tap_code16(C(KC_TAB));
        } else {
          tap_code16(C(KC_Y));
        }
      }
      return false;

    case CPY_PSTE:
      if (record->event.pressed) {
        if (record->tap.count) {
          tap_code16(C(KC_C));
        } else {
          tap_code16(C(KC_V));
        }
      }
      return false;

    case ENT_TAB:
      if (!record->tap.count && record->event.pressed) {
        tap_code(KC_ENT);
        return false;
      }
      return true;

    case SCRL_F7:
      if (!record->tap.count && record->event.pressed) {
        tap_code(KC_SCRL);
        return false;
      }
      return true;

    case PSCR_F8:
      if (!record->tap.count && record->event.pressed) {
        tap_code(KC_PSCR);
        return false;
      }
      return true;

    case M_CPL1:
      if (record->event.pressed) {
        handle_cpl1(get_last_keycode(), get_last_mods());
      }
      return false;

    case M_CPL2:
      if (record->event.pressed) {
        handle_cpl2(get_last_keycode(), get_last_mods());
      }
      return false;

    case M_INCLUDE:
      if (record->event.pressed) {
        SEND_STRING("include");
      }
      return false;

    case M_THE:
      if (record->event.pressed) {
        SEND_STRING("the");
      }
      return false;

    case M_UPDIR:
      if (record->event.pressed) {
        SEND_STRING(/*.*/"./");
      }
      return false;

    case M_NG:
      if (record->event.pressed) {
        SEND_STRING("ng");
      }
      return false;

    case M_COMM_BUT:
      if (record->event.pressed) {
        SEND_STRING(" but");
      }
      return false;

    case M_QUOT_LL:
      if (record->event.pressed) {
        SEND_STRING("ll");
      }
      return false;

    case M_SPC_CAP:
      if (record->event.pressed) {
        send_char(' ');
        add_oneshot_mods(MOD_BIT(KC_LSFT));
      }
      return false;
  }

  return true;
}

/*************************************************
 * Tap Dance
 *************************************************/

typedef enum {
  TD_NONE,
  TD_UNKNOWN,
  TD_SINGLE_TAP,
  TD_SINGLE_HOLD,
  TD_DOUBLE_TAP,
} td_state_t;

typedef struct {
  bool is_press_action;
  td_state_t state;
} td_tap_t;

td_state_t cur_dance(tap_dance_state_t *state) {
  if (state->count == 1) {
    if (state->pressed) return TD_SINGLE_HOLD;
    return TD_SINGLE_TAP;
  } else if (state->count == 2) {
    return TD_DOUBLE_TAP;
  }
  return TD_UNKNOWN;
}

// System-Shift

static td_tap_t sys_sft_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void sys_sft_finished(tap_dance_state_t *state, void *user_data) {
  sys_sft_tap_state.state = cur_dance(state);
  switch (sys_sft_tap_state.state) {
    case TD_SINGLE_TAP:
      if (get_oneshot_mods() & MOD_BIT(KC_LSFT)) {
        del_oneshot_mods(MOD_BIT(KC_LSFT));
      } else {
        add_oneshot_mods(MOD_BIT(KC_LSFT));
      }
      break;
    case TD_SINGLE_HOLD:
      layer_on(L_SYS);
      break;
    case TD_DOUBLE_TAP:
      SEND_STRING(". ");
      add_oneshot_mods(MOD_BIT(KC_LSFT));
      break;
    default:
      break;
  }
}

void sys_sft_reset(tap_dance_state_t *state, void *user_data) {
  if (sys_sft_tap_state.state == TD_SINGLE_HOLD) {
    layer_off(L_SYS);
  }
  sys_sft_tap_state.state = TD_NONE;
}

// Navigation-Symbol

static td_tap_t nav_sym_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void nav_sym_finished(tap_dance_state_t *state, void *user_data) {
  nav_sym_tap_state.state = cur_dance(state);
  switch (nav_sym_tap_state.state) {
    case TD_SINGLE_TAP:
      set_oneshot_layer(L_SYM, ONESHOT_START);
      break;
    case TD_SINGLE_HOLD:
      layer_on(L_NAV);
      break;
    default:
      break;
  }
}

void nav_sym_reset(tap_dance_state_t *state, void *user_data) {
  switch (nav_sym_tap_state.state) {
    case TD_SINGLE_TAP:
      clear_oneshot_layer_state(ONESHOT_PRESSED);
      break;
    case TD_SINGLE_HOLD:
      layer_off(L_NAV);
      break;
    default:
      break;
  }
  nav_sym_tap_state.state = TD_NONE;
}

// Shift-F1

static td_tap_t sft_f1_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void sft_f1_finished(tap_dance_state_t *state, void *user_data) {
  sft_f1_tap_state.state = cur_dance(state);
  switch (sft_f1_tap_state.state) {
    case TD_SINGLE_TAP:
      tap_code(KC_F1);
      break;
    case TD_SINGLE_HOLD:
      register_code(KC_LSFT);
      break;
    case TD_DOUBLE_TAP:
      tap_code16(LCA(KC_F1));
      break;
    default:
      break;
  }
}

void sft_f1_reset(tap_dance_state_t *state, void *user_data) {
  switch (sft_f1_tap_state.state) {
    case TD_SINGLE_HOLD:
      unregister_code(KC_LSFT);
      break;
    default:
      break;
  }
  sft_f1_tap_state.state = TD_NONE;
}

// Ctrl-F2

static td_tap_t ctl_f2_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void ctl_f2_finished(tap_dance_state_t *state, void *user_data) {
  ctl_f2_tap_state.state = cur_dance(state);
  switch (ctl_f2_tap_state.state) {
    case TD_SINGLE_TAP:
      tap_code(KC_F2);
      break;
    case TD_SINGLE_HOLD:
      register_code(KC_LCTL);
      break;
    case TD_DOUBLE_TAP:
      tap_code16(LCA(KC_F2));
      break;
    default:
      break;
  }
}

void ctl_f2_reset(tap_dance_state_t *state, void *user_data) {
  switch (ctl_f2_tap_state.state) {
    case TD_SINGLE_HOLD:
      unregister_code(KC_LCTL);
      break;
    default:
      break;
  }
  ctl_f2_tap_state.state = TD_NONE;
}

// Alt-F3

static td_tap_t alt_f3_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void alt_f3_finished(tap_dance_state_t *state, void *user_data) {
  alt_f3_tap_state.state = cur_dance(state);
  switch (alt_f3_tap_state.state) {
    case TD_SINGLE_TAP:
      tap_code(KC_F3);
      break;
    case TD_SINGLE_HOLD:
      register_code(KC_LALT);
      break;
    case TD_DOUBLE_TAP:
      tap_code16(LCA(KC_F3));
      break;
    default:
      break;
  }
}

void alt_f3_reset(tap_dance_state_t *state, void *user_data) {
  switch (alt_f3_tap_state.state) {
    case TD_SINGLE_HOLD:
      unregister_code(KC_LALT);
      break;
    default:
      break;
  }
  alt_f3_tap_state.state = TD_NONE;
}

// Super-F4

static td_tap_t gui_f4_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void gui_f4_finished(tap_dance_state_t *state, void *user_data) {
  gui_f4_tap_state.state = cur_dance(state);
  switch (gui_f4_tap_state.state) {
    case TD_SINGLE_TAP:
      tap_code(KC_F4);
      break;
    case TD_SINGLE_HOLD:
      register_code(KC_LGUI);
      break;
    case TD_DOUBLE_TAP:
      tap_code16(LCA(KC_F4));
      break;
    default:
      break;
  }
}

void gui_f4_reset(tap_dance_state_t *state, void *user_data) {
  switch (gui_f4_tap_state.state) {
    case TD_SINGLE_HOLD:
      unregister_code(KC_LGUI);
      break;
    default:
      break;
  }
  gui_f4_tap_state.state = TD_NONE;
}

// Insert-F5

static td_tap_t ins_f5_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void ins_f5_finished(tap_dance_state_t *state, void *user_data) {
  ins_f5_tap_state.state = cur_dance(state);
  switch (ins_f5_tap_state.state) {
    case TD_SINGLE_TAP:
      tap_code(KC_F5);
      break;
    case TD_SINGLE_HOLD:
      tap_code(KC_INS);
      break;
    case TD_DOUBLE_TAP:
      tap_code16(LCA(KC_F5));
      break;
    default:
      break;
  }
}

void ins_f5_reset(tap_dance_state_t *state, void *user_data) {
  ins_f5_tap_state.state = TD_NONE;
}

// Pause-F6

static td_tap_t paus_f6_tap_state = {
  .is_press_action = true,
  .state = TD_NONE
};

void paus_f6_finished(tap_dance_state_t *state, void *user_data) {
  paus_f6_tap_state.state = cur_dance(state);
  switch (paus_f6_tap_state.state) {
    case TD_SINGLE_TAP:
      tap_code(KC_F6);
      break;
    case TD_SINGLE_HOLD:
      tap_code(KC_PAUS);
      break;
    case TD_DOUBLE_TAP:
      tap_code16(LCA(KC_F6));
      break;
    default:
      break;
  }
}

void paus_f6_reset(tap_dance_state_t *state, void *user_data) {
  paus_f6_tap_state.state = TD_NONE;
}

// That's the last tap dance!

tap_dance_action_t tap_dance_actions[] = {
  [TD_SYS_SFT] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, sys_sft_finished, sys_sft_reset),
  [TD_NAV_SYM] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, nav_sym_finished, nav_sym_reset),
  [TD_SFT_F1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, sft_f1_finished, sft_f1_reset),
  [TD_CTL_F2] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ctl_f2_finished, ctl_f2_reset),
  [TD_ALT_F3] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, alt_f3_finished, alt_f3_reset),
  [TD_GUI_F4] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, gui_f4_finished, gui_f4_reset),
  [TD_INS_F5] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, ins_f5_finished, ins_f5_reset),
  [TD_PAUS_F6] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, paus_f6_finished, paus_f6_reset),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QK_TAP_DANCE ... QK_TAP_DANCE_MAX:
      return 275;
    default:
      return TAPPING_TERM;
  }
}
