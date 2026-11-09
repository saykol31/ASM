#!/bin/bash

# Rutas absolutas
BINARIO="/home/saykol/C/project_C/dibujoXCB"
REVERSE_OUTPUT="/home/saykol/reverse_output"
OUTPUT_DIR="/home/saykol/C/project_C/Vulkan/dibujoXCB/reconstructed_cpp"
mkdir -p "$OUTPUT_DIR"



# Copiar cadenas detectadas como comentarios o referencias
if [ -f "$REVERSE_OUTPUT/cadenas.txt" ]; then
    cp "$REVERSE_OUTPUT/cadenas.txt" "$OUTPUT_DIR/"
fi

# Convertir ensamblador en esqueleto de código C++ (muy básico)
if [ -f "$REVERSE_OUTPUT/ensamblador.txt" ]; then
    sed 's/^/\/\/ ASM: /' "$REVERSE_OUTPUT/ensamblador.txt" > "$OUTPUT_DIR/asm_reference.cpp"
fi

# Guardar símbolos detectados
if [ -f "$REVERSE_OUTPUT/simbolos.txt" ]; then
    cp "$REVERSE_OUTPUT/simbolos.txt" "$OUTPUT_DIR/"
fi

# Guardar info general del binario
if [ -f "$REVERSE_OUTPUT/info_binario.txt" ]; then
    cp "$REVERSE_OUTPUT/info_binario.txt" "$OUTPUT_DIR/"
fi

echo "Reconstrucción inicial creada en $OUTPUT_DIR"

# Archivos de entrada
SYMBOLS_FILE="reverse_output/simbolos.txt"
STRINGS_FILE="reverse_output/cadenas.txt"
ASSEMBLER_FILE="reverse_output/ensamblador.txt"

# Crear archivo principal
MAIN_CPP="$OUT_DIR/main.cpp"
echo "// Proyecto reconstruido desde análisis binario" > "$MAIN_CPP"
echo "#include <iostream>" >> "$MAIN_CPP"
echo "" >> "$MAIN_CPP"

# Agregar strings detectados como variables globales
if [[ -f "$STRINGS_FILE" ]]; then
    echo "// Variables para strings detectados" >> "$MAIN_CPP"
    while IFS= read -r line; do
        # Sanitizar nombre
        var_name=$(echo "$line" | tr -cd 'a-zA-Z0-9_')
        if [[ -n "$var_name" ]]; then
            echo "const char* ${var_name} = \"$line\";" >> "$MAIN_CPP"
        fi
    done < "$STRINGS_FILE"
    echo "" >> "$MAIN_CPP"
fi

# Agregar prototipos de funciones detectadas
if [[ -f "$SYMBOLS_FILE" ]]; then
    echo "// Prototipos de funciones detectadas" >> "$MAIN_CPP"
    while IFS= read -r func; do
        func_name=$(echo "$func" | tr -cd 'a-zA-Z0-9_')
        if [[ -n "$func_name" ]]; then
            echo "void $func_name();" >> "$MAIN_CPP"
        fi
    done < "$SYMBOLS_FILE"
    echo "" >> "$MAIN_CPP"
fi

# Crear funciones vacías
if [[ -f "$SYMBOLS_FILE" ]]; then
    echo "// Definición de funciones (vacías)" >> "$MAIN_CPP"
    while IFS= read -r func; do
        func_name=$(echo "$func" | tr -cd 'a-zA-Z0-9_')
        if [[ -n "$func_name" ]]; then
            echo "void $func_name() {" >> "$MAIN_CPP"
            echo "    // TODO: implementar la lógica según ensamblador" >> "$MAIN_CPP"
            echo "}" >> "$MAIN_CPP"
            echo "" >> "$MAIN_CPP"
        fi
    done < "$SYMBOLS_FILE"
fi

# Función main
echo "int main() {" >> "$MAIN_CPP"
echo "    std::cout << \"Proyecto reconstruido\\n\";" >> "$MAIN_CPP"
echo "    return 0;" >> "$MAIN_CPP"
echo "}" >> "$MAIN_CPP"

echo "Esqueleto C++ generado en $MAIN_CPP"
