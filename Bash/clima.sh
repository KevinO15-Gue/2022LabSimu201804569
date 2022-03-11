#!/bin/bash
#curl wttr.in/Guatemala con este comando obtendremos el clima de Guatemala
curl -s wttr.in/Guatemala > ~/ejercicio_docker/valoresclima.sh 
        #Comando para almacenar toda la información en el archivo (valoresclima.sh).
head -n 7 ./valoresclima.sh #Este comando envia la señal para solo leer las primeras 7 líneas del archivo.
echo $leer
rm valoresclima.sh #Este comando elimina el archivo.