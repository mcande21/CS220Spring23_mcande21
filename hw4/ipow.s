.global ipow
.cpu cortex-a72
.text

ipow:
    push {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r4, #2
    mov r5, #1
    mov r9, r0
    cmp r1, #0
    beq base
    sdiv r10, r1, r4
    mul r6, r10, r4
    sub r6, r1, r6
    cmp r6, #0
    beq mod2
    sub r1, r1, r5
    bl ipow
    mul r0, r0, r9
    pop {r4, r5, r6, r7, r8, r9, r10, pc}

mod2:
    sdiv r1, r1, r4
    bl ipow
    mul r0, r0, r0
    pop {r4, r5, r6, r7, r8, r9, r10, pc}

base:
    mov r0, #1
    pop {r4, r5, r6, r7, r8, r9, r10, pc}
