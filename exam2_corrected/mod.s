//Mod function writtin in asssembly

.global mod
.cpu cortex-a72 //application processor

/*
 *  r  = x % y
 *  q = x / y
 *  r = x - qy
*/

.text

mod:
    sdiv r2, r0, r1
    mul r2, r2, r1
    sub r0, r0, r2
    bx lr

