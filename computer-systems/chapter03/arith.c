/*
 * 编码生成汇编代码
 * x in %rdi, y in %rsi, z in %rdx
 arith:
	xorq	%rsi, %rdi                  // t1 = x ^ y
	leaq	(%rdx,%rdx,2), %rdx         // 3*z
	movq	%rdx, %rax                  
	salq	$4, %rax                    // t2 = 16 * (3*z) = 48*z    // 用位移的方式实现乘法
	andl	$252645135, %edi            // t3 = t1 & 0x0F0F0F0F
	subq	%rdi, %rax                  // Return t2 - t3
	ret

*/
long arith(long x, long y, long z) {
    long t1 = x ^ y;
    long t2 = z * 48;
    long t3 = t1 & 0x0F0F0F0F;
    long t4 = t2 - t3;
    return t4;
}