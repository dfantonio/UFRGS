//Fa�a uma fun��o chamada menor2 que recebe como par�metros dois n�meros inteiros e retorna o menor deles. A seguir, fa�a uma fun��o chamada menor3 que recebe como par�metro tr�s n�meros inteiros e retorna o menor deles. A fun��o menor3 deve necessariamente usar a fun��o menor2 em sua l�gica interna. Escreva um programa principal que leia 3 n�meros, computa qual deles � o menor usando a fun��o menor3 e imprima na tela qual dos n�meros � o menor.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int menor2(int a, int b) {
  return (a < b) ? a : b;
}
int menor3(int a, int b, int c) {
  return (menor2(a, b) < c) ? menor2(a, b) : c;
}

int main() {
  int a, b, c;
  printf("Digite o 1� n�mero: ");
  scanf("%d", &a);
  printf("Digite o 2� n�mero: ");
  scanf("%d", &b);
  printf("Digite o 3� n�mero: ");
  scanf("%d", &c);
  printf("O menor n�mero �: %d", menor3(a, b, c));
}
