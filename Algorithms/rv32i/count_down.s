	.file	"count_down.c"
	.option nopic
	.attribute arch, "rv32i2p1"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.globl	sink
	.section	.sbss,"aw",@nobits
	.align	2
	.type	sink, @object
	.size	sink, 4
sink:
	.zero	4
	.text
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-32
	sw	ra,28(sp)
	sw	s0,24(sp)
	addi	s0,sp,32
	sw	zero,-20(s0)
	li	a5,100
	sw	a5,-24(s0)
	j	.L2
.L3:
	lw	a4,-20(s0)
	lw	a5,-24(s0)
	add	a5,a4,a5
	sw	a5,-20(s0)
	lw	a5,-24(s0)
	addi	a5,a5,-1
	sw	a5,-24(s0)
.L2:
	lw	a5,-24(s0)
	bne	a5,zero,.L3
	lui	a5,%hi(sink)
	lw	a4,-20(s0)
	sw	a4,%lo(sink)(a5)
	li	a5,255
	li	a4,1
	sb	a4,0(a5)
	li	a5,0
	mv	a0,a5
	lw	ra,28(sp)
	lw	s0,24(sp)
	addi	sp,sp,32
	jr	ra
	.size	main, .-main
	.ident	"GCC: (14.2.0+19) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
