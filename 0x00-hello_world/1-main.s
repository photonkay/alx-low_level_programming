	.file	"1-main.c"
	.intel_syntax noprefix
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "Holberton School\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	push	rbp
	.seh_pushreg	rbp
	mov	rbp, rsp
	.seh_setframe	rbp, 0
	sub	rsp, 32
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	lea	rcx, .LC0[rip]
	call	printf
	mov	eax, 0
	add	rsp, 32
	pop	rbp
	ret
	.seh_endproc
	.ident	"GCC: (tdm64-1) 9.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
