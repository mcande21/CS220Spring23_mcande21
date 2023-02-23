#include "dow.h"

/*
 *  y0 = y - (14 - m)/12
 *  x = y0 + y0/4 - y0/100 + y0/400
 *  m0 = m + 12 * ((14 - m) / 12) - 2
 *  d0 = (d + x + (31 * m0) / 12) % 7
 *
 *  On which day did Feb 14, 2000 fall?
 *
 *  y0 = 2000 - 1 = 1999
 *  x = 1999 + 1999 / 4 - 1999 / 100 + 1999 / 400 = 2483
 *  m0 = 2 + 12(1) - 2 = 12
 *  d0 = (14 + 2483 + (31*12)/12) % 7 = 2528 % 7 = 1 (Monday)
 */

.cpu cortex-a72
.global dow
.text

dow:
// intitializing variables
    push {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r7, #14
    mov r8, #12
    mov r9, #400
    mov r10, #100
//y0
    sub r4, r7, r0
    sdiv r4, r4, r8
    sub r4, r2, r4
// y0 = r4, 2022
//x
    mov r8, #4
    sdiv r5, r4, r9
    sdiv r6, r4, r10
    sdiv r7, r4, r8
    add r5, r5, r6
    add r7, r4, r7
    sub r5, r7, r5
// x = r5, 2502
//m0
    mov r8, #2
    mov r9, #12
    mov r10, #14
    sub r6, r10, r0
    sdiv r6, r6, r9
    mul r6, r6, r9
    sub r6, r6, r8
    add r6, r0, r6
// m0 = r6, 12
// d0
    mov r8, #7
    mov r9, #12
    mov r10, #31
    mul r7, r6, r10
    sdiv r7, r7, r9
    add r7, r7, r5
    add r7, r7, r1
    sdiv r10, r7, r8
    mul r9, r10, r8
    sub r7, r7, r9
// d0 = r7
    mov r0, r7
    pop {r4, r5, r6, r7, r8, r9, r10, lr}
    bx lr
