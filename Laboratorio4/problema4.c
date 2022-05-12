/*
Autor:         Kevin Orellana
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:      gcc -o problema4.out problema4.c -lm
Fecha:         09 de mayo de 2022
Librerías:     stdio, math
Resumen:       Se resuelve el problema 4 del laboratorio 4 de Lab.Simulación donde se solicita crear un programa 
               que solicite al usuario dos matrices de 3X3 almacenarlas como (matA, matB) y una constante.
*/

//librerias
#include <stdio.h>
#include <math.h>
void main()
{
    //Definir las variables a utilizar 
    //n: es la dimensión de la matriz nxn
    int n=3;
    //Las matrices de entrada son A y B 
    //La matriz de salida es C
    double A[n][n],B[n][n],C[n][n];
    //interruptor: bandera que me sirve para salir de un loop
    int interruptor = 1;
    //selección: indica que operación del menu se requiere realizar
    char opcion;
    //a: variable para hacer operaciones
    float a;
    puts("\ningrese el valor de la constante:     ");
    scanf("%f",&a);
    //Para ingresar los componentes de cada matriz
    puts("\nmatriz A(3x3)\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("elemento fila,columna (%d,%d):     ", i+1,j+1);
            scanf("%lf",&A[i][j]);
        }
    }
    puts("\nmatriz B(3x3)\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("elemento fila,columna (%d,%d):     ", i+1,j+1);
            scanf("%lf",&B[i][j]);
        }
    }
    //Creación del menú principal
    interruptor = 1;
    //loop que mantiene al programa dentro del menu
    while (interruptor)
    {
        printf("\nmenú principal\n");
        printf("\n(a).matriz A por constante\n");
        printf("(b).suma de las dos matrices\n");
        printf("(c).resta de las dos matrices\n");
        printf("(d).multiplicacion de las dos matrices\n");
        printf("(e).determinante de matriz A\n");
        printf("(f).transpuesta de matriz B\n");
        printf("(g).inversa de matriz A\n");
        printf("(h).reducción de Gauss de Matriz A\n");
        printf("(i).reducción de Gauss Jorgan de Matriz B\n");
        printf("(r).salir del programa\n");
        printf("\nselecciona una opción...\n");
        scanf(" %c",&opcion);
        //Si presiona a, calcula Matriz A por constante
        if (opcion=='a')
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    C[i][j]=a*A[i][j];
                }
                printf("[%.2lf  %.2lf  %.2lf]\n", C[i][0],C[i][1],C[i][2]);
            }    
        }
        //si presiona b, Suma de las dos matrices
        else if (opcion== 'b')
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    C[i][j]=A[i][j]+B[i][j];
                }
                printf("[%.2lf  %.2lf  %.2lf]\n", C[i][0],C[i][1],C[i][2]);
            }
        }
        //si presiona c, Resta de las dos matrices
        else if (opcion=='c')
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    C[i][j]=A[i][j]-B[i][j];
                }
                printf("[%.2lf  %.2lf  %.2lf]\n", C[i][0],C[i][1],C[i][2]);
            }
        }
        //si presiona d, Multiplicacion de las dos matrices
        else if (opcion=='d')
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    int suma =0;
                    for (int k = 0; k < n; k++)
                    {
                        suma +=A[i][k]*B[k][j];
                    }
                    C[i][j]=suma;
                }
            printf("[%.2lf  %.2lf  %.2lf]\n", C[i][0],C[i][1],C[i][2]);
            }
        } 
        //Para calcular el determinante de la matriz A  seleccionamos la opcion "e"
        else if (opcion=='e')
        {
            double Det = A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
            printf("\nEl determinande de la matriz A es: %.2lf\n",Det);  
        }
        //Para calcular la traspuesta de la matriz B seleccionamos la opcion "f"
        else if (opcion=='f')
        {
            for (int i = 0; i < n; i++)
            {
                printf("[%.2lf    %.2lf   %.2lf]\n",B[0][i],B[1][i],B[2][i]);
            }
        } 
        //Para calcular la inversa de la matriz Z seleccionamos la opcion "g"
        else if (opcion=='g')
        {
            C[0][0]=A[1][1]*A[2][2]-A[1][2]*A[2][1];
            C[1][0]=-A[1][0]*A[2][2]+A[1][2]*A[2][0];
            C[2][0]=A[1][0]*A[2][1]-A[1][1]*A[2][0];
            C[0][1]=-A[0][1]*A[2][2]+A[0][2]*A[2][1];
            C[1][1]=A[0][0]*A[2][2]-A[0][2]*A[2][0];
            C[2][1]=-A[0][0]*A[2][1]+A[0][2]*A[2][0];
            C[0][2]=A[0][1]*A[1][2]-A[0][2]*A[1][1];
            C[1][2]=-A[0][0]*A[1][2]+A[0][2]*A[1][0];
            C[2][2]=A[0][0]*A[1][1]-A[0][1]*A[1][0];
            double Det = A[0][0]*(A[1][1]*A[2][2]-A[1][2]*A[2][1])-A[0][1]*(A[1][0]*A[2][2]-A[1][2]*A[2][0])+A[0][2]*(A[1][0]*A[2][1]-A[1][1]*A[2][0]);
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    C[i][j]=C[i][j]/Det;
                }
                printf("[%.2lf    %.2lf   %.2lf]\n",C[i][0],C[i][1],C[i][2]);
            }
        } 
        //Para calcular la reducción de Gauss a la matriz A seleccionamos la opcion "h"
        else if (opcion=='h')
        {
            int aux1=A[1][0];
            for (int i = 0; i < n; i++)
            {
                C[0][i]=A[0][i]/A[0][0];
                C[1][i]=C[0][i]*aux1-A[1][i];
                C[2][i]=0;
            }
            C[1][2]=C[1][2]/C[1][1];
            C[2][2]=1;
            C[1][1]=1;
            for (int i = 0; i < n; i++)
            {
                printf("[%.2lf    %.2lf   %.2lf]\n",C[i][0],C[i][1],C[i][2]);
            }
        }
        //Para calcular la reducción de Gauss-Jordan de la matriz B seleccionamos la opcion "i"
        else if (opcion=='i')
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i==j)
                    {
                        C[i][j]=1;
                    }
                    else
                    {
                        C[i][j]=0;
                    }
                }
                printf("[%.2lf    %.2lf   %.2lf]\n",C[i][0],C[i][1],C[i][2]);    
            }
            
        }
        //Para salir del programa seleccionamos la opcion "r"
        else if (opcion=='r')
        {
            interruptor = 0;
        }
        //cualquier otra acción da el mensaje de opción no válida
        //y regresa al menu
        else
        {
            printf("\nopción no válida");
        }
    }
}