/*
Autor:          Kevin Orellana
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o Problema2.out Problema2.c
Fecha:          05 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Ejemplo de un programa que lee un número indeterminado de alturas, que pare cuando
se ingrese una negativa y calucule la media, máximo y mínimo.
*/
//Librerias 
#include <stdio.h>

//Se declaran y se inicializan las variables:
int x=0, n=0, max=0, min=0;
float med=0;

int main(){
// Lee los datos ingresados
    puts("¡Bienvenido! Ingrese valores enteros de alturas y para terminar ingrese un valor negativo");
    puts("Ingrese una altura: ");
    scanf("%d", &x);
// Almacena el valor de altura en max y min
    max=x;
    min=x;
// Valida que la altura sea mayor a 0
    while (x>=0)
    {
// Acumula los datos de conteo y media para su uso final
        n++;
        med+=x;
// Valua si el valor ingresado es mayor al valor máximo en ese instante
        if (x>max)
        {
            max=x;
        }
// Valua si el valor ingresado es menor al valor mínimo de ese instante
        if (x<min)
        {
            x=min;
        }
// Lee los nuevos valores ingresados
        puts("Ingrese otra altura: ");
        scanf("%d", &x);
    }
// Verifica que el valor de n sea mayor a 0
    if (n==0)
    {
        puts("No ingresó alturas válidas");
    }
    else
    {
// Imprime la media, el valor máximo y mínimo
        printf("De los valores ingresados: La media es: %f, \n El valor máximo es: %d \n El valor mínimo es: %d \n", med/n, max, min);
    }
    

    return 0;
}