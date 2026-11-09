; ===============================
; Hola Mundo en ASM (Linux 64 bits)
; ===============================

section .data
    msg db "Hola, Mundo!", 0xA   ; Mensaje + salto de línea
    len equ $ - msg              ; Longitud del mensaje

section .text
    global _start

_start:
    ; write(1, msg, len)
    mov rax, 1          ; syscall write
    mov rdi, 1          ; fd = 1 (stdout)
    mov rsi, msg        ; puntero al mensaje
    mov rdx, len        ; longitud
    syscall

    ; exit(0)
    mov rax, 60         ; syscall exit
    xor rdi, rdi        ; código de salida = 0
    syscall
