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
  //Se inicializan las variables
  int N1, N2;
  //Se leen los dos números del rango
  puts("Ingrese el límite inferior del rango: ");
  scanf("%d", &N1);
  puts("Ingrese el límite superior del rango: ");
  scanf("%d", &N2);
  puts("---------------------------------------------------------");
  printf("Los números primos dentro del rango [ %d , %d ] son: \n", N1, N2);
  //Se inicia el bucle. N1<=i<=N2
  for (int i = N1; i < N2; i++) {
    //Se determina si es primo. Escribirlo si lo es.
    if (primo(i) == 1) {
      printf("%d\n", i);
    }
  }
  return 0;
}

//Se define la función para verificar si el número es primo
int primo(int N){
  //Se inicializan las variables
  int j = 2, value = 1;
  //Se inicia el bucle. Las condiciones a cumplir son: i < N - 1 && value == 1
  while (j < N - 1 && value == 1) {
    //Se determina si N es divisible entre i
    if (N % j == 0) {
      //Si resulta ser divisible, implica que no es primo, por lo que se cambia el valor de la variable
      value = 0;
    }
    //Se aumenta el contador
    j++;
  }
  return value;
}