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
