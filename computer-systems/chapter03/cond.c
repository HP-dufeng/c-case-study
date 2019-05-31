/*
 * 编码生成汇编代码
 cond:
	testq	%rsi, %rsi
	je	    .L1
	cmpq	%rdi, (%rsi)
	jge	    .L1
	movq	%rdi, (%rsi)
.L1:
	ret
*/
void cond(long a, long *p)
{
    if(p && a > *p)
        *p = a;
}