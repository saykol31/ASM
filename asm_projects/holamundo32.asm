; ===============================
; Hola Mundo en ASM (Linux 32 bits)
; ===============================

section .data
    msg db "Hola, Mundo!", 0xA   ; Mensaje + salto de línea
    len equ $ - msg              ; Longitud del mensaje

section .text
    global _start

_start:
    ; write(1, msg, len)
    mov eax, 4          ; syscall write = 4
    mov ebx, 1          ; fd = 1 (stdout)
    mov ecx, msg        ; puntero al mensaje
    mov edx, len        ; longitud
    int 0x80

    ; exit(0)
    mov eax, 1          ; syscall exit = 1
    xor ebx, ebx        ; código de salida = 0
    int 0x80
