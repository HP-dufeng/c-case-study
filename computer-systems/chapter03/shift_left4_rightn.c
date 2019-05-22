/*
 * 编译生成汇编代码
 * shift_left4_rightn:
	movq	%rdi, %rax      // Get x
	salq	$4, %rax        // x <<= 4
	movl	%esi, %ecx      // Get n (4 bytes)
	sarq	%cl, %rax       // x >>= n
	ret

*/
long shift_left4_rightn(long x, long n) {
    x <<= 4;
    x >>= n;
    return x;
}