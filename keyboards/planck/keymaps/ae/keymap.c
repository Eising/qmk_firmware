#include QMK_KEYBOARD_H

/*
 * This file was originaly generated from json, but has been cleaned up.
 * It's based on a MIT layout, but has a few tweaks for some corner cases.
 * Written by Allan Eising <allan@eising.dk>
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * +----------+-------+-----+-----+-------+-------+---+-------+------+------+----+------------+
 * | Tab      | Q     | W   | E   | R     | T     | Y | U     | I    | O    | P  | BSP        |
 * +----------+-------+-----+-----+-------+-------+---+-------+------+------+----+------------+
 * | Esc/Ctrl | A     | S   | D   | F     | G     | H | J     | K    | L    | ;  | '          |
 * +----------+-------+-----+-----+-------+-------+---+-------+------+------+----+------------+
 * | Shift    | Z     | X   | C   | V     | B     | N | M     | ,    | .    | /  | Enter      |
 * +----------+-------+-----+-----+-------+-------+---+-------+------+------+----+------------+
 * | Ctrl     | MO(4) | Alt | GUI | MO(1) |   SPACE   | MO(2) |Ralt/ | Down | Up |   Layer    |
 * |          |       |     |     |       |           |       | Left |      |    |  4/Right   |
 * +----------+-------+-----+-----+-------+-----------+-------+------+------+----+------------+
 */


 	[0] = LAYOUT_planck_mit(
                            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                            LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
                            KC_LCTL, MO(4), KC_LALT, KC_LGUI, MO(1), KC_SPC, MO(2), RALT_T(KC_LEFT), KC_DOWN, KC_UP, LT(4, KC_RGHT)
                            ),
/*
 * +------+------+------+------+------+-------+-------+------+-------+-------+------+--------+
 * | ~    | !    | @    | #    | $    | %     | ^     | &    | *     | (     | )    | TRNS   |
 * +------+------+------+------+------+-------+-------+------+-------+-------+------+--------+
 * | TRNS | F1   | F2   | F3   | F4   | F5    | F6    | _    | +     | {     | }    | PIPE   |
 * +------+------+------+------+------+-------+-------+------+-------+-------+------+--------+
 * | TRNS | F7   | F8   | F9   | F10  | F11   | F12   | PIPE | ~     | HOME  | END  | TRNS   |
 * +------+------+------+------+------+-------+-------+------+-------+-------+------+--------+
 * | TRNS | TRNS | TRNS | TRNS | TRNS |     SPACE     |MO(3) | NEXT  | VOL - |VOL + |PLAY    |
 * +------+------+------+------+------+---------------+------+-------+-------+------+--------+
 */


	[1] = LAYOUT_planck_mit(
                            KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
                            KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
                            KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_PIPE, KC_TILD, KC_HOME, KC_END, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
                            ),
/*
 * +------+------+------+------+------+-------+-------+------+-------+-------+------+--------+
 * | ~    | 1    | 2    | 3    | 4    | 5     | 6     | 7    | 8     | 9     | 0    | TRNS   |
 * +------+------+------+------+------+-------+-------+------+-------+-------+------+--------+
 * | TRNS | F1   | F2   | F3   | F4   | F5    | F6    | _    | +     | {     | }    | PIPE   |
 * +------+------+------+------+------+-------+-------+------+-------+-------+------+--------+
 * | TRNS | F7   | F8   | F9   | F10  | F11   | F12   | NUBS | GRV   | PG_DN |PG_UP | TRNS   |
 * +------+------+------+------+------+-------+-------+------+-------+-------+------+--------+
 * | TRNS | TRNS | TRNS | TRNS |MO(3) |     SPACE     | TRNS | NEXT  | VOL - |VOL + |PLAY    |
 * +------+------+------+------+------+---------------+------+-------+-------+------+--------+
 */

	[2] = LAYOUT_planck_mit(
                            KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_TRNS,
                            KC_TRNS, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
                            KC_TRNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_BSLS, KC_GRV, KC_PGUP, KC_PGDN, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(3), KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
                            ),
/*

 * +------+-------+-------+------+------+------+------+------+------+------+------+------+
 * | TRNS | RESET | DEBUG | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |
 * +------+-------+-------+------+------+------+------+------+------+------+------+------+
 * | TRNS | TRNS  | TRNS  | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |
 * +------+-------+-------+------+------+------+------+------+------+------+------+------+
 * | TRNS | TRNS  | TRNS  | TRNS | TRNS | TRNS | TRNS | TRNS |DF(5) |DF(0) | TRNS | TRNS |
 * +------+-------+-------+------+------+------+------+------+------+------+------+------+
 * | TRNS | TRNS  | TRNS  | TRNS |    TRNS     | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |
 * +------+-------+-------+------+-------------+------+------+------+------+------+------+
 */

	[3] = LAYOUT_planck_mit(
                            KC_TRNS, RESET, DEBUG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, DF(5), DF(0), KC_TRNS, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),


/*
 * +------+-------+-------+------+------+------+------+------+------+------+------+------+
 * | TRNS |   (   |   [   |  {   | TRNS | TRNS | TRNS | TRNS |  7   |  8   |  9   | TRNS |
 * +------+-------+-------+------+------+------+------+------+------+------+------+------+
 * | TRNS |   )   |   ]   |  }   | TRNS | TRNS | TRNS | TRNS |  4   |  5   |  6   | TRNS |
 * +------+-------+-------+------+------+------+------+------+------+------+------+------+
 * | TRNS | TRNS  | TRNS  | TRNS | TRNS | TRNS | TRNS | TRNS |  1   |  2   |  3   | TRNS |
 * +------+-------+-------+------+------+------+------+------+------+------+------+------+
 * | TRNS | TRNS  | TRNS  | TRNS |    TRNS     | TRNS | TRNS |  :   |  0   |  .   |Enter |
 * +------+-------+-------+------+-------------+------+------+------+------+------+------+
 */


	[4] = LAYOUT_planck_mit(
                            KC_TRNS, KC_LPRN, KC_LBRC, KC_LCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P7, KC_P8, KC_P9, KC_TRNS,
                            KC_TRNS, KC_RPRN, KC_RBRC, KC_RCBR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P4, KC_P5, KC_P6, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_P1, KC_P2, KC_P3, KC_TRNS,
                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_COLN, KC_P0, KC_PDOT, KC_PENT
                            ),
/*
 * +----------+-------+-----+-----+-------+-------+---+-------+------+------+----+------------+
 * | Tab      | Q     | W   | E   | R     | T     | Y | U     | I    | O    | P  | BSP        |
 * +----------+-------+-----+-----+-------+-------+---+-------+------+------+----+------------+
 * | Esc/Ctrl | A     | S   | D   | F     | G     | H | J     | K    | L    | ;  | '          |
 * +----------+-------+-----+-----+-------+-------+---+-------+------+------+----+------------+
 * | Shift    | Z     | X   | C   | V     | B     | N | M     | ,    | .    | /  | Enter      |
 * +----------+-------+-----+-----+-------+-------+---+-------+------+------+----+------------+
 * | Ctrl     | MO(4) | Alt | GUI | MO(1) |   SPACE   | MO(2) | Left | Down | Up |   Right    |
 * |          |       |     |     |       |           |       |      |      |    |            |
 * +----------+-------+-----+-----+-------+-----------+-------+------+------+----+------------+
 */
 	[5] = LAYOUT_planck_mit(
                            KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                            LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                            KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
                            KC_LCTL, MO(4), KC_LALT, KC_LGUI, MO(1), KC_SPC, MO(2), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT
                            ),

};
