	.file	"scale2.c"
	.text
	.globl	scale2
	.type	scale2, @function
scale2:
.LFB0:
	.cfi_startproc
	leaq	(%rdi,%rdi,4), %rax
	leaq	(%rax,%rsi,2), %rax
	leaq	(%rax,%rdx,8), %rax
	ret
	.cfi_endproc
.LFE0:
	.size	scale2, .-scale2
	.ident	"GCC: (Ubuntu 8.3.0-6ubuntu1) 8.3.0"
	.section	.note.GNU-stack,"",@progbits
