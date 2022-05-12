/*
Autor:         Kevin Orellana
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:      gcc -o problema3.out problema3.c -lm
Fecha:         07 de mayo de 2022
Librerías:     stdio, math
Resumen:       Se resuelve el problema 3 del laboratorio 4 de Lab.Simulación
*/

//librerias
#include <stdio.h>
#include <math.h>
void main(){
    //definimos las variables a utilizar
    //n: indica la dimensión del vector
    int n=3;
    //tenemos dos vectores de entrada A, B y el vector C es un vector de salida
    double A[n],B[n],C[n];
    //interruptor: bandera que me sirve para salir de un loop
    int interruptor = 1;
    //selección: indica la opción del menú que se desea realizar
    char opcion;
    //Utilizamos la siguiente función para ingresar los elementos (x,y,z) de cada vector
    puts("\nvector A(x,y,z)\n");
    for (int i = 0; i < n; i++)
    {
        printf("elemento n° %d:     ", i+1);
        scanf("%lf",&A[i]);
    }
    puts("\nvector B(x,y,z)\n");
    for (int i = 0; i < n; i++)
    {
        printf("elemento n° %d:     ", i+1);
        scanf("%lf",&B[i]);
    }
    //Ahora vamos a crear el menú principal
    interruptor = 1;
    //loop que va a mantener al programa dentro del menú principal
    while (interruptor)
    {
        printf("\nMenú Principal\n");
        printf("\n(a).calcular la magnitud de cada vector\n");
        printf("(b).calcular la suma de los vectores\n");
        printf("(c).calcular el producto escalar\n");
        printf("(d).calcular el producto vectorial\n");
        printf("(r).da la salida del programa\n");
        printf("\nselecciona una opción...");
        scanf(" %c",&opcion);

        //Para calcular la magnitud de los vectores A y B se selecciona la opción "a"
        if (opcion=='a')
        {
            double M1=sqrt(pow(A[0],2)+pow(A[1],2)+pow(A[2],2));
            printf("\nla magnitud del vector A es = %.2lf;",M1);
            double M2=sqrt(pow(B[0],2)+pow(B[1],2)+pow(B[2],2));
            printf("  B es = %.2lf",M2);
        }
        //Para calcular la suma de los vectores A y B se selecciona la opción "b"
        else if (opcion=='b')
        {
            for (int i = 0; i < n; i++)
            {
                C[i]=A[i]+B[i];
            }
            
            printf("\nla suma de los vectores es C(x,y,z) = (%.2lf,%.2lf,%.2lf)",C[0],C[1],C[2]);
        }
        //Para calcular la magnitud de los vectores A y B se selecciona la opción "c"
        else if (opcion=='c')
        {
            for (int i = 0; i < n; i++)
            {
                C[i]=A[i]*B[i];
            }
            printf("\nel producto escalar de A·B =(%.2lf,%.2lf,%.2lf)",C[0],C[1],C[2]);
        }
        //Para calcular la magnitud de los vectores A y B se selecciona la opción "d"
        else if (opcion=='d')
        {
            C[0]=A[1]*B[2]-A[2]*B[1];
            C[1]=A[2]*B[0]-A[0]*B[2];
            C[2]=A[0]*B[1]-A[1]*B[0];
            printf("\nel producto vectorial de AXB =(%.2lf,%.2lf,%.2lf)",C[0],C[1],C[2]);
        }
        //Para salir del programa se selecciona la opcion "r"
        else if (opcion=='r')
        {
            interruptor = 0;
        }
        //Si se ingresa un dato no adecuado automaticamente se observara en pantalla como opción no válida 
        //y luego regresa al menu
        else
        {
            printf("\nopción no válida");
        }
    }
}