/*
Autor:         Kevin Orellana
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o minimoscuadrados.out minimoscuadrados.c -lm
Fecha:         03 de mayo de 2022
Librerias:     stdio, math
Resumen:       Problema realizado para la aproximación nómerica de minimos cuadrados
*/

//librerias
#include <stdio.h>
#include <math.h>

//determino e inicializo variables globales
float x[]={1,2,3,4,5,6,7,8,9,10}, y[]={20.20,20.90,20.60,21.30,21.75,22.05,23.62,22.95,23.80,24};
//medimos el tamaño del vector por medio del tamaño de los bytes que ocupa cada elemento
int n = sizeof(x)/sizeof(x[0]);

//definimos las funciones
void imprimir(float datos[]);
float suma(float datos[]);
float sumaMulti(float datos1[], float datos2[]);


void main(){
    //Acá se determinan las variables del problema
    float b, m, r;
    //Ahora vamos a imprimir los valores de los vectores para que el usuario obtenga la informacion
    imprimir(x);
    imprimir(y);
    //los valores de ecuacion lineal dados por los minimos cuadrados
    m = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/(n*sumaMulti(x,x)-(suma(x)*suma(x)));
    b = (suma(y)-m*suma(x))/n;
    r = (n*sumaMulti(x,y)-(suma(x)*suma(y)))/sqrt((n*sumaMulti(x,x)-(suma(x)*suma(x)))*(n*sumaMulti(y,y)-(suma(y)*suma(y))));
    //Se imprime la ecuacion lineal deseada
    printf("y = %fx + %f\n",m,b);
    //Se imprime el coeficiente de determinación el r cuadrado
    printf("Coeficiente de determinacion: %f\n",r*r);
}

//Se imprimen los datos del vector que ingrese en la función
void imprimir(float datos[]){
    puts("Valor de los datos");
    for (int i = 0; i < n; i++)
    {
        printf("%f ",datos[i]);
    }
    puts("\n");
}

//Se realiza la suma de los elementos de un vector ingresado
float suma(float datos[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos[i];
    }
    return resp;
}

//Se realiza el producto punto de los elementos de dos vectores ingresados
float sumaMulti(float datos1[], float datos2[]){
    float resp = 0;
    for (int i = 0; i < n; i++)
    {
        resp += datos1[i]*datos2[i];
    }
    return resp;
}