/*
Autor:         Kevin Orellana 
compilador:    gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Compilar:      gcc -o newtonraphson.out newtonraphson.c -lm
Fecha:         03 de mayo de 2022
Librerias:     stdio, stdlib, math
Resumen:       Problema del método númerico de NewtonRaphson para 2+cos(exp(x)-2)-exp(x)
*/

//librerias
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototipos de las funciones
float f(float x);
float df(float x);
void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol);

void main (void)
{
    //Se definen las variables
    float x_inicial, tolerancia, xS;
    int iteraciones, Aiteracion;
    
    //Se obtienen los datos
    printf("Ingrese el valor aproximado de x: ");
    scanf("%f",&x_inicial);
    printf("Ingrese el valor de tolerancia: ");
    scanf("%f",&tolerancia);
    printf("Ingrese el valor maximo de iteraciones: ");
    scanf("%d",&iteraciones);
    NewtonRaphson(x_inicial, tolerancia, iteraciones, &Aiteracion, &xS);
    if (Aiteracion == iteraciones)
        printf("\nNo hay solucion despues de %d iteraciones\n",iteraciones);
    else
    {
        printf("\nLuego de %d iteraciones la solucion es %.4f\n",Aiteracion,xS);
    }
}

void NewtonRaphson(float x0, float tol, int maxiter, int *actiter, float *sol)
{
    float xant, x, dif;
    int i=1;
    xant=x0;
    x=xant-f(xant)/df(xant);
    dif = x-xant;
    (dif<0)?dif=-dif:dif;
    printf("%f\n",dif);
    while (dif>tol && i<maxiter)
    {        
        xant=x;
        x=xant-f(xant)/df(xant);
        i++;
        dif = x-xant;
        (dif<0)?dif=-dif:dif; 
        printf("%f\n",dif);
    }
    *sol=x;
    *actiter = i;
}

float f(float x)
{
    float res =0;
    res = 2+cos(exp(x)-2)-exp(x);
    return res;
}

float df(float x)
{
    float res =0;
    res= -exp(x)*(sin(exp(x)-2)+1);
    return res;
}