/*
 * 编码生成汇编代码
 test:
	leaq	(%rdi,%rsi), %rax
	addq	%rdx, %rax
	cmpq	$-3, %rdi
	jge	.L2
	cmpq	$1, %rsi
	jle	.L5
	movq	%rsi, %rax
	imulq	%rdx, %rax
	ret
.L5:
	movq	%rdi, %rax
	imulq	%rsi, %rax
	ret
.L2:
	cmpq	$2, %rdi
	jle	.L1
	leaq	(%rdi,%rdi), %rax
.L1:
	ret
*/
long test(long x, long y, long z)
{
    long val = x + y + z;
    if (x < -3) {
        if(y < 2) {
            val = x * y;
        }
        else
        {
            val = y * z;
        }
    }
    else if (x > 2)
    {
        val = x * 2;
    }

    return val;
}