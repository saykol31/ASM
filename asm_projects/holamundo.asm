
org 0x100      ; inicio para ejecutables .COM en DOS

    mov ah, 9         ; Función DOS: imprimir cadena
    mov dx, msg       ; Dirección del mensaje
    int 21h

    mov ah, 4Ch
    int 21h

msg db 'Hola Mundo desde COM$', 0
