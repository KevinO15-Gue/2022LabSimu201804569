#!/bin/bash
: << 'Header'
Autor:           Kevin Virgilio Orellana Guerra
Carnet:          201804569
Tipo de archivo: Libreto para crear un archivo.c
Ejecución:       ./ejercicio2.sh
Resumen:         Archivo que crea encabezados de archivos de C.
Header

echo "Inserte el nombre del archivo:" #Hace aparecer el texto escrito entre comillas en la pantalla.
read Archivo #Hace leer lo que esta escrito dentro del archivo.
if [ -n $Archivo ]; then #Verifica si esta vacio el archivo o si posee algo dentro.
    echo "/*"> $Archivo".c" #Escribe /* en el archivo.c
    gcc --version > temporal #Ejecuta este comando para verificar la versión y así guardarlo en temporal
    leerversion=$(head -n 1 temporal) #Ejecuta en el archivo temporal la primera línea.
    echo "Ingrese Resumen:" #Hace aparecer el texto que esta entre comillas en la pantalla.
    read resumen #Lee lo que esta escrito.
    echo "Ingrese Entrada" #Hace aparecer el texto que esta entre comillas en la pantalla.
    read entrada  #Lee lo que esta escrito.
    echo "Ingrese Salida" #Hace aparecer el texto que esta entre comillas en la pantalla.
    read salida #Lee lo que esta escrito.
else
    echo "No se insertó nombre del archivo."
fi
rm temporal #Elimina el archivo temporal.
Archivo1=$Archivo".c"
cat << EOF > $Archivo1
/*
#"Autor:      $USER"
#"Compilador: $leerversion"
#"Compilado:  gcc $Archivo".c" -o $Archivo"
#"Fecha:      $(date +%D)"
#"Librerias:  stdio"
#"Resumen:    $resumen"
#"Entrada:    $entrada"
#"Salida:     $salida"
*/
//Librerias
#include <stdio.h>
//listar los pasos del pseudocódigo
EOF
exit 0 #Desactiva los mensajes de advertencias del sistema.