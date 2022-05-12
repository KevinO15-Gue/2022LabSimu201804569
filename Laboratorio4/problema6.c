/*
Autor:         Kevin Orellana
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:      gcc -o problema6.out problema6.c -lm
Fecha:         10 de mayo de 2022
Librerías:     stdio, math
Resumen:       Se resuelve el problema 6 del laboratorio 4 de Lab.Simulación donde se solicita 
               Crear un programa que realice la sumatoria desde 1 hasta un numero n que ingrese el usuario de las
               siguientes funciones.
*/ 

// Librerias.
#include <math.h>
#include <stdio.h>

//Vamos a definir los valores constantes
// Definimos el valor constante (1-sqrt(5))/(2)
#define primeracons -0.618033   
// Definimos el valor constante (1+sqrt(5))/(2)
#define segundacons 1.618033    
// Definimos el valor constante (1/sqrt(5))
#define terceracons 0.447213    

//Ahora elegimos las funciones de las sumatorias
float primerasumatoria(int n);
float segundasumatoria(int n);
float tercerasumatoria(int n);
float cuartasumatoria(int n);

int main() {
    //Se declaran las variabls
    int n;
    //Se utiliza un bucle del cual el usuario solo puede salir si ingresa n>=0
    do {
        printf("Digite solamente un número entero que sea mayor o igual a cero: ");
        scanf("%d", &n);
    } while (n < 0);
    //Se muestran los resultados de las funciones
    printf("(a) La sumatoria desde k=1 hasta n=%d de ∑ k²(k-3) es:\t\t\t\t\t\t\t%.2f\n", n, primerasumatoria(n));
    printf("(b) La sumatoria desde k=2 hasta n=%d de ∑ 3/(k-1) es:\t\t\t\t\t\t\t%.2f\n", n, segundasumatoria(n));
    printf("(c) La sumatoria desde k=1 hasta n=%d de ∑ ((1+√(5))/2)^k/√(5) - ((1-√(5))/2)^k/√(5) es:\t\t%.2f\n", n, tercerasumatoria(n));
    printf("(d) La sumatoria desde k=2 hasta n=%d de ∑ 0.1(3*2^(k-2)+4) es:\t\t\t\t\t\t%.2f\n", n, cuartasumatoria(n));
return 0;
}

//Expresión: ∑ k²(k-3)
float primerasumatoria(int n){
    //Se definen variables
    int k;
    float res=0;
    //Conteo de las variables hasta llegar a n
    for (k = 1; k <= n; k++)
    //Se efectua el calculo
        res += pow(k,2)*(k-3);
    //Se obtiene la respuesta
    return res;
}

//Expresión: ∑ 3/(k-1)
float segundadasumatoria(int n){
    //Definimos las variables
    int k;
    float res=0;
    //Conteo de las variables hasta llegar a n
    for (k = 2; k <= n; k++)
    //Se efectua el calculo
        res += 3.0/(k-1);
    //Se obtiene la respuesta
    return res;
}

//Expresión: ∑ ((1+√(5))/2)^k/√(5) - ((1-√(5))/2)^k/√(5)
float tercerasumatoria(int n){
    //Definimos las variables
    int k;
    float res=0;
    //Conteo de las variables hasta llegar a n
    for (k = 1; k <= n; k++)
    //Se efectua el calculo
    res += terceracons*pow(segundacons, k) - terceracons*pow(primeracons, k);
    //Se obtiene la respuesta
    return res;
}

//Expresión: ∑ 0.1(3*2^(k-2)+4)
float cuartasumatoria(int n){
    //Definimos las variables
    int k;
    float res=0;
    //Conteo de las variables hasta llegar a n
    for (k = 2; k <= n; k++)
    //Se efectua el calculo
    res += 0.1*(3*pow(2, k-2)+4);
    //Se optiene la respuesta
    return res;
}