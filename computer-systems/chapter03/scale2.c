/*
 * 编译生成汇编代码
 * scale2:
	leaq	(%rdi,%rdi,4), %rax         // 5x
	leaq	(%rax,%rsi,2), %rax         // 5x + 2y
	leaq	(%rax,%rdx,8), %rax         // 5x + 2y + 8z
*/

long scale2(long x, long y, long z) {
    long t = 5*x + 2*y + 8*z;
    return t;
}