/*for (int i = 0; i <= n; i++) {
*       int idx = n%10;
*       freq[idx]++;
*       n /= 10;
*   }
*/

.global digit_frequency
.cpu cortex-a72
.text

digit_frequency:
    push {r4-r9, lr}
    mov r4, #10
    mov r5, #0
    mov r6, #1
    mov r7, #4
    mov r8, #0
    mov r9, r1

while_freq:
    cmp r8, #10
    beq while
    str r5,[r9]
    add r8, r8, r6
    add r9, r9, r7
    b while_freq

while:
    mov r9, #0
    cmp r0, #0
    beq endwhile
    sdiv r5, r0, r4
    mul r5, r5, r4
    sub r5, r0, r5
    mul r5, r5, r7
    add r3, r1, r5
    ldr r9, [r3]
    add r9, r9, r6
    str r9, [r3]
    sdiv r0, r0, r4
    b while

endwhile:
    pop {r4-r9, pc}
