; ============================================================================
; K++ KOLIBRIOS BOOTSTRAP COMPILER
; STAGE 1
;
; ============================================================================
;
; Objetivo:
;
;   int main()
;   {
;       int x;
;       x = 10;
;       return x;
;   }
;
; Entrada:
;   /KPP/TEST.KPP
;
; Salida:
;   /KPP/OUT.ASM
;
; Target:
;   KolibriOS / FASM / x86 32-bit
;
; ============================================================================
;
; KOLIBRIOS SYSCALLS USADOS
;
;   EAX = 70
;       EBX -> estructura de filesystem
;
;       subfunción 0 = READ_FILE
;       subfunción 2 = CREATE_FILE
;
;   EAX = -1
;       TERMINATE PROCESS
;
; ============================================================================
;
; IMPORTANTE:
;
;   NO usamos:
;
;       0x3D
;       0x3F
;       0x3C
;       0x40
;       0x3E
;
;   Esas eran llamadas del código viejo.
;
; ============================================================================

use32
org 0


; ============================================================================
; KOLIBRIOS HEADER
; ============================================================================

db 'MENUET01'
dd 1
dd START
dd I_END
dd MEM_END
dd STACK_TOP
dd 0
dd 0

; ============================================================================
; CONSTANTES DE MEMORIA
; ============================================================================

SOURCE_BUFFER_SIZE = 0x10000
OUTPUT_BUFFER_SIZE = 0x10000
STACK_SIZE          = 0x4000
; ============================================================================
; START
; ============================================================================

START:

    ; ------------------------------------------------------------------------
    ; LEER /KPP/TEST.KPP
    ;
    ; Function 70
    ; Subfunction 0 = READ_FILE
    ;
    ; Structure:
    ;
    ; +00 = 0
    ; +04 = file offset
    ; +08 = high offset / flags
    ; +0C = bytes to read
    ; +10 = destination buffer
    ; +14 = path
    ; ------------------------------------------------------------------------

    mov dword [read_struct + 0],  0
    mov dword [read_struct + 4],  0
    mov dword [read_struct + 8],  0
    mov dword [read_struct + 12], SOURCE_BUFFER_SIZE
    mov dword [read_struct + 16], SOURCE_BUFFER
    mov dword [read_struct + 20], file_name

    mov eax, 70
    mov ebx, read_struct
    int 0x40

    ; EAX = 0       -> éxito
    ; EAX = 6       -> EOF después de lectura parcial
    ; EAX != 0/6    -> error

    cmp eax, 0
    je .read_ok

    cmp eax, 6
    je .read_ok_partial

    jmp file_error


.read_ok_partial:

    ; EBX = cantidad realmente leída
    mov [source_size], ebx

    jmp compile


.read_ok:

    ; EBX = cantidad de bytes leídos
    mov [source_size], ebx


; ============================================================================
; COMPILAR
; ============================================================================

compile:

    call compile_stage1

    jc compile_error


; ============================================================================
; CREAR /KPP/OUT.ASM
;
; Function 70
; Subfunction 2 = CREATE_FILE
;
; Structure:
;
; +00 = 2
; +04 = 0
; +08 = 0
; +0C = bytes a escribir
; +10 = pointer a datos
; +14 = path
; ============================================================================

    mov dword [write_struct + 0],  2
    mov dword [write_struct + 4],  0
    mov dword [write_struct + 8],  0
    mov eax, [output_size]
    mov [write_struct + 12], eax
    mov dword [write_struct + 16], OUTPUT_BUFFER
    mov dword [write_struct + 20], output_name

    mov eax, 70
    mov ebx, write_struct
    int 0x40

    ; EAX = 0 -> éxito
    ; EBX = cantidad escrita
    ;
    ; Si hay error, abortamos.

    test eax, eax
    jnz file_error

    ; ------------------------------------------------------------------------
    ; Verificar que se escribió todo.
    ; ------------------------------------------------------------------------

    mov eax, [output_size]
    cmp ebx, eax
    jne file_error


; ============================================================================
; OK
; ============================================================================

    mov eax, 4
    mov ebx, msg_ok
    mov ecx, msg_ok_len
    mov edx, 10
    mov esi, 0x00FFFFFF
    int 0x40

    jmp exit


; ============================================================================
; compile_stage1
;
; Reconoce exactamente:
;
;   int main()
;   {
;       int x;
;       x = NUMBER;
;       return x;
;   }
;
; ============================================================================

compile_stage1:

    pushad

    mov esi, SOURCE_BUFFER


    ; ------------------------------------------------------------------------
    ; int
    ; ------------------------------------------------------------------------

    call skip_spaces

    call match_int
    jc .error


    ; ------------------------------------------------------------------------
    ; main
    ; ------------------------------------------------------------------------

    call skip_spaces

    call match_main
    jc .error


    ; ------------------------------------------------------------------------
    ; (
    ; ------------------------------------------------------------------------

    call skip_spaces

    cmp byte [esi], '('
    jne .error

    inc esi


    ; ------------------------------------------------------------------------
    ; )
    ; ------------------------------------------------------------------------

    call skip_spaces

    cmp byte [esi], ')'
    jne .error

    inc esi


    ; ------------------------------------------------------------------------
    ; {
    ; ------------------------------------------------------------------------

    call skip_spaces

    cmp byte [esi], '{'
    jne .error

    inc esi


    ; ------------------------------------------------------------------------
    ; int
    ; ------------------------------------------------------------------------

    call skip_spaces

    call match_int
    jc .error


    ; ------------------------------------------------------------------------
    ; x
    ; ------------------------------------------------------------------------

    call skip_spaces

    cmp byte [esi], 'x'
    jne .error

    inc esi


    ; ------------------------------------------------------------------------
    ; ;
    ; ------------------------------------------------------------------------

    call skip_spaces

    cmp byte [esi], ';'
    jne .error

    inc esi


    ; ------------------------------------------------------------------------
    ; x = NUMBER;
    ; ------------------------------------------------------------------------

    call skip_spaces

    cmp byte [esi], 'x'
    jne .error

    inc esi


    call skip_spaces

    cmp byte [esi], '='
    jne .error

    inc esi


    call skip_spaces

    call parse_number
    jc .error

    mov [constant_value], eax


    call skip_spaces

    cmp byte [esi], ';'
    jne .error

    inc esi


    ; ------------------------------------------------------------------------
    ; return x;
    ; ------------------------------------------------------------------------

    call skip_spaces

    call match_return
    jc .error


    call skip_spaces

    cmp byte [esi], 'x'
    jne .error

    inc esi


    call skip_spaces

    cmp byte [esi], ';'
    jne .error

    inc esi


    ; ------------------------------------------------------------------------
    ; }
    ; ------------------------------------------------------------------------

    call skip_spaces

    cmp byte [esi], '}'
    jne .error

    inc esi


    ; ------------------------------------------------------------------------
    ; Generar ASM
    ; ------------------------------------------------------------------------

    call generate_output

    popad
    clc
    ret


.error:

    popad
    stc
    ret


; ============================================================================
; skip_spaces
; ============================================================================

skip_spaces:

.loop:

    mov al, [esi]

    cmp al, ' '
    je .next

    cmp al, 9
    je .next

    cmp al, 10
    je .next

    cmp al, 13
    je .next

    ret


.next:

    inc esi
    jmp .loop


; ============================================================================
; match_int
; ============================================================================

match_int:

    cmp byte [esi], 'i'
    jne .fail

    cmp byte [esi + 1], 'n'
    jne .fail

    cmp byte [esi + 2], 't'
    jne .fail

    add esi, 3

    clc
    ret


.fail:

    stc
    ret


; ============================================================================
; match_main
; ============================================================================

match_main:

    cmp byte [esi], 'm'
    jne .fail

    cmp byte [esi + 1], 'a'
    jne .fail

    cmp byte [esi + 2], 'i'
    jne .fail

    cmp byte [esi + 3], 'n'
    jne .fail

    add esi, 4

    clc
    ret


.fail:

    stc
    ret


; ============================================================================
; match_return
; ============================================================================

match_return:

    cmp byte [esi], 'r'
    jne .fail

    cmp byte [esi + 1], 'e'
    jne .fail

    cmp byte [esi + 2], 't'
    jne .fail

    cmp byte [esi + 3], 'u'
    jne .fail

    cmp byte [esi + 4], 'r'
    jne .fail

    cmp byte [esi + 5], 'n'
    jne .fail

    add esi, 6

    clc
    ret


.fail:

    stc
    ret


; ============================================================================
; parse_number
;
; Entrada:
;   ESI -> primer dígito
;
; Salida:
;   EAX = número
;   ESI = siguiente carácter
;
; Acepta:
;   0
;   1
;   10
;   123
;   etc.
;
; ============================================================================

parse_number:

    xor eax, eax
    xor ecx, ecx


.loop:

    mov cl, [esi]

    cmp cl, '0'
    jb .done

    cmp cl, '9'
    ja .done

    imul eax, eax, 10

    sub cl, '0'

    add eax, ecx

    inc esi

    jmp .loop


.done:

    ; Necesitamos comprobar que al menos hubo un dígito.
    ;
    ; Para eso retrocedemos temporalmente y verificamos el carácter anterior.

    cmp byte [esi - 1], '0'
    jb .fail

    cmp byte [esi - 1], '9'
    ja .fail

    clc
    ret


.fail:

    stc
    ret


; ============================================================================
; generate_output
;
; Genera:
;
;   ; K++ generated
;   use32
;   org 0
;
;   mov eax,NUMBER
;   mov [variable_x],eax
;   mov eax,[variable_x]
;   ret
;
;   variable_x dd NUMBER
;
; ============================================================================

generate_output:

    mov edi, OUTPUT_BUFFER


    ; ------------------------------------------------------------------------
    ; Cabecera
    ; ------------------------------------------------------------------------

    mov esi, text_header
    call append_string


    ; ------------------------------------------------------------------------
    ; mov eax, NUMBER
    ; ------------------------------------------------------------------------

    mov esi, text_mov_eax
    call append_string

    mov eax, [constant_value]
    call append_number

    mov esi, text_newline
    call append_string


    ; ------------------------------------------------------------------------
    ; mov [variable_x],eax
    ; ------------------------------------------------------------------------

    mov esi, text_store
    call append_string


    ; ------------------------------------------------------------------------
    ; mov eax,[variable_x]
    ; ------------------------------------------------------------------------

    mov esi, text_load
    call append_string


    ; ------------------------------------------------------------------------
    ; ret
    ; ------------------------------------------------------------------------

    mov esi, text_ret
    call append_string


    ; ------------------------------------------------------------------------
    ; variable_x dd NUMBER
    ; ------------------------------------------------------------------------

    mov esi, text_variable
    call append_string

    mov eax, [constant_value]
    call append_number


    mov esi, text_end
    call append_string


    ; ------------------------------------------------------------------------
    ; output_size = edi - OUTPUT_BUFFER
    ; ------------------------------------------------------------------------

    mov eax, edi
    sub eax, OUTPUT_BUFFER
    mov [output_size], eax

    ret


; ============================================================================
; append_string
; ============================================================================

append_string:

.loop:

    lodsb

    test al, al
    jz .done

    stosb

    jmp .loop


.done:

    ret


; ============================================================================
; append_number
;
; Entrada:
;   EAX = número
;
; Salida:
;   escribe ASCII en OUTPUT_BUFFER
;
; ============================================================================

append_number:

    push eax
    push ebx
    push ecx
    push edx


    xor ecx, ecx
    mov ebx, 10


    ; ------------------------------------------------------------------------
    ; Caso especial: 0
    ; ------------------------------------------------------------------------

    test eax, eax
    jnz .convert

    mov al, '0'
    stosb

    jmp .finish


.convert:

    xor edx, edx

    div ebx

    push edx

    inc ecx

    test eax, eax
    jnz .convert


.write:

    pop eax

    add al, '0'

    stosb

    loop .write


.finish:

    pop edx
    pop ecx
    pop ebx
    pop eax

    ret


; ============================================================================
; ERROR DE ARCHIVO
; ============================================================================

file_error:

    mov eax, 4
    mov ebx, msg_file_error
    mov ecx, msg_file_error_len
    mov edx, 10
    mov esi, 0x00FF0000
    int 0x40

    jmp exit


; ============================================================================
; ERROR DE COMPILACIÓN
; ============================================================================

compile_error:

    mov eax, 4
    mov ebx, msg_compile_error
    mov ecx, msg_compile_error_len
    mov edx, 10
    mov esi, 0x00FF0000
    int 0x40

    jmp exit


; ============================================================================
; EXIT
;
; Function -1
; terminate thread/process
; ============================================================================

exit:

    mov eax, -1
    int 0x40


; ============================================================================
; DATOS
; ============================================================================

file_handle:
    dd 0

output_handle:
    dd 0

source_size:
    dd 0

output_size:
    dd 0

constant_value:
    dd 0


; ============================================================================
; PATHS
; ============================================================================

file_name:

    db '/KPP/TEST.KPP',0


output_name:

    db '/KPP/OUT.ASM',0


; ============================================================================
; ESTRUCTURA FUNCTION 70 / READ_FILE
;
; +00 = subfunction
; +04 = file offset
; +08 = high offset / flags
; +0C = number bytes
; +10 = buffer
; +14 = path
; ============================================================================

read_struct:

    dd 0
    dd 0
    dd 0
    dd SOURCE_BUFFER_SIZE
    dd SOURCE_BUFFER
    dd file_name


; ============================================================================
; ESTRUCTURA FUNCTION 70 / CREATE_FILE
;
; +00 = subfunction 2
; +04 = 0
; +08 = 0
; +0C = number bytes
; +10 = data
; +14 = path
; ============================================================================

write_struct:

    dd 2
    dd 0
    dd 0
    dd 0
    dd OUTPUT_BUFFER
    dd output_name


; ============================================================================
; TEXTOS
; ============================================================================

text_header:

    db '; K++ generated ASM',13,10
    db 'use32',13,10
    db 'org 0',13,10
    db 13,10,0


text_mov_eax:

    db 'mov eax,',0


text_newline:

    db 13,10,0


text_store:

    db 'mov [variable_x],eax',13,10,0


text_load:

    db 'mov eax,[variable_x]',13,10,0


text_ret:

    db 'ret',13,10,0


text_variable:

    db 'variable_x dd ',0


text_end:

    db 13,10,0


; ============================================================================
; MENSAJES
; ============================================================================

msg_ok:

    db 'K++ STAGE1 OK'

msg_ok_len = $ - msg_ok


msg_file_error:

    db 'K++ FILE ERROR'

msg_file_error_len = $ - msg_file_error


msg_compile_error:

    db 'K++ COMPILE ERROR'

msg_compile_error_len = $ - msg_compile_error


; ============================================================================
; BUFFERS
;
; Ahora son parte de la memoria del propio proceso.
; No usamos direcciones absolutas 0x100000 / 0x300000.
; ============================================================================

SOURCE_BUFFER:

    rb 0x10000


OUTPUT_BUFFER:

    rb 0x10000


; ============================================================================
; STACK
; ============================================================================

STACK_SPACE:

    rb 0x4000


STACK_TOP:


; ============================================================================
; FIN DE MEMORIA DEL PROGRAMA
; ============================================================================

MEM_END:


; ============================================================================
; FIN DE IMAGEN
; ============================================================================

I_END:
