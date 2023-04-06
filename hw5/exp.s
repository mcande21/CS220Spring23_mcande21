// This is the assembly code for myexp
.global myexp
.fpu vfp
.cpu cortex-a53

.align 3
icompare: .double 0.0
kcompare: .double 13.0
addsubconst: .double 1.0
K: .double 1.0
Total: .double 1.0
pow: .double 0.0
fact: .double 0.0
i: .double 0.0
powandfact: .double 0.0

.text
.align 2

myexp:
    vpush { d4, d5, d6, d7, d8, d9, d10, d11, d12, d13 }
    ldr r0, =icompare
    vldr.f64 d4, [r0] //constant for i to compare
    ldr r0, =kcompare
    vldr.f64 d5, [r0] //constant to compare to k
    ldr r0, =addsubconst
    vldr.f64 d6, [r0] //constant to add and subtract by 1
    ldr r0, =K
    vldr.f64 d7, [r0] // K
    ldr r0, =Total
    vldr.f64 d8, [r0] // Total
    vmov.f64 d9, d0 // save x
    ldr r0, =pow
    vldr.f64 d10, [r0] // POW
    ldr r0, =fact
    vldr.f64 d11, [r0] // FACT
    ldr r0, =i
    vldr.f64 d12, [r0] // I - k
    ldr r0, =powandfact
    vldr.f64 d13, [r0] //POW/FACT
    b while

while:
    vcmp.f64 d5, d7
    vmrs APSR_nzvc, FPSCR // some bullshitery
    blt endwhile
    vmov.f64 d10, d0
    vmov.f64 d11, d7
    vmov.f64 d12, d7
    vsub.f64 d12, d12, d6
    b compute

compute:
    vcmp.f64 d4, d12
    vmrs APSR_nzvc, FPSCR // some bullshitery
    beq addition
    vmul.f64 d10, d10, d9
    vmul.f64 d11, d11, d12
    vsub.f64 d12, d12, d6
    b compute

addition:
    vdiv.f64 d13, d10, d11
    vadd.f64 d8, d8, d13
    vadd.f64 d7, d7, d6
    b while

endwhile:
    vmov.f64 d0, d8
    vpop { d4, d5, d6, d7, d8, d9, d10, d11, d12, d13 }
    bx lr
