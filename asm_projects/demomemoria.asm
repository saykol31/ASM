section .data
    mensaje1 db "Valor inicial: ", 0
mensaje1_len equ $ - mensaje1

    mensaje2 db "Valor modificado: ", 0
mensaje2_len equ $ - mensaje2

    valor db 42
    nl db 10
    

section .bss
    buffer resb 3      ; hasta 3 dígitos para 0–255
    %macro len 1
    %1_end - %1
    %endmacro

section .text
    global _start

_start:
    ; Mostrar "Valor inicial"
    mov rax, 1
    mov rdi, 1
    mov rsi, mensaje1
    mov rdx, mensaje1_len
    syscall

    ; Mostrar valor inicial
    movzx rax, byte [valor]
    call print_number

    ; Salto de línea
    mov rax, 1
    mov rdi, 1
    mov rsi, nl
    mov rdx, 1
    syscall

    ; Modificar valor
    mov byte [valor], 99

    ; Mostrar "Valor modificado"
    mov rax, 1
    mov rdi, 1
    mov rsi, mensaje2
    mov rdx, mensaje2_len
    syscall

    ; Mostrar valor modificado
    movzx rax, byte [valor]
    call print_number

    ; Salto de línea
    mov rax, 1
    mov rdi, 1
    mov rsi, nl
    mov rdx, 1
    syscall

    ; Salir
    mov rax, 60
    xor rdi, rdi
    syscall

; ========================================
; Función print_number
; ========================================
print_number:
    mov rcx, buffer+3  ; apuntar justo después del buffer
    mov rbx, 10
.convert_loop:
    xor rdx, rdx
    div rbx              ; divide RAX entre 10 → cociente en RAX, resto en RDX
    dec rcx
    add dl, '0'
    mov [rcx], dl
    test rax, rax
    jnz .convert_loop

; Calcular longitud
    mov rax, buffer+3      ; dirección final del buffer
    sub rax, rcx           ; rax = (buffer+3) - rcx
    mov rdx, rax           ; longitud  ; pasamos el tamaño a rdx
    mov rax, 1
    mov rdi, 1
    mov rsi, rcx
    syscall
    ret

; ========================================
; Macros y datos adicionales
; ========================================




    mensaje1_end:
    mensaje2_end:

    ;Esperar tecla para que no se cierre rápido
    mov rax, 0
    mov rdi, 0
    mov rsi, buffer
    mov rdx, 1
    syscall

    ; Salir del programa
    mov rax, 60
    xor rdi, rdi
    syscall
