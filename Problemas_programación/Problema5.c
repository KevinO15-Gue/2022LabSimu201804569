/*
Autor:          Kevin Orellana
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o Problema5.out Problema5.c
Fecha:          08 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Ejemplo de un programa que lee dos numeros enteros para generar un rango y que muestre todos 
los numeros primos en ese rango.
*/
//Librerias
#include <stdio.h>

//Se prototipa la función
int primo(int N);

int main() {
  //Inicializa las variables
  int N1, N2;
  //Lee los dos números del rango
  puts("Ingrese el límite inferior del rango: ");
  scanf("%d", &N1);
  puts("Ingrese el límite superior del rango: ");
  scanf("%d", &N2);
  puts("---------------------------------------------------------");
  printf("Los números primos dentro del rango [ %d , %d ] son: \n", N1, N2);
  //Aca se inicia el bucle. N1<=i<=N2
  for (int i = N1; i < N2; i++) {
    //Se determina si es primo. Escribirlo si lo es.
    if (primo(i) == 1) {
      printf("%d\n", i);
    }
  }
  return 0;
}

//Definir la función que verifica si es primo el numero
int primo(int N){
  //Inicializan las variables
  int j = 2, value = 1;
  //Inicia el bucle. Las condiciones a cumplir son: i < N - 1 && value == 1
  while (j < N - 1 && value == 1) {
    //Determina si N es divisible entre i
    if (N % j == 0) {
      //Si es divisible, implica que no es primo, por lo que el valor de la variable cambia
      value = 0;
    }
    //El contador aumenta
    j++;
  }
  return value;
}