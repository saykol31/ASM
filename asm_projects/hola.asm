section .data
    frame1 db 0x1B,"[2J",0xA, "                                                                                                                                       ___",0xA, \
           "   /|     __                                                                                                                              __/|_||________ ",0xA, \
           " [__    _     __]                                                                                                                        [_  _____     __]",0xA, \
           "      O      O                                                                                                                             O       O O",0xA, 0

    frame2 db 0x1B,"[2J",0xA, "   [CAR]                                                                               [CAR]",0xA, \
           "   /|     __                                                                          __/ |_________ ",0xA, \
           " [__    _     __]                                                                    [_  ______   __]",0xA, \
           "      O         O                                                                      O       O O",0xA, 0

    frame3 db 0x1B,"[2J",0xA, "       [CAR]                                               [CAR]",0xA, \
           "       /|     ||                                                   __/  |_______",0xA, \
           "     [    _     ]                                                 [_  _____   __]",0xA, \
           "          O         O                                               O      O O",0xA, 0

    frame4 db 0x1B,"[2J",0xA, "           * BOOM *",0xA, \
      "       * * * * * * * * *",0xA, \
        "    --X--X--X--X--X--X--",0xA, \
        "       * * * * * * * * *",0xA, \
        "        *   X   X   *",0xA, "           * BOOM *",0xA, 0

    frame5 db 0x1B,"[2J",0xA, "           O     O",0xA, \
           "          /|\   /|\",0xA, \
           "          / \   / \",0xA,

    mensaje db 0xA,"[Presiona ESPACIO para continuar...]",0xA, 0

section .bss
    ts resd 2     ; (ya no lo estás usando, pero podés dejarlo)

section .text
    global _start

_start:
    ; Mostrar los frames
    mov ecx, frame1
    call show

    mov ecx, frame2
    call show

    mov ecx, frame3
    call show

    mov ecx, frame4
    call show

    mov ecx, frame5
    call show

    ; Salida del programa
    mov eax, 1
    xor ebx, ebx
    int 0x80

; -----------------------
; Subrutina show: imprime un frame y espera
show:
    push ecx
    xor edx, edx
.count_len:
    cmp byte [ecx + edx], 0
    je .done_count
    inc edx
    jmp .count_len
.done_count:
    pop ecx
    mov eax, 4
    mov ebx, 1
    int 0x80

    call delay_loop
    ret

; -----------------------
; Retardo artificial por bucle
delay_loop:
    mov ecx, 200000000     ; ajustá este valor si querés más/menos pausa
.loop:
    dec ecx
    jnz .loop
    ret
