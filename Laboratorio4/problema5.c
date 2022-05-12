/*
Autor:         Kevin Orellana
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:      gcc -o problema5.out problema5.c -lm
Fecha:         10 de mayo de 2022
Librerías:     stdio, math
Resumen:       Se resuelve el problema 5 del laboratorio 4 de Lab.Simulación donde se solita
               crear un programa que encuentre el factorial de un numero entero ingresado.
*/

//Librerias
#include <stdio.h>

//Se utiliza la función factorial
long factorial(int);

int main()
{
    //Se declara la variable "factori" que almacenará el número digitado por el usuario 
    //para luego obtener el factorial
    int factori;
    //Para solicitar el dígito
    printf("Digite un número para hallar su factorial\n");
    //Se almacena el número en la variable fact
    scanf("%d",&factori);
    //Se obtiene el factorial del número propuesto
    printf("El factorial de %d es: %ld\n", factori, factorial(factori));

    return 0;
}

//Ahora utilizamos la función recursiva para que devuelva el factorial de un número
long factorial(int n)
{
    if (n == 0){
        return 1;
    }else{
        return(n * factorial(n-1));
    }
}