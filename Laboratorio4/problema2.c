/*
Autor:          Kevin Orellana
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o problema2.out problema2.c
Fecha:          05 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Se resuelve el problema 2 del laboratorio 4 de Lab.Simulación
*/

//librerias
#include <stdio.h>
#include <stdlib.h>

void main(){
    int n=5;
    int U[n];
    puts("\nvector inicial\n");
    for (int i = 0; i < n; i++)
    {
        printf("elemento n° %d:     ", i+1);
        scanf("%i",&U[i]);
    }
    //Utilizando el método Burbuja para ordenar
    puts("\nordenando");
    int interruptor = 1;
    int pasada, j;
    //Generamos un bucle para controlar la cantidad de pasadas
    for (pasada = 0; pasada < n-1 && interruptor; pasada++)
    {
        interruptor = 0;
        //Conduce el camino por el vector
        for (j = 0; j < n-pasada-1; j++)
        {
            //Con esto vamos a validar que el vector seleccionado sea mayor al que sigue
            if (U[j] > U[j+1])
            {
                int aux;
                printf("cambio %i %i a ",U[j],U[j+1]);
                aux = U[j];
                U[j] = U[j+1];
                U[j+1] = aux;
                printf("%i %i \n",U[j],U[j+1]);
            }
            interruptor = 1;
        }   
    }
    printf("\nimprime el vector en forma ascendente:\n");
        for (int i = 0; i < n; i++)
        {
            printf("\nelemento n° %d: %i", i+1, U[i]);    
        }
    printf("\n\n");
}