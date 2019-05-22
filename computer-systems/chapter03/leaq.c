/*
 * 编译成汇编代码
 * scale:
	leaq	(%rdi,%rsi,4), %rax       // x + 4*y
	leaq	(%rdx,%rdx,2), %rcx       // z + 2*z = 3*z
	leaq	0(,%rcx,4), %rdx          // 3*z * 4 = 12*z
	addq	%rdx, %rax                // x + 4*y + 12*z
	ret
 
*/
long scale(long x, long y, long z) {
    long t = x + 4*y + 12*z;
    return t;
}