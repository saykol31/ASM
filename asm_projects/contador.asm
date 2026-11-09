section .data
    newline     db 0xA
    buffer      db '0', 0
    diez_msg    db '10', 0xA
    diez_len    equ $ - diez_msg

section .text
    global _start

_start:
    mov rcx, 1              ; contador desde 1

print_loop:
    cmp rcx, 10
    je print_ten             ; si es 10, ir a caso especial

    ; convertir número de un dígito a ASCII
    mov rax, rcx
    add rax, '0'
    mov [buffer], al

    ; imprimir número
    mov rax, 1               ; sys_write
    mov rdi, 1               ; stdout
    mov rsi, buffer
    mov rdx, 1
    syscall

    ; imprimir salto de línea
    mov rax, 1
    mov rdi, 1
    mov rsi, newline
    mov rdx, 1
    syscall

    inc rcx
    jmp print_loop

print_ten:
    mov rax, 1               ; sys_write
    mov rdi, 1
    mov rsi, diez_msg
    mov rdx, diez_len
    syscall

end_program:
    mov rax, 60              ; sys_exit
    xor rdi, rdi
    syscall

