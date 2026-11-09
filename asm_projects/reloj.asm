; reloj_local.asm — x86-64 Linux (NASM), hora local con offset
%define SYS_write          1
%define SYS_clock_gettime  228
%define SYS_nanosleep      35
%define STDOUT             1
%define CLOCK_REALTIME     0      ; Hora real UTC

; --- offsets de struct timespec ---
%define TV_SEC   0
%define TV_NSEC  8

; --- configuración ---
%define TZ_OFFSET_SECONDS  (-5*3600)   ; UTC-5 → ajusta aquí

section .data
    esc_clear db 0x1B,'[','2','J',0x1B,'[','H'
    esc_clear_len equ $ - esc_clear

    timespec:    dq 0, 0
    sleep_time:  dq 1, 0

section .bss
    buffer  resb 16

section .text
    global _start

_start:
.loop:
    ; clock_gettime(CLOCK_REALTIME, &timespec)
    mov     rax, SYS_clock_gettime
    mov     rdi, CLOCK_REALTIME
    lea     rsi, [rel timespec]
    syscall

    ; rax = segundos desde Epoch (UTC)
    mov     rax, [rel timespec + TV_SEC]

    ; aplicar offset horario
    add     rax, TZ_OFFSET_SECONDS

    ; segundos del día = (total % 86400)
    mov     rbx, 86400
    xor     rdx, rdx
    div     rbx
    mov     rax, rdx

    ; horas = seg/3600
    mov     rbx, 3600
    xor     rdx, rdx
    div     rbx
    mov     r12, rax
    mov     rax, rdx

    ; minutos = resto/60
    mov     rbx, 60
    xor     rdx, rdx
    div     rbx
    mov     r13, rax
    mov     r14, rdx

    ; formatear HH:MM:SS\n
    lea     rdi, [rel buffer]
    mov     rax, r12
    call    print_two_digits

    mov     byte [rdi], ':'
    inc     rdi

    mov     rax, r13
    call    print_two_digits

    mov     byte [rdi], ':'
    inc     rdi

    mov     rax, r14
    call    print_two_digits

    mov     byte [rdi], 10
    inc     rdi
    mov     byte [rdi], 0

    ; limpiar pantalla
    mov     rax, SYS_write
    mov     rdi, STDOUT
    lea     rsi, [rel esc_clear]
    mov     rdx, esc_clear_len
    syscall

    ; imprimir hora
    mov     rax, SYS_write
    mov     rdi, STDOUT
    lea     rsi, [rel buffer]
    mov     rdx, 9
    syscall

    ; dormir 1 seg
    mov     rax, SYS_nanosleep
    lea     rdi, [rel sleep_time]
    xor     rsi, rsi
    syscall

    jmp     .loop

;-------------------------------------------
print_two_digits:
    push    rbx
    mov     rbx, 10
    xor     rdx, rdx
    div     rbx
    add     al, '0'
    mov     [rdi], al
    inc     rdi
    add     dl, '0'
    mov     [rdi], dl
    inc     rdi
    pop     rbx
    ret
