#!/bin/bash

# ============================================================================
#                   Mini Entorno ASM - Información previa
# ============================================================================

# Función para obtener versión de comando, o "No instalado"

# Colores
GREEN='\033[38;5;154m'
CYAN='\033[38;5;51m'
YELLOW='\033[1;33m'
MAGENTA='\033[1;95m'
RED='\033[1;31m'
NC='\033[0m' #reset color


# Función para obtener versión de comando

check_version() {
    local cmd="$1"
    local ver_cmd="$2"
    if command -v "$cmd" &>/dev/null; then
        $ver_cmd 2>&1 | head -n 1
    else
        echo "No instalado"
    fi
}


clear
echo -e "${CYAN}"
echo " ╔======================================================================╗"
echo " ║                                                                      ║"
echo " ║                 Mini entorno ASM - Dependencias                      ║"
echo " ║                                                  v.1.2               ║"
echo " ╚======================================================================╝"
echo ""
echo -e "${NC}"
echo -e "${MAGENTA} --> Obteniendo Dependencias .${NC}"
echo ""
echo ""


# Verificar e instalar los paquetes necesarios
# Función para verificar si `nasm` está instalado e instalarlo si no lo está
install_nasm() {
    if command -v nasm &>/dev/null; then
        echo -e "${GREEN}✔ nasm ya está instalado.${NC}"
    else
        echo -e "${YELLOW}nasm no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y nasm
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ nasm se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar nasm. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Llamar a la función de instalación de nasm
install_nasm

# Función para verificar si `as` está instalado e instalarlo si no lo está
install_as() {
    if command -v as &>/dev/null; then
        echo -e "${GREEN}✔ as (ensamblador GNU) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}as no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y binutils
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ as se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar as. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Función para verificar si `ld` está instalado e instalarlo si no lo está
install_ld() {
    if command -v ld &>/dev/null; then
        echo -e "${GREEN}✔ ld (enlazador GNU) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}ld no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y binutils
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ ld se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar ld. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Función para verificar si `objdump` está instalado e instalarlo si no lo está
install_objdump() {
    if command -v objdump &>/dev/null; then
        echo -e "${GREEN}✔ objdump (desensamblador/inspector de binarios) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}objdump no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y binutils
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ objdump se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar objdump. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Función para verificar si `objcopy` está instalado e instalarlo si no lo está
install_objcopy() {
    if command -v objcopy &>/dev/null; then
        echo -e "${GREEN}✔ objcopy (convertir/modificar archivos objeto) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}objcopy no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y binutils
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ objcopy se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar objcopy. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Función para verificar si `nm` está instalado e instalarlo si no lo está
install_nm() {
    if command -v nm &>/dev/null; then
        echo -e "${GREEN}✔ nm (listar símbolos) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}nm no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y binutils
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ nm se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar nm. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Función para verificar si `readelf` está instalado e instalarlo si no lo está
install_readelf() {
    if command -v readelf &>/dev/null; then
        echo -e "${GREEN}✔ readelf (inspeccionar encabezados ELF) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}readelf no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y binutils
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ readelf se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar readelf. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Función para verificar si `ar` está instalado e instalarlo si no lo está
install_ar() {
    if command -v ar &>/dev/null; then
        echo -e "${GREEN}✔ ar (gestionar librerías estáticas) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}ar no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y binutils
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ ar se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar ar. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Llamar a las funciones de instalación para las herramientas de GNU Binutils
install_as
install_ld
install_objdump
install_objcopy
install_nm
install_readelf
install_ar


# Función para verificar si `gcc` está instalado e instalarlo si no lo está
install_gcc() {
    if command -v gcc &>/dev/null; then
        echo -e "${GREEN}✔ gcc (compilador GNU C) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}gcc no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y gcc
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ gcc se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar gcc. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Función para verificar si `make` está instalado e instalarlo si no lo está
install_make() {
    if command -v make &>/dev/null; then
        echo -e "${GREEN}✔ make (automatizar compilación) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}make no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y make
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ make se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar make. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Llamar a las funciones de instalación para gcc y make
install_gcc
install_make

# Función para verificar si `gdb` está instalado e instalarlo si no lo está
install_gdb() {
    if command -v gdb &>/dev/null; then
        echo -e "${GREEN}✔ gdb (depurador GNU) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}gdb no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y gdb
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ gdb se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar gdb. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Función para verificar si `strace` está instalado e instalarlo si no lo está
install_strace() {
    if command -v strace &>/dev/null; then
        echo -e "${GREEN}✔ strace (seguimiento de llamadas al sistema) ya está instalado.${NC}"
    else
        echo -e "${YELLOW}strace no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y strace
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ strace se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar strace. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Llamar a las funciones de instalación para gdb y strace
install_gdb
install_strace

# Función para verificar si `valgrind` está instalado e instalarlo si no lo está
install_valgrind() {
    if command -v valgrind &>/dev/null; then
        echo -e "${GREEN}✔ valgrind ya está instalado.${NC}"
    else
        echo -e "${YELLOW}valgrind no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y valgrind
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ valgrind se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar valgrind. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Llamar a las funciones de instalación
install_valgrind

# Función para verificar si `fasm` está instalado e instalarlo si no lo está
install_fasm() {
    if command -v fasm &>/dev/null; then
        echo -e "${GREEN}✔ fasm ya está instalado.${NC}"
    else
        echo -e "${YELLOW}fasm no está instalado. Instalando...${NC}"
        sudo apt update && sudo apt install -y fasm
        if [[ $? -eq 0 ]]; then
            echo -e "${GREEN}✔ fasm se instaló correctamente.${NC}"
        else
            echo -e "${RED}✘ Error al instalar fasm. Verifica los permisos o la conexión a internet.${NC}"
        fi
    fi
}

# Llamar a la función de instalación de fasm
install_fasm


echo ""
echo -e "${MAGENTA} --> Dependencias Satisfechas .${NC}"
echo ""


# Esperar que el usuario presione cualquier tecla antes de continuar
read -n 1 -s

clear
echo -e "${CYAN}"
echo " ╔======================================================================╗"
echo " ║                                                                      ║"
echo " ║                 Mini entorno ASM - Herramientas                      ║"
echo " ║                                                  v.1.2               ║"
echo " ╚======================================================================╝"
echo ""
echo -e "${NC}"

# === Ensamblador independiente ===
echo -e "${MAGENTA} Ensamblador independiente: ${NC}"
#echo " • nasm → ensamblador Intel Syntax (NASM: Netwide Assembler):"
echo "   $(check_version nasm "nasm -v")"
echo "   $(check_version fasm "fasm")"


# === Binutils ===
echo -e "${MAGENTA} Herramientas GNU Binutils: ${NC}"
echo "   $(check_version ld "ld --version")"
echo " • as → ensamblador GNU:"
echo " • ld → enlazador:"
echo " • objdump → desensamblar/inspeccionar binarios:"
echo " • objcopy → convertir/modificar archivos objeto:"
echo " • nm → listar símbolos:"
echo " • readelf → inspeccionar encabezados ELF:"
echo " • ar → crear/gestionar librerías estáticas:"


# === Compilador ===
echo -e "${MAGENTA} Compilador: ${NC}"
#echo " • gcc → compilador GNU C:"
echo "   $(check_version gcc "gcc --version")"
#echo " • make → automatizar compilación:"
echo "   $(check_version make "make --version")"


# === Depuradores ===
echo -e "${MAGENTA} Depuradores: ${NC}"
#echo " • gdb → depurador GNU:"
echo "   $(check_version gdb "gdb --version")"
#echo " • strace → seguimiento de llamadas al sistema:"
echo "   $(check_version strace "strace --version")"


# === Analizador de memoria ===
echo -e "${MAGENTA} Analizador de memoria: ${NC}"
#echo " • valgrind → análisis de memoria y detección de fugas:"
echo "   $(check_version valgrind "valgrind --version")"
echo -e "${CYAN}=====================================================================${NC}"



# Preguntar actualización
read -p "$(echo -e "${YELLOW} ¿Quieres actualizar el sistema y herramientas ahora? (s/n): ${NC}")" update_answer

if [[ "$update_answer" =~ ^[Ss]$ ]]; then
    echo "Actualizando el sistema y las herramientas..."
    sudo apt update && sudo apt upgrade -y
fi


# ============================================================================
# ELEGIR FORMATO / TARGET ASM
# ============================================================================

# Variables de estado
FORMAT="elf64"
LD_FLAGS=""
FREEDOS_MODE=false
KOLIBRIOS_MODE=false
TARGET_NAME="Linux x86-64"

# Ensamblador activo: "nasm" (por defecto) o "fasm".
# Con NASM el formato lo impone la opción -f del script;
# con FASM lo declara la propia fuente (format ELF64,
# format binary...), como manda FASM.
ASSEMBLER="nasm"
ASSEMBLER_NAME="NASM"

ASM_FILE=""
OBJ_FILE=""
EXE_FILE=""
KOLIBRIOS_FILE=""
WORKDIR="$HOME/ASM/asm_projects"


# ============================================================================
# CONFIGURACIÓN KOLIBRIOS
# ============================================================================

KOLIBRIOS_DIR="$HOME/ASM/kolibri_test"

# Imagen limpia/original de KolibriOS
KOLIBRIOS_TEMPLATE="$KOLIBRIOS_DIR/kolibri.img"

# Imagen generada automáticamente
KOLIBRIOS_IMAGE=""

# Memoria para QEMU
KOLIBRIOS_QEMU_MEM=256

# Imagen persistente de KolibriOS (la que arranca QEMU).
# PORTABILIDAD: esto es CONFIGURACIÓN de cada máquina,
# no código — ajusta la ruta en cada equipo. Por defecto,
# la carpeta de máquinas de VirtualBox del usuario actual.
KOLIBRIOS_IMAGE_PERSISTENTE="$HOME/VirtualBox VMs/kolibriOS/KPP-KOLIBRI.img"

# Casa del entorno: los scripts hermanos viven aquí.
ASM_HOME="$HOME/ASM"


# ============================================================================
# CONFIGURACIÓN FREEDOS
# ============================================================================

FREEDOS_DIR="$HOME/ASM/freedos_test"

# Imagen de disquete BOOTABLE de FreeDOS (plantilla).
# Se prepara una sola vez: debe contener KERNEL.SYS y
# COMMAND.COM de FreeDOS (la imagen oficial de disquete
# de FreeDOS sirve tal cual).
FREEDOS_TEMPLATE="$FREEDOS_DIR/freedos.img"

# Imagen de trabajo generada en cada ejecución
FREEDOS_IMAGE=""

# Memoria para QEMU (FreeDOS es ligero)
FREEDOS_QEMU_MEM=32



mkdir -p "$WORKDIR"
mkdir -p "$FREEDOS_DIR"
cd "$WORKDIR" || exit 1



#  =============================
#  Eleguir Formato
#  ========================

function elegir_formato() {

    clear

    echo -e "${CYAN}"
    echo " ╔======================================================================╗"
    echo " ║                                                                      ║"
    echo " ║                 Mini entorno ASM - FORMATOS                         ║"
    echo " ║                                                  v.1.4               ║"
    echo " ╚======================================================================╝"
    echo -e "${NC}"

    echo ""
    echo -e "${MAGENTA} Elige el destino para ensamblar: ${NC}"
    echo ""

    echo "1) Linux x86-32       → ELF32"
    echo "2) Linux x86-64       → ELF64"
    echo "3) KolibriOS x86      → BIN"
    echo "4) FreeDOS            → COM"
    echo ""

    read -p "Opción: " formato_op

    case "$formato_op" in

        1)
            FORMAT="elf32"
            LD_FLAGS="-m elf_i386"
            FREEDOS_MODE=false
            KOLIBRIOS_MODE=false
            TARGET_NAME="Linux x86-32"
            ;;

        2)
            FORMAT="elf64"
            LD_FLAGS=""
            FREEDOS_MODE=false
            KOLIBRIOS_MODE=false
            TARGET_NAME="Linux x86-64"
            ;;

        3)
            FORMAT="bin"
            LD_FLAGS=""
            FREEDOS_MODE=false
            KOLIBRIOS_MODE=true
            TARGET_NAME="KolibriOS x86"
            ;;

        4)
            FORMAT="bin"
            LD_FLAGS=""
            FREEDOS_MODE=true
            KOLIBRIOS_MODE=false
            TARGET_NAME="FreeDOS (.COM)"
            ;;

        *)
            echo ""
            echo -e "${YELLOW}Opción inválida.${NC}"
            echo "Se utilizará Linux x86-64 por defecto."

            FORMAT="elf64"
            LD_FLAGS=""
            FREEDOS_MODE=false
            KOLIBRIOS_MODE=false
            TARGET_NAME="Linux x86-64"
            ;;
    esac

    echo ""
    echo -e "${GREEN}✔ Target seleccionado:${NC} $TARGET_NAME"
    echo -e "${GREEN}✔ Formato NASM:${NC} $FORMAT"
    echo ""

    read -p "Presiona ENTER para continuar..."
}

# ============================================================================
#
# ============================================================================

# ============================================================================
# ELEGIR ENSAMBLADOR (NASM por defecto / FASM)
# ============================================================================

function elegir_ensamblador() {

    clear

    echo -e "${CYAN}"
    echo " ╔======================================================================╗"
    echo " ║                                                                      ║"
    echo " ║                 Mini entorno ASM - ENSAMBLADOR                      ║"
    echo " ║                                                                      ║"
    echo " ╚======================================================================╝"
    echo -e "${NC}"

    echo ""
    echo -e "${MAGENTA} Ensamblador actual: ${NC} $ASSEMBLER_NAME"
    echo ""
    echo "1) NASM (por defecto)"
    echo "2) FASM"
    echo ""

    read -p "Opción: " ensamblador_op

    case "$ensamblador_op" in

        1)
            ASSEMBLER="nasm"
            ASSEMBLER_NAME="NASM"
            ;;

        2)
            ASSEMBLER="fasm"
            ASSEMBLER_NAME="FASM"
            ;;

        *)
            echo ""
            echo -e "${YELLOW}Opción inválida. Se conserva $ASSEMBLER_NAME.${NC}"
            ;;
    esac

    echo ""
    echo -e "${GREEN}✔ Ensamblador activo:${NC} $ASSEMBLER_NAME"
    if [[ "$ASSEMBLER" == "fasm" ]]; then
        echo "Con FASM el formato lo declara la fuente"
        echo "(format ELF64, format binary...), no el script."
    fi
    echo ""

    read -p "Presiona ENTER para continuar..."
}

function mover_bin_kolibrios() {

    clear

    echo -e "${CYAN}"
    echo " ╔======================================================================╗"
    echo " ║                                                                      ║"
    echo " ║                 BIN → KOLIBRIOS                                     ║"
    echo " ║                                                                      ║"
    echo " ╚======================================================================╝"
    echo -e "${NC}"

    if [[ "$KOLIBRIOS_MODE" != true ]]; then
        echo -e "${RED}ERROR:${NC} El target actual no es KolibriOS."
        echo
        echo "Selecciona:"
        echo "7) Cambiar formato / target"
        echo "3) KolibriOS x86"
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    if [[ -z "$ASM_FILE" ]]; then
        echo -e "${RED}ERROR:${NC} No hay archivo ASM seleccionado."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    # ============================================================
    # BIN ORIGINAL
    # ============================================================

    nombre="${ASM_FILE%.*}"

    KOLIBRIOS_FILE="$WORKDIR/$nombre"

    if [[ ! -f "$KOLIBRIOS_FILE" ]]; then
        echo -e "${RED}ERROR:${NC} No existe el BIN:"
        echo
        echo "  $KOLIBRIOS_FILE"
        echo
        echo "Primero ejecuta la opción 2."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    # ============================================================
    # COMPROBAR HERRAMIENTAS
    # ============================================================

    for cmd in mcopy mdir mtype qemu-system-i386; do
        if ! command -v "$cmd" >/dev/null 2>&1; then
            echo -e "${RED}ERROR:${NC} Falta el comando: $cmd"
            echo
            echo "Instálalo con:"
            echo
            echo "  sudo apt install mtools qemu-system-x86"
            echo
            read -rp "Presiona ENTER para continuar..."
            return
        fi
    done

    # ============================================================
    # GENERAR NOMBRE KOLIBRIOS
    # ============================================================

    KOLIBRI_NAME="$(basename "$nombre")"

    KOLIBRI_NAME="$(printf '%s' "$KOLIBRI_NAME" | \
        tr '[:lower:]' '[:upper:]')"

    KOLIBRI_NAME="$(printf '%s' "$KOLIBRI_NAME" | \
        sed 's/[^A-Z0-9_$-]/_/g')"

    if [[ ${#KOLIBRI_NAME} -gt 8 ]]; then

        echo
        echo "El nombre supera los 8 caracteres de DOS 8.3."
        echo

        suma=$(printf '%s' "$nombre" | cksum | awk '{print $1}')
        sufijo=$(printf '%02X' $((suma % 256)))

        KOLIBRI_NAME="${KOLIBRI_NAME:0:6}${sufijo}"

    fi

    # ============================================================
    # ARCHIVO BIN TEMPORAL RENOMBRADO
    # ============================================================

    KOLIBRI_BIN="$KOLIBRIOS_DIR/${KOLIBRI_NAME}"

    rm -f "$KOLIBRI_BIN"

    cp -f "$KOLIBRIOS_FILE" "$KOLIBRI_BIN"

    if [[ $? -ne 0 ]]; then
        echo -e "${RED}ERROR:${NC} No se pudo preparar el BIN."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    # ============================================================
    # IMAGEN KOLIBRIOS PERSISTENTE
    # (ruta en la CONFIGURACIÓN de cabecera)
    # ============================================================

    KOLIBRIOS_IMAGE="$KOLIBRIOS_IMAGE_PERSISTENTE"

    # ============================================================
    # PARTICIÓN FAT32
    #
    # GPT:
    #
    # sector inicial = 2048
    # sector         = 512 bytes
    #
    # 2048 * 512 = 1048576
    # ============================================================

    KOLIBRIOS_OFFSET=$((2048 * 512))

    # mtools permite acceder directamente a una partición
    # dentro de una imagen mediante:
    #
    # imagen@@offset
    #
    KOLIBRIOS_MTOOLS_IMAGE="${KOLIBRIOS_IMAGE}@@${KOLIBRIOS_OFFSET}"

    echo "======================================================================"
    echo " PREPARANDO KOLIBRIOS"
    echo "======================================================================"
    echo
    echo "ASM:"
    echo "  $ASM_FILE"
    echo
    echo "BIN original:"
    echo "  $KOLIBRIOS_FILE"
    echo
    echo "BIN renombrado:"
    echo "  $KOLIBRI_BIN"
    echo
    echo "Nombre dentro de KolibriOS:"
    echo "  $KOLIBRI_NAME"
    echo
    echo "Imagen persistente:"
    echo "  $KOLIBRIOS_IMAGE"
    echo
    echo "Offset FAT32:"
    echo "  $KOLIBRIOS_OFFSET"
    echo

    if [[ ! -f "$KOLIBRIOS_IMAGE" ]]; then
        echo -e "${RED}ERROR:${NC} No existe la imagen persistente:"
        echo
        echo "  $KOLIBRIOS_IMAGE"
        echo
        rm -f "$KOLIBRI_BIN"
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    # ============================================================
    # 1. VERIFICAR IMAGEN
    # ============================================================

    echo "1. Verificando imagen..."

    if ! mdir \
        -i "$KOLIBRIOS_MTOOLS_IMAGE" \
        "::" >/dev/null 2>&1; then

        echo -e "${RED}ERROR:${NC} No se pudo abrir la partición FAT32."
        echo
        echo "Imagen:"
        echo "  $KOLIBRIOS_IMAGE"
        echo
        echo "Offset:"
        echo "  $KOLIBRIOS_OFFSET"
        echo

        rm -f "$KOLIBRI_BIN"

        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo "✔ Imagen FAT32 accesible."
    echo

    # ============================================================
    # 2. COPIAR BIN A KOLIBRIOS
    # ============================================================

    echo "2. Copiando BIN a KolibriOS..."

    mcopy -o \
        -i "$KOLIBRIOS_MTOOLS_IMAGE" \
        "$KOLIBRI_BIN" \
        "::${KOLIBRI_NAME}"

    if [[ $? -ne 0 ]]; then
        echo -e "${RED}ERROR:${NC} No se pudo copiar el BIN."
        echo
        rm -f "$KOLIBRI_BIN"
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo "✔ BIN incorporado."
    echo

    # ============================================================
    # 3. EXTRAER AUTORUN.DAT
    # ============================================================

    echo "3. Preparando AUTORUN.DAT..."

    AUTORUN_TMP="$KOLIBRIOS_DIR/AUTORUN_${KOLIBRI_NAME}_tmp.DAT"

    # Muy importante:
    # eliminarlo antes para que mcopy nunca pregunte overwrite.
    rm -f "$AUTORUN_TMP"

    mcopy \
        -i "$KOLIBRIOS_MTOOLS_IMAGE" \
        "::/KOLIBRIOS/SETTINGS/AUTORUN.DAT" \
        "$AUTORUN_TMP"

    if [[ $? -ne 0 ]]; then
        echo -e "${RED}ERROR:${NC} No se pudo extraer AUTORUN.DAT."
        rm -f "$AUTORUN_TMP"
        rm -f "$KOLIBRI_BIN"
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo "✔ AUTORUN.DAT extraído."
    echo

    # ============================================================
    # 4. AÑADIR PROGRAMA AL AUTORUN
    # ============================================================

    echo "4. Configurando AUTORUN..."

    # Evitar acumulación de entradas duplicadas en la imagen
    # persistente.

    AUTORUN_LINE="/SYS/${KOLIBRI_NAME} \"\" 100"

    # Normalizar CRLF por seguridad.
    sed -i 's/\r$//' "$AUTORUN_TMP"

    if ! grep -Fqx "$AUTORUN_LINE" "$AUTORUN_TMP"; then

        if ! grep -Fqx '### Mini Entorno ASM ###' "$AUTORUN_TMP"; then
            printf '\n### Mini Entorno ASM ###\n' >> "$AUTORUN_TMP"
        fi

        printf '%s\n' "$AUTORUN_LINE" >> "$AUTORUN_TMP"

        echo "✔ AUTORUN configurado."

    else

        echo "✔ El programa ya estaba registrado en AUTORUN."
        echo "  No se agregó una entrada duplicada."

    fi

    echo

    # ============================================================
    # 5. ESCRIBIR AUTORUN.DAT EN LA IMAGEN
    # ============================================================

    echo "5. Escribiendo AUTORUN.DAT en la imagen..."

    mcopy -o \
        "$AUTORUN_TMP" \
        -i "$KOLIBRIOS_MTOOLS_IMAGE" \
        "::/KOLIBRIOS/SETTINGS/AUTORUN.DAT"

    if [[ $? -ne 0 ]]; then
        echo -e "${RED}ERROR:${NC} No se pudo escribir AUTORUN.DAT."
        rm -f "$AUTORUN_TMP"
        rm -f "$KOLIBRI_BIN"
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo "✔ AUTORUN.DAT actualizado."
    echo

    rm -f "$AUTORUN_TMP"

    # ============================================================
    # 6. VERIFICAR IMAGEN
    # ============================================================

    echo "6. Verificando imagen..."
    echo

    echo "Contenido de la raíz:"

    mdir \
        -i "$KOLIBRIOS_MTOOLS_IMAGE" \
        "::"

    echo
    echo "Últimas líneas de AUTORUN.DAT:"
    echo

    mtype \
        -i "$KOLIBRIOS_MTOOLS_IMAGE" \
        "::/KOLIBRIOS/SETTINGS/AUTORUN.DAT" | tail -n 8

    echo
    echo "======================================================================"
    echo " KOLIBRIOS LISTO"
    echo "======================================================================"
    echo
    echo "Programa:"
    echo "  $KOLIBRI_NAME"
    echo
    echo "Imagen:"
    echo "  $KOLIBRIOS_IMAGE"
    echo
    echo "El programa será ejecutado automáticamente por KolibriOS."
    echo

    # ============================================================
    # 7. EJECUTAR QEMU
    # ============================================================

    read -rp "Presiona ENTER para arrancar KolibriOS en QEMU..."

    qemu-system-i386 \
        -enable-kvm \
        -cpu host \
        -m "$KOLIBRIOS_QEMU_MEM" \
        -drive "file=${KOLIBRIOS_IMAGE},format=raw,if=ide" \
        -boot c \
        -display gtk

    echo
    echo "QEMU finalizado."
    echo

    # ============================================================
    # LIMPIAR BIN RENOMBRADO TEMPORAL
    # ============================================================

    rm -f "$KOLIBRI_BIN"

    read -rp "Presiona ENTER para continuar..."
}

# ============================================================================
# MENÚ PRINCIPAL
# ============================================================================

# ============================================================================
# 9) MOVER FILE → KOLIBRIOS
# ============================================================================

function mover_file_kolibrios() {

    clear

    echo -e "${CYAN}"
    echo " ╔======================================================================╗"
    echo " ║                                                                      ║"
    echo " ║                 FILE → KOLIBRIOS                                    ║"
    echo " ║                                                                      ║"
    echo " ╚======================================================================╝"
    echo -e "${NC}"

    # ============================================================
    # COMPROBAR TARGET
    # ============================================================

    if [[ "$KOLIBRIOS_MODE" != true ]]; then
        echo -e "${RED}ERROR:${NC} El target actual no es KolibriOS."
        echo
        echo "Selecciona:"
        echo "7) Cambiar formato / target"
        echo "3) KolibriOS x86"
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    # ============================================================
    # COMPROBAR HERRAMIENTAS
    # ============================================================

    for cmd in mcopy mdir; do
        if ! command -v "$cmd" >/dev/null 2>&1; then
            echo -e "${RED}ERROR:${NC} Falta el comando: $cmd"
            echo
            echo "Instálalo con:"
            echo
            echo "  sudo apt install mtools"
            echo
            read -rp "Presiona ENTER para continuar..."
            return
        fi
    done

    # ============================================================
    # IMAGEN PERSISTENTE
    # (ruta en la CONFIGURACIÓN de cabecera)
    # ============================================================

    KOLIBRIOS_IMAGE="$KOLIBRIOS_IMAGE_PERSISTENTE"

    KOLIBRIOS_OFFSET=$((2048 * 512))

    KOLIBRIOS_MTOOLS_IMAGE="${KOLIBRIOS_IMAGE}@@${KOLIBRIOS_OFFSET}"

    if [[ ! -f "$KOLIBRIOS_IMAGE" ]]; then
        echo -e "${RED}ERROR:${NC} No existe la imagen:"
        echo
        echo "  $KOLIBRIOS_IMAGE"
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    # ============================================================
    # COMPROBAR IMAGEN FAT32
    # ============================================================

    echo "Imagen:"
    echo "  $KOLIBRIOS_IMAGE"
    echo
    echo "Offset FAT32:"
    echo "  $KOLIBRIOS_OFFSET"
    echo

    echo "1. Verificando imagen..."

    if ! mdir -i "$KOLIBRIOS_MTOOLS_IMAGE" "::" >/dev/null 2>&1; then
        echo -e "${RED}ERROR:${NC} No se pudo acceder a la partición FAT32."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo "✔ Imagen FAT32 accesible."
    echo

    # ============================================================
    # MOSTRAR ARCHIVOS DISPONIBLES
    # ============================================================

    echo "2. Archivos disponibles:"
    echo

    mapfile -t archivos < <(
        find "$WORKDIR" -maxdepth 1 -type f -printf '%f\n' |
        sort
    )

    if [[ ${#archivos[@]} -eq 0 ]]; then
        echo -e "${YELLOW}No hay archivos en:${NC}"
        echo
        echo "  $WORKDIR"
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    for i in "${!archivos[@]}"; do
        printf "  %2d) %s\n" "$((i + 1))" "${archivos[$i]}"
    done

    echo
    read -rp "Número del archivo a copiar: " seleccion

    if [[ ! "$seleccion" =~ ^[0-9]+$ ]]; then
        echo
        echo -e "${RED}ERROR:${NC} Selección inválida."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    if (( seleccion < 1 || seleccion > ${#archivos[@]} )); then
        echo
        echo -e "${RED}ERROR:${NC} Número fuera de rango."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    ARCHIVO_SELECCIONADO="${archivos[$((seleccion - 1))]}"

    ARCHIVO_LOCAL="$WORKDIR/$ARCHIVO_SELECCIONADO"

    if [[ ! -f "$ARCHIVO_LOCAL" ]]; then
        echo
        echo -e "${RED}ERROR:${NC} El archivo seleccionado no existe."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    # ============================================================
    # COPIAR ARCHIVO
    # ============================================================

    echo
    echo "3. Copiando archivo a KolibriOS..."
    echo
    echo "Archivo:"
    echo "  $ARCHIVO_LOCAL"
    echo
    echo "Destino:"
    echo "  ::$ARCHIVO_SELECCIONADO"
    echo

    if ! mcopy -o \
        -i "$KOLIBRIOS_MTOOLS_IMAGE" \
        "$ARCHIVO_LOCAL" \
        "::/$ARCHIVO_SELECCIONADO"
    then
        echo
        echo -e "${RED}ERROR:${NC} No se pudo copiar el archivo."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo "✔ Archivo incorporado."
    echo

    # ============================================================
    # VERIFICAR ARCHIVO
    # ============================================================

    echo "4. Verificando archivo en KolibriOS..."
    echo

    if ! mdir \
        -i "$KOLIBRIOS_MTOOLS_IMAGE" \
        "::/$ARCHIVO_SELECCIONADO"
    then
        echo
        echo -e "${YELLOW}ADVERTENCIA:${NC} No se pudo verificar el archivo."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo
    echo "======================================================================"
    echo " ARCHIVO COPIADO A KOLIBRIOS"
    echo "======================================================================"
    echo
    echo "Archivo:"
    echo "  $ARCHIVO_SELECCIONADO"
    echo
    echo "Imagen:"
    echo "  $KOLIBRIOS_IMAGE"
    echo
    echo "Ruta dentro de KolibriOS:"
    echo "  /$ARCHIVO_SELECCIONADO"
    echo

    read -rp "Presiona ENTER para continuar..."
}


# ============================================================================
# EJECUTAR EN FREEDOS (imagen plantilla + AUTOEXEC + QEMU)
# ============================================================================

function ejecutar_freedos() {

    clear

    echo -e "${CYAN}"
    echo " ╔======================================================================╗"
    echo " ║                                                                      ║"
    echo " ║                 COM → FREEDOS                                       ║"
    echo " ║                                                                      ║"
    echo " ╚======================================================================╝"
    echo -e "${NC}"

    if [[ "$FREEDOS_MODE" != true ]]; then
        echo -e "${RED}ERROR:${NC} El target actual no es FreeDOS."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    if [[ -z "$ASM_FILE" ]]; then
        echo -e "${RED}ERROR:${NC} No hay archivo ASM seleccionado."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    nombre="${ASM_FILE%.*}"

    COM_FILE="$WORKDIR/${nombre}.com"

    if [[ ! -f "$COM_FILE" ]]; then
        echo -e "${RED}ERROR:${NC} No existe el .COM:"
        echo
        echo "  $COM_FILE"
        echo
        echo "Primero ejecuta la opción 2."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    # ============================================================
    # COMPROBAR HERRAMIENTAS
    # ============================================================

    for cmd in mcopy mdir mtype qemu-system-i386; do
        if ! command -v "$cmd" >/dev/null 2>&1; then
            echo -e "${RED}ERROR:${NC} Falta el comando: $cmd"
            echo
            echo "Instálalo con:"
            echo
            echo "  sudo apt install mtools qemu-system-x86"
            echo
            read -rp "Presiona ENTER para continuar..."
            return
        fi
    done

    # ============================================================
    # NOMBRE 8.3 (misma regla que KolibriOS)
    # ============================================================

    FD_NAME="$(basename "$nombre")"

    FD_NAME="$(printf '%s' "$FD_NAME" | \
        tr '[:lower:]' '[:upper:]')"

    FD_NAME="$(printf '%s' "$FD_NAME" | \
        sed 's/[^A-Z0-9_$-]/_/g')"

    if [[ ${#FD_NAME} -gt 8 ]]; then

        suma=$(printf '%s' "$nombre" | cksum | awk '{print $1}')
        sufijo=$(printf '%02X' $((suma % 256)))

        FD_NAME="${FD_NAME:0:6}${sufijo}"

    fi

    # ============================================================
    # IMAGEN DE TRABAJO DESDE LA PLANTILLA
    # (disquete FAT12: sin offset de partición)
    # ============================================================

    if [[ ! -f "$FREEDOS_TEMPLATE" ]]; then
        echo -e "${RED}ERROR:${NC} No existe la imagen plantilla de FreeDOS:"
        echo
        echo "  $FREEDOS_TEMPLATE"
        echo
        echo "Prepárala una sola vez: un disquete BOOTABLE de"
        echo "FreeDOS con KERNEL.SYS y COMMAND.COM (la imagen"
        echo "oficial de disquete de FreeDOS sirve tal cual),"
        echo "guardado con ese nombre."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    FREEDOS_IMAGE="$FREEDOS_DIR/freedos_${FD_NAME}_auto.img"

    cp -f "$FREEDOS_TEMPLATE" "$FREEDOS_IMAGE"

    if [[ $? -ne 0 ]]; then
        echo -e "${RED}ERROR:${NC} No se pudo crear la imagen de trabajo."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo "======================================================================"
    echo " PREPARANDO FREEDOS"
    echo "======================================================================"
    echo
    echo "COM:"
    echo "  $COM_FILE"
    echo
    echo "Nombre dentro de FreeDOS:"
    echo "  ${FD_NAME}.COM"
    echo
    echo "Imagen de trabajo:"
    echo "  $FREEDOS_IMAGE"
    echo

    # ============================================================
    # 1. COPIAR EL .COM A LA IMAGEN
    # ============================================================

    echo "1. Copiando el .COM a la imagen..."

    mcopy -o \
        -i "$FREEDOS_IMAGE" \
        "$COM_FILE" \
        "::${FD_NAME}.COM"

    if [[ $? -ne 0 ]]; then
        echo -e "${RED}ERROR:${NC} No se pudo copiar el .COM."
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    echo "✔ COM incorporado."
    echo

    # ============================================================
    # 2. AUTOEXEC.BAT: EXTRAER (O CREAR) Y AÑADIR EL PROGRAMA
    # ============================================================

    echo "2. Preparando AUTOEXEC.BAT..."

    AUTOEXEC_TMP="$FREEDOS_DIR/AUTOEXEC_${FD_NAME}_tmp.BAT"

    rm -f "$AUTOEXEC_TMP"

    if ! mcopy \
        -i "$FREEDOS_IMAGE" \
        "::AUTOEXEC.BAT" \
        "$AUTOEXEC_TMP" 2>/dev/null; then

        # La plantilla puede no traer AUTOEXEC.BAT: se crea.
        : > "$AUTOEXEC_TMP"

    fi

    # Normalizar CRLF por seguridad.
    sed -i 's/\r$//' "$AUTOEXEC_TMP"

    if ! grep -Fqx "$FD_NAME" "$AUTOEXEC_TMP"; then

        if ! grep -Fqx 'REM ### Mini Entorno ASM ###' "$AUTOEXEC_TMP"; then
            printf 'REM ### Mini Entorno ASM ###\r\n' >> "$AUTOEXEC_TMP"
        fi

        printf '%s\r\n' "$FD_NAME" >> "$AUTOEXEC_TMP"

        echo "✔ AUTOEXEC configurado."

    else

        echo "✔ El programa ya estaba en AUTOEXEC.BAT."

    fi

    mcopy -o \
        "$AUTOEXEC_TMP" \
        -i "$FREEDOS_IMAGE" \
        "::AUTOEXEC.BAT"

    if [[ $? -ne 0 ]]; then
        echo -e "${RED}ERROR:${NC} No se pudo escribir AUTOEXEC.BAT."
        rm -f "$AUTOEXEC_TMP"
        echo
        read -rp "Presiona ENTER para continuar..."
        return
    fi

    rm -f "$AUTOEXEC_TMP"

    echo "✔ AUTOEXEC.BAT actualizado."
    echo

    # ============================================================
    # 3. VERIFICAR Y ARRANCAR QEMU
    # ============================================================

    echo "3. Contenido del disquete:"
    echo

    mdir -i "$FREEDOS_IMAGE" "::"

    echo
    echo "======================================================================"
    echo " FREEDOS LISTO"
    echo "======================================================================"
    echo
    echo "El programa ${FD_NAME}.COM se ejecutará al arrancar."
    echo

    read -rp "Presiona ENTER para arrancar FreeDOS en QEMU..."

    qemu-system-i386 \
        -enable-kvm \
        -cpu host \
        -m "$FREEDOS_QEMU_MEM" \
        -drive "file=${FREEDOS_IMAGE},format=raw,if=floppy" \
        -boot a \
        -display gtk

    echo
    echo "QEMU finalizado."
    echo

    read -rp "Presiona ENTER para continuar..."
}

function menu() {

    clear

    echo -e "${CYAN}"
    echo " ╔======================================================================╗"
    echo " ║                                                                      ║"
    echo " ║                 Mini entorno ASM - BASH                              ║"
    echo " ║                                                  v.1.4               ║"
    echo " ╚======================================================================╝"
    echo -e "${NC}"

    echo -e "\e[1;34mArchivo:\e[0m \e[1;32m${ASM_FILE:-<ninguno>}\e[0m"
    echo -e "\e[1;34mTarget :\e[0m \e[1;32m${TARGET_NAME:-Linux x86-64}\e[0m"
    echo -e "\e[1;34mFormato:\e[0m \e[1;32m${FORMAT:-elf64}\e[0m"
    echo -e "\e[1;34mEnsambl:\e[0m \e[1;32m${ASSEMBLER_NAME:-NASM}\e[0m"
    echo -e "\e[1;34mRuta   :\e[0m \e[1;32m$WORKDIR\e[0m"

    echo "===================================================="
    echo "1) Crear / Editar archivo .asm"
    echo "2) Compilar archivo .asm"
    echo "3) Enlazar archivo objeto"
    echo "4) Ejecutar / Probar programa"
    echo "5) Ingeniería Inversa (reverse.sh)"
    echo "6) Limpiar archivos"
    echo "7) Cambiar formato / target"
    echo "8) Mover BIN → KolibriOS"
    echo "9) Mover FILE → KolibriOS"
    echo "10) Cambiar ensamblador (NASM/FASM)"
    echo "0) Salir"
    echo "===================================================="

    read -p $'\e[1;33mElige una opción:\e[0m ' opcion
}


# ============================================================================
# PROGRAMA PRINCIPAL
# ============================================================================

# Selección inicial del target.
# Por defecto queda Linux x86-64, pero se puede cambiar con la opción 7.
# No obligamos al usuario a elegirlo dos veces al arrancar.
echo ""
echo -e "${GREEN}✔ Mini Entorno ASM preparado.${NC}"
echo -e "${CYAN}Target inicial:${NC} $TARGET_NAME"
echo -e "${CYAN}Directorio de trabajo:${NC} $WORKDIR"
echo ""

while true; do

    menu

    case "$opcion" in

        # ====================================================================
        # 1) CREAR / EDITAR
        # ====================================================================

        1)
            read -p "Nombre del archivo ASM (sin extensión): " nombre

            if [[ -z "$nombre" ]]; then
                echo -e "${YELLOW}Nombre vacío. Operación cancelada.${NC}"
                read -p "Presiona ENTER para continuar..."
                continue
            fi

            # Evitar que una ruta introducida accidentalmente salga del
            # directorio de proyectos.
            if [[ "$nombre" == */* ]]; then
                echo -e "${YELLOW}Usa solamente el nombre del archivo, sin rutas.${NC}"
                read -p "Presiona ENTER para continuar..."
                continue
            fi

            ASM_FILE="${nombre}.asm"
            OBJ_FILE="${nombre}.o"
            EXE_FILE="${nombre}"
            KOLIBRIOS_FILE="$WORKDIR/$nombre"

            nano "$ASM_FILE"
            ;;

        # ====================================================================
        # 2) COMPILAR / ENSAMBLAR
        # ====================================================================

        2)

            if [[ ! -f "$ASM_FILE" ]]; then
                echo ""
                echo -e "${YELLOW}No hay archivo ASM para compilar.${NC}"
                echo "Primero utiliza la opción 1."
                echo ""
                read -p "Presiona ENTER para continuar..."
                continue
            fi

            echo ""
            echo "=============================================="
            echo " COMPILANDO ASM"
            echo "=============================================="
            echo "Archivo : $ASM_FILE"
            echo "Target  : $TARGET_NAME"
            echo "Formato : $FORMAT"
            echo "=============================================="
            echo ""

            nombre="${ASM_FILE%.*}"

            # ================================================================
            # KOLIBRIOS
            # ================================================================

            if [[ "$KOLIBRIOS_MODE" == true ]]; then

                KOLIBRIOS_FILE="$WORKDIR/$nombre"

                echo "Target KolibriOS detectado."
                echo ""
                echo "NASM → BIN plano de 32 bits"
                echo "Salida: $KOLIBRIOS_FILE"
                echo ""

                # IMPORTANTE:
                # KolibriOS utiliza una imagen binaria plana.
                # No se usa ELF, .o ni ld.
                if [[ "$ASSEMBLER" == "fasm" ]]; then
                    fasm "$ASM_FILE" "$KOLIBRIOS_FILE"
                else
                    nasm -f bin "$ASM_FILE" -o "$KOLIBRIOS_FILE"
                fi

                if [[ $? -eq 0 ]]; then

                    echo ""
                    echo -e "${GREEN}✔ Compilación KolibriOS exitosa.${NC}"
                    echo ""
                    echo "Archivo generado:"
                    echo "  $KOLIBRIOS_FILE"
                    echo ""
                    echo "Información del archivo:"
                    file "$KOLIBRIOS_FILE"
                    echo ""
                    echo "Tamaño:"
                    stat -c '%s bytes' "$KOLIBRIOS_FILE" 2>/dev/null || wc -c < "$KOLIBRIOS_FILE"
                    echo ""
                    echo "NOTA:"
                    echo "Este BIN no es un ejecutable Linux."
                    echo "Debe ejecutarse dentro de KolibriOS."
                    echo ""

                else

                    echo ""
                    echo -e "${RED}✘ Error de NASM al generar el BIN de KolibriOS.${NC}"
                    echo ""

                fi

            # ================================================================
            # FREEDOS
            # ================================================================

            elif [[ "$FREEDOS_MODE" == true ]]; then

                echo "Generando ejecutable FreeDOS .COM..."
                echo ""

                if [[ "$ASSEMBLER" == "fasm" ]]; then
                    fasm "$ASM_FILE" "${nombre}.com"
                else
                    nasm -f bin "$ASM_FILE" -o "${nombre}.com"
                fi

                if [[ $? -eq 0 ]]; then

                    echo ""
                    echo -e "${GREEN}✔ Compilación exitosa (.COM generado).${NC}"
                    echo "Archivo: $WORKDIR/${nombre}.com"
                    echo ""

                else

                    echo ""
                    echo -e "${RED}✘ Error en compilación FreeDOS.${NC}"
                    echo ""

                fi

            # ================================================================
            # LINUX ELF32 / ELF64
            # ================================================================

            else

                if [[ "$ASSEMBLER" == "fasm" ]]; then
                    fasm "$ASM_FILE" "$OBJ_FILE"
                else
                    nasm -f "$FORMAT" "$ASM_FILE" -o "$OBJ_FILE"
                fi

                if [[ $? -eq 0 ]]; then

                    echo ""
                    echo -e "${GREEN}✔ Ensamblado NASM exitoso.${NC}"
                    echo ""
                    echo "Objeto generado:"
                    echo "  $WORKDIR/$OBJ_FILE"
                    echo ""
                    file "$OBJ_FILE"
                    echo ""

                else

                    echo ""
                    echo -e "${RED}✘ Error en compilación NASM.${NC}"
                    echo ""

                fi

            fi

            read -p "Presiona ENTER para continuar..."
            ;;

        # ====================================================================
        # 3) ENLAZAR
        # ====================================================================

        3)

            if [[ "$KOLIBRIOS_MODE" == true ]]; then

                echo ""
                echo -e "${CYAN}Target: KolibriOS x86${NC}"
                echo ""
                echo "El formato BIN de KolibriOS es una imagen binaria plana."
                echo "No se genera .o y no se utiliza ld."
                echo ""
                echo -e "${GREEN}✔ No es necesario enlazar.${NC}"
                echo "El archivo generado por NASM ya es el BIN final."
                echo ""

            elif [[ "$FREEDOS_MODE" == true ]]; then

                echo ""
                echo "El formato FreeDOS .COM tampoco requiere enlazador."
                echo "El .COM generado ya es el ejecutable final."
                echo ""

            elif [[ -f "$OBJ_FILE" ]]; then

                echo "Enlazando $OBJ_FILE..."
                echo ""

                ld $LD_FLAGS "$OBJ_FILE" -o "$EXE_FILE"

                if [[ $? -eq 0 ]]; then
                    chmod +x "$EXE_FILE"
                    echo -e "${GREEN}✔ Enlace exitoso.${NC}"
                    echo "Ejecutable: $WORKDIR/$EXE_FILE"
                    echo ""
                    file "$EXE_FILE"
                else
                    echo -e "${RED}✘ Error en enlace.${NC}"
                fi

            else

                echo ""
                echo "No hay archivo objeto para enlazar."
                echo "Primero utiliza la opción 2."
                echo ""

            fi

            read -p "Presiona ENTER para continuar..."
            ;;

        # ====================================================================
        # 4) EJECUTAR / PROBAR
        # ====================================================================

        4)

            clear

            echo -e "${CYAN}"
            echo " ╔======================================================================╗"
            echo " ║                                                                      ║"
            echo " ║                 EJECUTAR / PROBAR ASM                                ║"
            echo " ║                                                                      ║"
            echo " ╚======================================================================╝"
            echo -e "${NC}"

            # ================================================================
            # KOLIBRIOS
            # ================================================================

            if [[ "$KOLIBRIOS_MODE" == true ]]; then

                if [[ -n "$ASM_FILE" ]]; then
                    nombre="${ASM_FILE%.*}"
                    KOLIBRIOS_FILE="$WORKDIR/$nombre"
                fi

                if [[ -f "$KOLIBRIOS_FILE" ]]; then

                    echo -e "${GREEN}✔ BIN KolibriOS encontrado.${NC}"
                    echo ""
                    echo "Archivo:"
                    echo "  $KOLIBRIOS_FILE"
                    echo ""
                    file "$KOLIBRIOS_FILE"
                    echo ""
                    echo "Este archivo no puede ejecutarse directamente como programa Linux."
                    echo ""
                    echo "Para probarlo:"
                    echo "  1. Arranca KolibriOS."
                    echo "  2. Copia el BIN al sistema de archivos de KolibriOS."
                    echo "  3. Ejecútalo desde KolibriOS."
                    echo ""
                    echo "También puedes utilizar QEMU con una imagen de KolibriOS"
                    echo "que tenga el BIN incorporado."

                else

                    echo -e "${YELLOW}No se encontró un BIN de KolibriOS.${NC}"
                    echo "Primero utiliza la opción 2 para ensamblar."
                    echo ""

                fi

            # ================================================================
            # FREEDOS
            # ================================================================

            elif [[ "$FREEDOS_MODE" == true ]]; then

                ejecutar_freedos

            # ================================================================
            # LINUX ELF
            # ================================================================

            else

                if [[ -n "$EXE_FILE" && -f "$WORKDIR/$EXE_FILE" ]]; then

                    echo "Ejecutable actual:"
                    echo "  $WORKDIR/$EXE_FILE"
                    echo ""

                    "$WORKDIR/$EXE_FILE"

                else

                    ejecutables=()

                    while IFS= read -r -d '' exe; do
                        ejecutables+=("$(basename "$exe")")
                    done < <(
                        find "$WORKDIR" \
                            -maxdepth 1 \
                            -type f \
                            -executable \
                            ! -name "*.o" \
                            ! -name "*.sh" \
                            ! -name "*.asm" \
                            ! -name "*.com" \
                            -print0
                    )

                    if [[ ${#ejecutables[@]} -eq 0 ]]; then

                        echo "No hay ejecutables Linux disponibles."
                        echo "Primero ensambla y enlaza un programa."

                    else

                        echo "Ejecutables disponibles:"
                        echo ""

                        i=1
                        for exe in "${ejecutables[@]}"; do
                            echo "  $i) $exe"
                            ((i++))
                        done

                        echo ""

                        read -p "Selecciona un número para ejecutar: " opcion_exec

                        if [[ "$opcion_exec" =~ ^[0-9]+$ ]] &&
                           [ "$opcion_exec" -ge 1 ] &&
                           [ "$opcion_exec" -le ${#ejecutables[@]} ]; then

                            seleccionado="${ejecutables[$((opcion_exec-1))]}"

                            echo ""
                            echo "Ejecutando: $seleccionado"
                            echo ""

                            "$WORKDIR/$seleccionado"

                        else

                            echo "Opción no válida."

                        fi

                    fi

                fi

            fi

            echo ""
            read -p "Presiona ENTER para continuar..."
            ;;

        # ====================================================================
        # 5) INGENIERÍA INVERSA
        # ====================================================================

        5)

            if [[ -f "$ASM_HOME/reverse.sh" ]]; then
                bash "$ASM_HOME/reverse.sh"
            else
                echo "No se encontró reverse.sh en $ASM_HOME/"
            fi

            read -p "Presiona ENTER para continuar..."
            ;;

        # ====================================================================
        # 6) LIMPIAR
        # ====================================================================

        6)

            echo ""
            echo "Limpiando archivos generados..."
            echo ""

            # Objetos Linux
            [[ -n "$OBJ_FILE" ]] && rm -f "$OBJ_FILE"

            # Ejecutable Linux
            [[ -n "$EXE_FILE" ]] && rm -f "$EXE_FILE"

            # BIN KolibriOS
            [[ -n "$KOLIBRIOS_FILE" ]] && rm -f "$KOLIBRIOS_FILE"

            # DOS COM
            if [[ -n "$ASM_FILE" ]]; then
                nombre="${ASM_FILE%.*}"
                rm -f "${nombre}.com"
            fi

            echo -e "${GREEN}✔ Archivos generados eliminados.${NC}"
            echo ""

            read -p "Presiona ENTER para continuar..."
            ;;

        # ====================================================================
        # 7) CAMBIAR TARGET
        # ====================================================================

        7)

            elegir_formato
            ;;

        # ====================================================================
        # 8) MOVER BIN → KOLIBRIOS
        # ====================================================================
        8)

            mover_bin_kolibrios
            ;;

        # ====================================================================
        # 9) MOVER FILE → KOLIBRIOS
        # ====================================================================
        9)

            mover_file_kolibrios
            ;;

        # ====================================================================
        # 10) CAMBIAR ENSAMBLADOR
        # ====================================================================
        10)

            elegir_ensamblador
            ;;

        # ====================================================================
        # 0) SALIR
        # ====================================================================

        0)

            echo ""
            echo "Saliendo del Mini Entorno ASM..."
            exit 0
            ;;

        *)

            echo ""
            echo -e "${YELLOW}Opción inválida.${NC}"
            read -p "Presiona ENTER para continuar..."
            ;;

    esac

done
