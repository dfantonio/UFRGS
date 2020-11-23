#include <stdio.h>
#include <stdlib.h>
#define QUANT 6

int separador(int num[QUANT], int tamanho) {
  if (tamanho >= 0)
    return 1 - num[tamanho] % 2 + separador(num, tamanho - 1);

  return 0;
}

int main() {
  int num[QUANT];

  for (int i = 0; i < QUANT; i++) {
    printf("Digite o valor da %d� posi��o do vetor: ", i + 1);
    scanf("%d", &num[i]);
  }
  printf("O vetor possui %d n�meros pares.", separador(num, QUANT - 1));
}