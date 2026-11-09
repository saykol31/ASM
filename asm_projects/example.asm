; ============================================================
; EXAMPLE APPLICATION
; KolibriOS + NASM
;
; Salida:
;     BIN plano de 32 bits
;
; Compilar:
;     nasm -f bin example.asm -o example
;
; ============================================================

BITS 32
ORG 0

; ============================================================
; KOLIBRIOS APPLICATION HEADER
; ============================================================

db 'MENUET01'            ; KolibriOS executable signature
dd 1                     ; version
dd START                 ; start address
dd I_END                 ; end of image
dd MEM                   ; memory required
dd STACKTOP              ; stack address
dd 0                     ; parameters
dd 0                     ; icon

; ============================================================
; CODE AREA
; ============================================================

START:

    call draw_window

; ============================================================
; EVENT LOOP
; ============================================================

event_wait:

    ; --------------------------------------------------------
    ; Function 10
    ; Wait until an event occurs
    ; --------------------------------------------------------

    mov eax, 10
    int 0x40

    ; Event type returned in EAX

    cmp eax, 1
    je red

    ; --------------------------------------------------------
    ; Event 1 = redraw
    ; --------------------------------------------------------

    cmp eax, 2
    je key

    ; --------------------------------------------------------
    ; Event 2 = keyboard
    ; --------------------------------------------------------

    cmp eax, 3
    je button

    ; --------------------------------------------------------
    ; Other events are ignored
    ; --------------------------------------------------------

    jmp event_wait


; ============================================================
; REDRAW EVENT
; ============================================================

red:

    call draw_window

    jmp event_wait


; ============================================================
; KEYBOARD EVENT
; ============================================================

key:

    ; Function 2 = read key

    mov eax, 2
    int 0x40

    ; The key is returned in AH.
    ; We simply read and ignore it.

    jmp event_wait


; ============================================================
; BUTTON EVENT
; ============================================================

button:

    ; Function 17 = read button

    mov eax, 17
    int 0x40

    ; Button number is returned in AH.

    cmp ah, 1
    jne noclose

    ; --------------------------------------------------------
    ; Function -1 = close application
    ; --------------------------------------------------------

    mov eax, -1
    int 0x40


noclose:

    jmp event_wait


; ============================================================
; WINDOW
; ============================================================

draw_window:

    ; --------------------------------------------------------
    ; Function 12
    ; Start window drawing
    ; EBX = 1
    ; --------------------------------------------------------

    mov eax, 12
    mov ebx, 1
    int 0x40


    ; --------------------------------------------------------
    ; Function 0
    ; Define and draw window
    ; --------------------------------------------------------

    mov eax, 0

    ; X = 100
    ; Width = 300
    ;
    ; EBX = (X << 16) + Width

    mov ebx, (100 << 16) + 300


    ; Y = 100
    ; Height = 120
    ;
    ; ECX = (Y << 16) + Height

    mov ecx, (100 << 16) + 120


    ; Window type / work area color

    mov edx, 0x14FFFFFF


    ; Grab bar color

    mov esi, 0x808899FF


    ; Window title

    mov edi, title


    ; Execute system call

    int 0x40


    ; --------------------------------------------------------
    ; Function 4
    ; Draw text
    ; --------------------------------------------------------

    ; X = 25
    ; Y = 35

    mov ebx, (25 << 16) + 35


    ; Text color

    mov ecx, 0x224466


    ; Address of text

    mov edx, text


    ; Text length

    mov esi, 40


    ; Function 4

    mov eax, 4


.newline:

    int 0x40

    ; Move down 10 pixels

    add ebx, 10


    ; Check whether the current string
    ; has reached its zero terminator.

    cmp byte [edx], 0

    jne .newline


    ; --------------------------------------------------------
    ; Function 12
    ; End window drawing
    ; EBX = 2
    ; --------------------------------------------------------

    mov eax, 12
    mov ebx, 2
    int 0x40


    ret


; ============================================================
; DATA AREA
; ============================================================

text:

    db "It looks like you have just compiled", 0
    db "your first program for Kolibrios.", 0
    db "Congratulations!", 0


title:

    db "Example application", 0


; ============================================================
; END OF IMAGE
; ============================================================

I_END:


; ============================================================
; STACK AREA
; ============================================================

    times 4096 db 0

    align 16


STACKTOP:


; ============================================================
; MEMORY END
; ============================================================

MEM:


; ============================================================
; END
; ============================================================
