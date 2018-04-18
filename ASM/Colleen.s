section .text
	global _test
	extern _printf
;
	;Un com
;
_test:
	;
		;Autre com
	;
	push rbp
	mov rbp, rsp
	sub rsp, 16
	lea rdi, [rel str]
	mov rsi, 10
	mov rdx, 9
	mov rcx, 10
	mov r8, 9
	mov r9, 10
	push dword 59
	;pop rax
	call _printf
	mov rsp, rbp
	pop rbp
	mov rax, 0
	ret

section .data
str: db "section .text%c%cglobal _main%c%cextern _printf%c%c", 10, 9, 59, "Un com", 59, 10, "_main:", 10, 9, 59, 10, 9, 9, 59, "Autre com", 10, 9, 59, 10
