/*
 * 编码生成汇编代码
 remdiv:
	movq	%rdi, %rax
	movq	%rdx, %rdi
	cqto
	idivq	%rsi
	movq	%rax, (%rdi)
	movq	%rdx, (%rcx)
	ret
*/
void remdiv(long x, long y, long *qp, long *rp) {
    long q = x/y;
    long r = x%y;
    *qp = q;
    *rp = r;
}