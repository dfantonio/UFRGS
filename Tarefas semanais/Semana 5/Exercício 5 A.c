//Fa�a um programa que leia um n�mero inteiro N maior ou igual a 1 (o programa dever� repetidamente pedir um novo n�mero caso o usu�rio digite um n�mero inv�lido). Calcule e imprima todos os n�meros primos menores que N. Lembre que n�mero primo � um inteiro s� com 2 divisores: o n�mero 1 e ele pr�prio.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, numero, isPrimo;

  do {
    printf("Escreva o seu n�mero: ");
    scanf("%d", &numero);
  } while (numero < 1);

  do {
    numero--;
    isPrimo = 1;
    for (i = 2; i < numero; i++) {
      if ((numero % i) == 0)
        isPrimo = 0;
    }

    if (isPrimo == 1)
      printf("%d � primo\n", numero);

  } while (numero > 2);
}