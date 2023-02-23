// function sum3or5
// this function returns the sum of integers less than N
// that are multiples of 3 or 5
/* #include <stdio.h>
   int sum3or5(int n){
        int counter = 0;
        for (int i = 0; i<n ; i++){
                if (i%3 == 0 || i%5 == 0){
                        counter += i;
                }
        }
    return counter;

}*/

.cpu cortex-a72
.global sum3or5
.text

sum3or5:
    push {r4, r5, r6, r7, r8, r9, lr}
    mov r4, #0
    mov r5, #0
    mov r6, #3
    mov r7, #1
    mov r8, #0
    mov r9, #5
while:
    cmp r0, #0
    beq endwhile
    sdiv r5, r0, r6
    mul r8, r5, r6
    sub r5, r0, r8
    cmp r5, #0
    beq mod3or5
    sdiv r5, r0, r9
    mul r8, r5, r9
    sub r5, r0, r8
    cmp r5, #0
    beq mod3or5
    sub r0, r0, r7
    b while
mod3or5:
    add r4, r4, r0
    sub r0, r0, r7
    b while
endwhile:
    mov r0, r4
    pop {r4, r5, r6, r7,r8, r9, lr}
    bx lr

