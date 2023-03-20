	.file	"101-print_comb4.c"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$48, -4(%rbp)
	jmp	.L2
.L11:
	movl	-4(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -12(%rbp)
	jmp	.L3
.L10:
	movl	-12(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -8(%rbp)
	jmp	.L4
.L9:
	movl	-4(%rbp), %eax
	cmpl	-12(%rbp), %eax
	je	.L13
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	je	.L13
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	movl	-8(%rbp), %eax
	movl	%eax, %edi
	call	putchar@PLT
	cmpl	$55, -4(%rbp)
	je	.L14
	movl	$44, %edi
	call	putchar@PLT
	movl	$32, %edi
	call	putchar@PLT
	jmp	.L8
.L13:
	nop
	jmp	.L8
.L14:
	nop
.L8:
	addl	$1, -8(%rbp)
.L4:
	cmpl	$57, -8(%rbp)
	jle	.L9
	addl	$1, -12(%rbp)
.L3:
	cmpl	$56, -12(%rbp)
	jle	.L10
	addl	$1, -4(%rbp)
.L2:
	cmpl	$55, -4(%rbp)
	jle	.L11
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
