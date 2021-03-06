/*
Autor:          Kevin Orellana
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o Problema6.out Problema6.c
Fecha:          08 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Ejemplo de un programa el cual solicite al usuario el numero de vertices de un poligono, luego 
que solicite las coordenadas xy de esos vertices y debe de devolver al usuario el area de este poligono.
*/
//Librerias
#include <stdio.h>

int main() {
    //Definimos las variables 
    int M, N, fila, i;         
    float A;
    puts("----Calculadora del área de un polígono a partir de sus vértices----");
    //Se solicita al usuario el número de vértices del polígono
    do {                        
        puts("Ingrese la cantidad de vértices que tendrá el polígono. El número debe ser mayor o igual que 3.");
        scanf("%d", &M);
    } while (M<3);

     //Ahora declaramos la matriz como una de M filas x 2 columnas.
    int matriz[M][2];         
    puts("--------------------------------");
    puts("Ingrese las coordenadas de los vértices del polígono.");
    puts(" • Separe las entradas de las coordenadas por un espacio o un enter. Y las coordenadas por enters.");
    puts(" • Deben ser números enteros.");
    puts(" • Las coordenadas deben de ser ingresadas ordenadamente, de tal forma que vayan en contra de las manecillas del reloj.");
    puts(" • El cálculo no funciona si el polígono se intersecta a si mismo o si tiene agujeros.");
    puts("--------------------------------");
     //Solicitar al usuario ingresar los valores a la matriz. Fila por fila y las dos columnas de un solo
    for (fila = 0; fila < M; fila++) {                                     
        scanf("%d %d", &matriz[fila][0], &matriz[fila][1]);                 
    }
    //Mostrar las coordenadas ingresadas
    puts("Las coordenadas de los vértices del polígono son:");
    for (fila = 0; fila < M; fila++) {                                     
        printf("(%d, %d)\n", matriz[fila][0], matriz[fila][1]);
    }
    //Definir la variable N
    N = M-1;                                                               
    //Ejecutar los cálculos correspondientes a la sumatoria
    for (i = 0; i < N; i++) {                                               
        A += (matriz[i][0]*matriz[i+1][1]) - (matriz[i+1][0]*matriz[i][1]);
    }
    //Realizar el cálculo que está afuera de la sumatoria
    A += (matriz[N][0]*matriz[0][1])-(matriz[0][0]*matriz[N][1]);       
    //Se imprime el resultado
    printf("El área del polígono es: %.2f\n", A/2);                         
return 0;
}