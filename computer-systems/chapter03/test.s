	.file	"test.c"
	.text
	.globl	test
	.type	test, @function
test:
.LFB0:
	.cfi_startproc
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
	.cfi_endproc
.LFE0:
	.size	test, .-test
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
