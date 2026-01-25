	.file	"rgb_hlb.c"
	.option nopic
	.attribute arch, "rv32i2p1"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.globl	sink
	.section	.sbss,"aw",@nobits
	.type	sink, @object
	.size	sink, 1
sink:
	.zero	1
	.text
	.align	2
	.type	RGBtoHSL, @function
RGBtoHSL:
	addi	sp,sp,-48
	sw	ra,44(sp)
	sw	s0,40(sp)
	addi	s0,sp,48
	sw	a0,-36(s0)
	sw	a1,-40(s0)
	lbu	a5,-36(s0)
	sb	a5,-17(s0)
	lbu	a5,-36(s0)
	sb	a5,-18(s0)
	lbu	a5,-35(s0)
	lbu	a4,-17(s0)
	bgeu	a4,a5,.L2
	lbu	a5,-35(s0)
	sb	a5,-17(s0)
.L2:
	lbu	a5,-34(s0)
	lbu	a4,-17(s0)
	bgeu	a4,a5,.L3
	lbu	a5,-34(s0)
	sb	a5,-17(s0)
.L3:
	lbu	a5,-35(s0)
	lbu	a4,-18(s0)
	bleu	a4,a5,.L4
	lbu	a5,-35(s0)
	sb	a5,-18(s0)
.L4:
	lbu	a5,-34(s0)
	lbu	a4,-18(s0)
	bleu	a4,a5,.L5
	lbu	a5,-34(s0)
	sb	a5,-18(s0)
.L5:
	lbu	a4,-17(s0)
	lbu	a5,-18(s0)
	add	a5,a4,a5
	srai	a5,a5,1
	andi	a4,a5,0xff
	lw	a5,-40(s0)
	sb	a4,2(a5)
	lbu	a4,-17(s0)
	lbu	a5,-18(s0)
	bne	a4,a5,.L6
	lw	a5,-40(s0)
	sb	zero,1(a5)
	lw	a5,-40(s0)
	sb	zero,0(a5)
	j	.L1
.L6:
	lbu	a5,-17(s0)
	mv	a4,a5
	lbu	a5,-18(s0)
	sub	a5,a4,a5
	andi	a4,a5,0xff
	lw	a5,-40(s0)
	sb	a4,1(a5)
	lbu	a5,-36(s0)
	lbu	a4,-17(s0)
	bne	a4,a5,.L8
	lbu	a4,-35(s0)
	lbu	a5,-34(s0)
	sub	a5,a4,a5
	andi	a4,a5,0xff
	lw	a5,-40(s0)
	sb	a4,0(a5)
	j	.L1
.L8:
	lbu	a5,-35(s0)
	lbu	a4,-17(s0)
	bne	a4,a5,.L9
	lbu	a4,-34(s0)
	lbu	a5,-36(s0)
	sub	a5,a4,a5
	andi	a5,a5,0xff
	addi	a5,a5,85
	andi	a4,a5,0xff
	lw	a5,-40(s0)
	sb	a4,0(a5)
	j	.L1
.L9:
	lbu	a4,-36(s0)
	lbu	a5,-35(s0)
	sub	a5,a4,a5
	andi	a5,a5,0xff
	addi	a5,a5,-86
	andi	a4,a5,0xff
	lw	a5,-40(s0)
	sb	a4,0(a5)
.L1:
	lw	ra,44(sp)
	lw	s0,40(sp)
	addi	sp,sp,48
	jr	ra
	.size	RGBtoHSL, .-RGBtoHSL
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-32
	sw	ra,28(sp)
	sw	s0,24(sp)
	addi	s0,sp,32
	li	a5,-1
	sb	a5,-20(s0)
	sb	zero,-19(s0)
	sb	zero,-18(s0)
	addi	a5,s0,-24
	mv	a1,a5
	lw	a0,-20(s0)
	call	RGBtoHSL
	lbu	a4,-24(s0)
	lbu	a5,-23(s0)
	add	a5,a4,a5
	andi	a4,a5,0xff
	lbu	a5,-22(s0)
	add	a5,a4,a5
	andi	a4,a5,0xff
	lui	a5,%hi(sink)
	sb	a4,%lo(sink)(a5)
	li	a5,255
	li	a4,1
	sb	a4,0(a5)
	lui	a5,%hi(sink)
	lbu	a5,%lo(sink)(a5)
	andi	a5,a5,0xff
	mv	a0,a5
	lw	ra,28(sp)
	lw	s0,24(sp)
	addi	sp,sp,32
	jr	ra
	.size	main, .-main
	.ident	"GCC: (14.2.0+19) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
