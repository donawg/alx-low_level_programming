section .text
global main

main:
	mov rdi, 0x1
	mov rsi, greet
	mov rdx, greetLen
	mov rax, 0x1
	syscall

	xor rdi, rdi
	mov rax, 0x3c
	syscall

section .data
	greet db "Hello, Holberton", 0xa
	greetLen equ $-greet
