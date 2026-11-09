section .data
    avion   db "  __|__   ",0
    esp     db " "
    limpiar  db 0x1B,"[2J",0x1B,"[H"
    limpiar_len equ $ - limpiar

section .bss
    i resb 1

section .text
    global _start

_start:
    mov rcx, 0            ; posición inicial X

loop_movimiento:
    ; Limpiar pantalla
    mov rax, 1
    mov rdi, 1
    mov rsi, limpiar
    mov rdx, limpiar_len
    syscall

    ; Imprimir espacios según la posición
    mov rbx, rcx
    call imprimir_espacios

    ; Imprimir el avión
    mov rax, 1
    mov rdi, 1
    mov rsi, avion
    mov rdx, 10           ; longitud del sprite
    syscall

    ; Pequeña pausa
    mov rax, 30000000
pause:
    dec rax
    jnz pause

    inc rcx
    cmp rcx, 60           ; hasta qué columna mover
    jl loop_movimiento

    ; Salir
    mov rax, 60
    xor rdi, rdi
    syscall

; ------------------------
; Imprime RBX espacios
; ------------------------
imprimir_espacios:
    push rcx
    mov rcx, rbx
espacio_loop:
    cmp rcx, 0
    je espacio_fin
    mov rax, 1
    mov rdi, 1
    mov rsi, esp
    mov rdx, 1
    syscall
    loop espacio_loop
espacio_fin:
    pop rcx
    ret
