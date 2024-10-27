	.file	"dynamic_binding.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
	.section	.rodata._ZN1A1fEv.str1.1,"aMS",@progbits,1
.LC0:
	.string	"f"
.LC1:
	.string	"%s %d "
.LC2:
	.string	"A::f"
.LC3:
	.string	""
#NO_APP
	.section	.text._ZN1A1fEv,"axG",@progbits,_ZN1A1fEv,comdat
	.align 2
	.p2align 4
	.weak	_ZN1A1fEv
	.type	_ZN1A1fEv, @function
_ZN1A1fEv:
.LFB1988:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$59, %edx
	leaq	.LC0(%rip), %rsi
	xorl	%eax, %eax
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	leaq	.LC2(%rip), %rdi
	xorl	%eax, %eax
	call	printf@PLT
	leaq	.LC3(%rip), %rdi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	puts@PLT
	.cfi_endproc
.LFE1988:
	.size	_ZN1A1fEv, .-_ZN1A1fEv
	.section	.rodata._ZN1B1fEv.str1.1,"aMS",@progbits,1
.LC4:
	.string	"B::f"
	.section	.text._ZN1B1fEv,"axG",@progbits,_ZN1B1fEv,comdat
	.align 2
	.p2align 4
	.weak	_ZN1B1fEv
	.type	_ZN1B1fEv, @function
_ZN1B1fEv:
.LFB1989:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$66, %edx
	leaq	.LC0(%rip), %rsi
	xorl	%eax, %eax
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	leaq	.LC4(%rip), %rdi
	xorl	%eax, %eax
	call	printf@PLT
	leaq	.LC3(%rip), %rdi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	puts@PLT
	.cfi_endproc
.LFE1989:
	.size	_ZN1B1fEv, .-_ZN1B1fEv
	.section	.rodata._ZN1B1gEv.str1.1,"aMS",@progbits,1
.LC5:
	.string	"g"
.LC6:
	.string	"B::g"
	.section	.text._ZN1B1gEv,"axG",@progbits,_ZN1B1gEv,comdat
	.align 2
	.p2align 4
	.weak	_ZN1B1gEv
	.type	_ZN1B1gEv, @function
_ZN1B1gEv:
.LFB1990:
	.cfi_startproc
	endbr64
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$69, %edx
	leaq	.LC5(%rip), %rsi
	xorl	%eax, %eax
	leaq	.LC1(%rip), %rdi
	call	printf@PLT
	leaq	.LC6(%rip), %rdi
	xorl	%eax, %eax
	call	printf@PLT
	leaq	.LC3(%rip), %rdi
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	jmp	puts@PLT
	.cfi_endproc
.LFE1990:
	.size	_ZN1B1gEv, .-_ZN1B1gEv
	.section	.text._ZN1AC2Ev,"axG",@progbits,_ZN1AC5Ev,comdat
	.align 2
	.weak	_ZN1AC2Ev
	.type	_ZN1AC2Ev, @function
_ZN1AC2Ev:
.LFB1994:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	leaq	16+_ZTV1A(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1994:
	.size	_ZN1AC2Ev, .-_ZN1AC2Ev
	.weak	_ZN1AC1Ev
	.set	_ZN1AC1Ev,_ZN1AC2Ev
	.section	.text._ZN1BC2Ev,"axG",@progbits,_ZN1BC5Ev,comdat
	.align 2
	.weak	_ZN1BC2Ev
	.type	_ZN1BC2Ev, @function
_ZN1BC2Ev:
.LFB1996:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	%rax, %rdi
	call	_ZN1AC2Ev
	leaq	16+_ZTV1B(%rip), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1996:
	.size	_ZN1BC2Ev, .-_ZN1BC2Ev
	.weak	_ZN1BC1Ev
	.set	_ZN1BC1Ev,_ZN1BC2Ev
	.section	.text.startup,"ax",@progbits
	.p2align 4
	.globl	main
	.type	main, @function
main:
.LFB1991:
	.cfi_startproc
	endbr64
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	movl	$8, %edi
	call	_Znwm@PLT
	movq	%rax, %rbx
	movq	%rax, %rdi
	call	_ZN1BC1Ev
	movq	%rbx, %rdi
	call	_ZN1B1fEv
	movq	%rbx, %rdi
	xorl	%ecx, %ecx
	leaq	_ZTI1B(%rip), %rdx
	leaq	_ZTI1A(%rip), %rsi
	call	__dynamic_cast@PLT
	movq	%rax, %rdi
	call	_ZN1B1gEv
	xorl	%eax, %eax
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE1991:
	.size	main, .-main
	.weak	_ZTV1B
	.section	.data.rel.ro.local._ZTV1B,"awG",@progbits,_ZTV1B,comdat
	.align 8
	.type	_ZTV1B, @object
	.size	_ZTV1B, 24
_ZTV1B:
	.quad	0
	.quad	_ZTI1B
	.quad	_ZN1B1fEv
	.weak	_ZTV1A
	.section	.data.rel.ro.local._ZTV1A,"awG",@progbits,_ZTV1A,comdat
	.align 8
	.type	_ZTV1A, @object
	.size	_ZTV1A, 24
_ZTV1A:
	.quad	0
	.quad	_ZTI1A
	.quad	_ZN1A1fEv
	.weak	_ZTI1B
	.section	.data.rel.ro._ZTI1B,"awG",@progbits,_ZTI1B,comdat
	.align 8
	.type	_ZTI1B, @object
	.size	_ZTI1B, 24
_ZTI1B:
	.quad	_ZTVN10__cxxabiv120__si_class_type_infoE+16
	.quad	_ZTS1B
	.quad	_ZTI1A
	.weak	_ZTS1B
	.section	.rodata._ZTS1B,"aG",@progbits,_ZTS1B,comdat
	.type	_ZTS1B, @object
	.size	_ZTS1B, 3
_ZTS1B:
	.string	"1B"
	.weak	_ZTI1A
	.section	.data.rel.ro._ZTI1A,"awG",@progbits,_ZTI1A,comdat
	.align 8
	.type	_ZTI1A, @object
	.size	_ZTI1A, 16
_ZTI1A:
	.quad	_ZTVN10__cxxabiv117__class_type_infoE+16
	.quad	_ZTS1A
	.weak	_ZTS1A
	.section	.rodata._ZTS1A,"aG",@progbits,_ZTS1A,comdat
	.type	_ZTS1A, @object
	.size	_ZTS1A, 3
_ZTS1A:
	.string	"1A"
	.section	.rodata
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.ident	"GCC: (Ubuntu 13.2.0-23ubuntu4) 13.2.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
