/*
Autor:          Kevin Orellana
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o Problema3.out Problema3.c
Fecha:          05 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Ejemplo de un programa que calcule la raiz cuadrada entera por defecto de un número N 
positivo dado, R>0, tal que R^2<=N.
*/
//Librerias
#include <stdio.h>

int main() {
// Se definen e inicializan las variables
int n=0, r=1;           
//En esta parte, el usuario ingresa a un ciclo del cual solo puede salir si se cumple la condición                               
    do {                                                    
        puts("Ingrese un número entero positivo:");
        scanf("%d", &n);
    } while (n<=0);
 //El ciclo va aumentando el valor de r hasta dejar de cumplir con la condición
    while (r*r<=n) { r++; }     
//Cuando r*r >= n, se imprime r-1 que sería el número mayor que cumple la condición                        
    printf("La raíz entera aproximada es: %d \n", r-1);     
return 0;
}