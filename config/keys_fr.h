// Copyright 2025 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/ext_power.h>
#include <dt-bindings/zmk/rgb.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

// Aliases
#define FR_SUP2 GRAVE  // ²
#define FR_AMPR N1    // &
#define FR_EACU N2    // é
#define FR_DQUO N3    // "
#define FR_QUOT N4    // '
#define FR_LPRN N5    // (
#define FR_MINS N6    // -
#define FR_EGRV N7    // è
#define FR_UNDS N8    // _
#define FR_CCED N9    // ç
#define FR_AGRV N0    // à
#define FR_RPRN MINUS // )
#define FR_EQL  EQUAL  // =
#define FR_A    Q    // A
#define FR_Z    W    // Z
#define FR_E    E    // E
#define FR_R    R    // R
#define FR_T    T    // T
#define FR_Y    Y    // Y
#define FR_U    U    // U
#define FR_I    I    // I
#define FR_O    O    // O
#define FR_P    P    // P
#define FR_CIRC LBKT // ^ (dead)
#define FR_DLR  RBKT // $
#define FR_Q    A    // Q
#define FR_S    S    // S
#define FR_D    D    // D
#define FR_F    F    // F
#define FR_G    G    // G
#define FR_H    H    // H
#define FR_J    J    // J
#define FR_K    K    // K
#define FR_L    L    // L
#define FR_M    SEMI // M
#define FR_UGRV SQT // ù
#define FR_ASTR NUHS // *
#define FR_LABK NUBS // <
#define FR_W    Z    // W
#define FR_X    X    // X
#define FR_C    C    // C
#define FR_V    V    // V
#define FR_B    B    // B
#define FR_N    N    // N
#define FR_COMM M    // ,
#define FR_SCLN COMMA // ;
#define FR_COLN DOT  // :
#define FR_EXLM  FSLH // !
#define FR_1    LS(FR_AMPR) // 1
#define FR_2    LS(FR_EACU) // 2
#define FR_3    LS(FR_DQUO) // 3
#define FR_4    LS(FR_QUOT) // 4
#define FR_5    LS(FR_LPRN) // 5
#define FR_6    LS(FR_MINS) // 6
#define FR_7    LS(FR_EGRV) // 7
#define FR_8    LS(FR_UNDS) // 8
#define FR_9    LS(FR_CCED) // 9
#define FR_0    LS(FR_AGRV) // 0
#define FR_DEG  LS(FR_RPRN) // °
#define FR_PLUS LS(FR_EQL)  // +
#define FR_DIAE LS(FR_CIRC) // ¨ (dead)
#define FR_PND  LS(FR_DLR)  // £
#define FR_PERC LS(FR_UGRV) // %
#define FR_MICR LS(FR_ASTR) // µ
#define FR_RABK LS(FR_LABK) // >
#define FR_QUES LS(FR_COMM) // ?
#define FR_DOT  LS(FR_SCLN) // .
#define FR_SLSH LS(FR_COLN) // /
#define FR_SECT LS(FR_EXLM) // §
#define FR_TILD RA(FR_EACU) // ~ (dead)
#define FR_HASH RA(FR_DQUO) // #
#define FR_LCBR RA(FR_QUOT) // {
#define FR_LBRC RA(FR_LPRN) // [
#define FR_PIPE RA(FR_MINS) // |
#define FR_GRV  RA(FR_EGRV) // ` (dead)
#define FR_BSLS RA(FR_UNDS) // (backslash)
#define FR_AT   RA(FR_AGRV) // @
#define FR_RBRC RA(FR_RPRN) // ]
#define FR_RCBR RA(FR_EQL)  // }
#define FR_EURO RA(KC_E)    // €
#define FR_CURR RA(FR_DLR)  // ¤
