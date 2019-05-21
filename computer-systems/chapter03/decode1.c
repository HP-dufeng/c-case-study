/*
 * 已知函数原型：
 * void decode1(long *xp, long *yp, long *zp);
 * 的函数编译成的汇编代码：
 * decode1:
 *      movq    (%rdi), %r8
 *      movq    (%rsi), %rcx
 *      movq    (%rdx), %rax
 *      movq    %r8, (%rsi)
 *      movq    %rcx, (%rdx)
 *      movq    %rax, (%rdi)
 *      ret



*/


void decode1(long *xp, long *yp, long *zp) {
    long x = *xp;
    long y = *yp;
    long z = *zp;

    *yp = x;
    *zp = y;
    *xp = z;
}