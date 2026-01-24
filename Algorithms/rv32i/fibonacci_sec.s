	.file	"fibonacci_sec.c"
	.option nopic
	.attribute arch, "rv32i2p1"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-832
	sw	ra,828(sp)
	sw	s0,824(sp)
	addi	s0,sp,832
	li	a5,0
	li	a6,0
	sw	a5,-824(s0)
	sw	a6,-820(s0)
	li	a4,1
	li	a5,0
	sw	a4,-816(s0)
	sw	a5,-812(s0)
	li	a5,2
	sw	a5,-20(s0)
	j	.L2
.L3:
	lw	a5,-20(s0)
	addi	a4,a5,-1
	addi	a5,s0,-824
	slli	a4,a4,3
	add	a5,a4,a5
	lw	a4,0(a5)
	lw	a5,4(a5)
	lw	a3,-20(s0)
	addi	a2,a3,-2
	addi	a3,s0,-824
	slli	a2,a2,3
	add	a3,a2,a3
	lw	a0,0(a3)
	lw	a1,4(a3)
	add	a2,a4,a0
	mv	a6,a2
	sltu	a6,a6,a4
	add	a3,a5,a1
	add	a5,a6,a3
	mv	a3,a5
	mv	a4,a2
	mv	a5,a3
	lw	a2,-20(s0)
	addi	a3,s0,-824
	slli	a2,a2,3
	add	a3,a2,a3
	sw	a4,0(a3)
	sw	a5,4(a3)
	lw	a5,-20(s0)
	addi	a5,a5,1
	sw	a5,-20(s0)
.L2:
	lw	a4,-20(s0)
	li	a5,99
	ble	a4,a5,.L3
	li	a5,0
	mv	a0,a5
	lw	ra,828(sp)
	lw	s0,824(sp)
	addi	sp,sp,832
	jr	ra
	.size	main, .-main
	.ident	"GCC: (14.2.0+19) 14.2.0"
	.section	.note.GNU-stack,"",@progbits
