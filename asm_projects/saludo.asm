section .data
    ; Tabla de frases (terminadas en 0)
    frase1 db "Buenos dias", 10, 0
    frase2 db "Buenas tardes", 10, 0
    frase3 db "Buenas noches", 10, 0

    frases dq frase1, frase2, frase3  ; punteros a las frases

    token db 0x00    ; Aquí guardaremos el código (1, 2 o 3)

section .bss
    timespec resq 2   ; Para guardar la hora de clock_gettime

section .text
    global _start

_start:
    ; ======================
    ; Obtener hora del sistema
    ; ======================
    mov rax, 228        ; syscall clock_gettime
    mov rdi, 0          ; CLOCK_REALTIME
    mov rsi, timespec
    syscall

    ; Obtener la hora (segundos desde 1970)
    mov rax, [timespec] ; segundos en RAX
    mov rbx, 3600       ; segundos por hora
    xor rdx, rdx
    div rbx             ; rax = total horas desde 1970
    mov rbx, 24
    xor rdx, rdx
    div rbx             ; rdx = hora actual (0-23)

    ;ajustar hora central  utc-5
    sub rdx, 5
    cmp rdx, 0
    jge .ok
    add rdx, 24
.ok:
    ; ======================
    ; Decidir token según hora
    ; ======================
    cmp rdx, 12
    jl es_manana
    cmp rdx, 18
    jl es_tarde
    jmp es_noche

es_manana:
    mov byte [token], 0x01
    jmp mostrar

es_tarde:
    mov byte [token], 0x02
    jmp mostrar

es_noche:
    mov byte [token], 0x03

; ======================
; Mostrar frase
; ======================
mostrar:
    movzx rax, byte [token] ; cargar token
    dec rax                  ; convertir 1,2,3 a índice 0,1,2
    mov rbx, [frases + rax*8] ; obtener puntero a frase
   
    ;calcular longitud  real de la cadena
    mov rcx, 0
.calc_len:
    cmp byte  [rbx+rcx], 0
    je .len_ready
    inc rcx
    jmp .calc_len
.len_ready:
    mov rdx, rcx

    ; syscall write(1, frase, longitud)
    mov rax, 1
    mov rdi, 1
    mov rsi, rbx
    syscall

    ; ======================
    ; Salir
    ; ======================
    mov rax, 60
    xor rdi, rdi
    syscall
