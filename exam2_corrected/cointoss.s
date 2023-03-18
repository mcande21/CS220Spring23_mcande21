// .s file for cointoss
// This funtion will randomly generate a number.
// If the number is even it will add to the counter representing heads.
// If the number is odd it will continue.

.global cointoss
.cpu cortex-a72
.text

cointoss:
    push {r4, r5, r6, r7, r8, lr}
    mov r4, r0
    mov r5, #0
    mov r6, #2
    mov r7, #0
    mov r8, #1

while:
    cmp r4, #0
    beq endwhile
    bl rand
    mov r1, r6
    bl mod
    cmp r0, #0
    beq mod2
    sub r4, r4, r8
    b while

mod2:
    add r5, r5, r8
    sub r4, r4, r8
    b while

endwhile:
    mov r0, r5
    pop {r4, r5, r6, r7, r8, pc}
