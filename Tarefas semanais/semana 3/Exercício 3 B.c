// Fa�a um programa que l� o peso de 3 pessoas e um valor que indica um peso de refer�ncia. O programa deve informar quantas pessoas possuem um peso superior ou igual ao peso de refer�ncia.

#include <stdio.h>
#include <stdlib.h>
#define QUANTIDADE 3

void main() {
  float a, ref;
  int num = 0;

  printf("Digite o peso de refer�ncia:");
  scanf("%f", &ref);

  for (int aux = 1; aux <= QUANTIDADE; aux++) {
    printf("Digite o peso da %d� pessoa:", aux);
    scanf("%f", &a);
    if (a >= ref) num++;
  }

  printf("O n�mero de pessoas com peso acima ou igual ao peso de refer�ncia � %d", num);
}