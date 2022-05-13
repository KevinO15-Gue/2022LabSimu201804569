/*
Autor:          Kevin Orellana
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o problema1.out problema1.c 
Fecha:          04 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Se resuelve el problema 1 del laboratorio 4 de Simulación
*/
//librerias
#include <stdio.h>
#include <stdlib.h>

void main(){
    //Defino la variable opcion e inicializo
    //Esta variable me va a indicar el tipo de orden(descendente o ascendente)
    char opcion;
    //Ahora voy a inicializar y a ingresar todos los elementos del vector,
    int n=10;
    //Definimos para el tipo ascendente la variable U y F para descendente
    int U[n];
    puts("\nvector inicial\n");
    for (int i = 0; i < 10; i++)
    {
        printf("elemento n° %d:     ", i+1);
        scanf("%i",&U[i]);
    }
    //Utilizando el método Burbuja para ordenar
    puts("\nordenando");
    int interruptor = 1;
    int pasada, j;
    //Generamos un bucle para controlar la cantidad de pasadas
    for (pasada = 0; pasada < 10-1 && interruptor; pasada++)
    {
        interruptor = 0;
        //Conduce el camino por el vector
        for (j = 0; j < 10-pasada-1; j++)
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
    //Ahora vamos a crear el menú principal
    interruptor = 1;
    //loop que va a mantener al programa dentro del menú principal
    while (interruptor)
    {
        printf("\nmenú principal\n");
        printf("\n(a).ordenar el vector de forma ascendentemente\n");
        printf("(d).ordenar el vector de forma descendentemente\n");
        printf("(r).sale del programa\n");
        printf("\nselecciona una opción...");
        scanf(" %c",&opcion);
        //Para ordenar el vector de forma ascendente seleccionamos la opcion "a"
        if (opcion=='a')
        {
            printf("\nHa sido seleccionado el órden de forma ascendente:\n");
            for (int i = 0; i < 10; i++)
            {
                printf("\nElemento n° %d: %i\n", i+1, U[i]);    
            }
        }
        //Para ordenar el vector de forma descendente seleccionamos la opción "d"
        else if (opcion=='d')
        {
            printf("\nHa sido seleccionado el órden descendente:\n");
            for ( int i = 0; i < 10; i++)
            {
                printf("\nelemento n° %d: %i\n", i+1, U[9-i]);
            }
        }
        //Para salir del programa seleccionamos la opción "r".
        else if (opcion=='r')
        {
            interruptor = 0;
        }
        //Si se ingresa un dato no adecuado automaticamente se observara en pantalla como opción no válida
        else
        {
            printf("\nópción no válida");
        }
        
    }
}