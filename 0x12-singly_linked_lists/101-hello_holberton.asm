
	hello db "Hello, Holberton", 10, 0
	format db "%s", 0


	extern printf
	global main

main:
	push rbp
	mov rdi, format
	lea rsi, [hello]
	
	call printf
	pop rbp
	xor eax, eax
	ret