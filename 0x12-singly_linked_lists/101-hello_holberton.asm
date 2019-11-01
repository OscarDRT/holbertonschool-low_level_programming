section	.data
	msn:db	"Hello, Holberton", 10

main:
	mov	rax, 1
	mov	rdi, 1
	mov	rsi, msn
	mov	rdx, 17
	syscall
	
	mov	rax, 60
	xor	rdi, rdi
	syscall	
	
section	.text
	global	main