; ========================================
; Programa ASM 64-bit Linux
; Lee un número (0-9), lo incrementa y lo muestra
; ========================================

section .bss
    input resb 2      ; buffer para un dígito + newline

section .text
    global _start

_start:
    ; ======================
    ; Leer un carácter del usuario
    ; ======================
    mov rax, 0        ; syscall read
    mov rdi, 0        ; stdin
    mov rsi, input    ; buffer
    mov rdx, 2        ; leer 2 bytes
    syscall

    ; ======================
    ; Convertir ASCII a número
    ; ======================
    movzx rbx, byte [input]  ; tomar primer byte
    sub rbx, '0'             ; ASCII -> número

    ; ======================
    ; Incrementar número
    ; ======================
    add rbx, 1

    ; ======================
    ; Convertir número a ASCII
    ; ======================
    add rbx, '0'
    mov [input], bl

    ; ======================
    ; Escribir resultado
    ; ======================
    mov rax, 1        ; syscall write
    mov rdi, 1        ; stdout
    mov rsi, input    ; buffer
    mov rdx, 1        ; un byte
    syscall

    ; ======================
    ; Salir del programa
    ; ======================
    mov rax, 60       ; syscall exit
    xor rdi, rdi      ; exit code 0
    syscall
