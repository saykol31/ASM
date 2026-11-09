section .data
    msg db "Hola Mundo!", 0xA   ; mensaje + salto de línea
    len equ $ - msg             ; longitud del mensaje

section .text
    global _start

_start:
    ; escribir mensaje
    mov rax, 1          ; syscall write
    mov rdi, 1          ; stdout (file descriptor)
    mov rsi, msg        ; dirección del mensaje
    mov rdx, len        ; longitud del mensaje
    syscall

    ; salir
    mov rax, 60         ; syscall exit
    xor rdi, rdi        ; código de salida 0
    syscall
