/*
Autor:          Kevin Orellana
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o Problema1.out Problema1.c
Fecha:          05 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Ejemplo de un programa que lee tres números reales del teclado y escribe en pantalla la media
aritmética únicamente de los números positivos.
*/
//Librerias
#include <stdio.h>

int main(){
//Se declara e inicializa las variables a utilizar
    float x = 0, med = 0;
    int i = 0, n = 0;
//Se valida el número de elementos ingresados hasta llegar a 3
    puts("Calculadora de la media aritmética");
    while (i<3)
    {   
//Se solicita al usuario ingresar los valores de los 3 números
        puts("Ingrese un número: ");
        scanf("%f",&x);
//Validar que sea positivo o 0
        if (x>=0)
        {
//Sí es verdadero, se procede a acumular la cantidad de elementos positivos y sumar su valor
            n++;
            med+=x;
        }
        i++;
    }
//Validar si todos lo números son negativos
    if (n==0)
    {
// Imprime el resulta si es verdadero 
        puts("Los valores ingresados son todos negativos");
    }else
    {
// Imprime la media aritmetica si es falso. 
        med=med/n;
        printf("La media aritmética de los datos es: %f \n", med);
    }
    
    
}