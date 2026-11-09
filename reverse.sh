#!/bin/bash

# Carpeta fija donde están los binarios
BIN_DIR="/home/saykol/ASM/Binarios"

# Carpeta de salida fija
SALIDA="/home/saykol/ASM/reverse_output"

# Pedir nombre del binario
read -p "Ingrese el nombre del binario a analizar: " BIN_NAME

# Construir la ruta completa
BINARIO="$BIN_DIR/$BIN_NAME"

# Comprobar si el binario existe
if [ ! -f "$BINARIO" ]; then
    echo "❌ Error: No se encontró el binario '$BINARIO'."
    exit 1
fi

mkdir -p "$SALIDA"

echo "🔹 Extrayendo símbolos del binario..."
nm -C "$BINARIO" > "$SALIDA/simbolos.txt" 2>/dev/null
echo "✅ Símbolos guardados en $SALIDA/simbolos.txt"

echo "🔹 Desensamblando el binario..."
objdump -d "$BINARIO" > "$SALIDA/ensamblador.txt"
echo "✅ Ensamblador guardado en $SALIDA/ensamblador.txt"

echo "🔹 Extrayendo cadenas de texto..."
strings "$BINARIO" > "$SALIDA/cadenas.txt"
echo "✅ Cadenas guardadas en $SALIDA/cadenas.txt"

echo "🔹 Información básica del binario..."
file "$BINARIO" > "$SALIDA/info_binario.txt"
echo "✅ Información guardada en $SALIDA/info_binario.txt"

echo "🎯 Ingeniería inversa completada. Resultados en '$SALIDA'."

# Pausa opcional
read -p "Presiona ENTER para continuar..."
