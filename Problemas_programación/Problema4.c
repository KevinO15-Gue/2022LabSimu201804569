/*
Autor:          Kevin Orellana
compilador:     gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
compilar:       gcc -o Problema4.out Problema4.c
Fecha:          07 de mayo de 2022
Librerías:      stdio, stdlib
Resumen:        Ejemplo de un programa que lee un numero mayor que 1 y determine si es primo.
*/
//Librerias
#include <stdio.h>

int main() {
  //Se declaran e inicializan las variables
  int N, i = 2, primo = 1;
  //Se solicita al usuario un número para determinar si es primo
  puts("Ingrese un número entero: ");
  scanf("%d", &N);
  //Se inicia el bucle. Las condiciones a cumplir son: i < N - 1 && primo == 1
  while (i < N - 1 && primo == 1) {
    //Se determina si N es divisible entre i
    if (N % i == 0) {
      //Si es divisible, implica que no es primo, por lo que el valor de la variable cambia
      primo = 0;
    }
    //Se aumenta el contador
    i++;
  }
  //Se utilizan las condicionales y estas se encargan de mostrar los dos posibles resultados
  if (primo == 0) {
    printf("%d no es primo. \n", N);
  } else {
    printf("%d es primo. \n", N);
  }
  return 0;
}