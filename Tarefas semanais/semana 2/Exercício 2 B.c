#include <stdio.h>
#include <stdlib.h>

int main() {

  int total = 0, num = 0;
  printf("Programa para ver a somat�ria de um n�mero de 3 d�gitos\n");
  printf("Informe um valor de 3 d�gitos: ");
  scanf("%d", &num);

  while (num > 0) {
    total += (num % 10);
    num = num / 10;
  };

  printf("A soma dos digitos �: %d\n", total);
}