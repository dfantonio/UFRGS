// Escreva um programa que imprima o resultado da multiplica��o de tr�s n�meros inteiros.

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main()
{
  setlocale(LC_ALL, "Portuguese");

  int a, b, c;

  printf("Multiplicador de tr�s d�gitos.\n");

  printf("Escolha o 1� n�mero:");
  scanf("%d", &a);
  printf("Escolha o 2� n�mero:");
  scanf("%d", &b);
  printf("Escolha o 3� n�mero:");
  scanf("%d", &c);

  printf("A multiplica��o entre %d, %d, %d � %d\n", a, b, c, a * b * c);
}