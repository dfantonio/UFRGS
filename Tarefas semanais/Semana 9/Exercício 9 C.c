#include <stdio.h>
#include <stdlib.h>

int pares(int matriz[3][2]) {
  if (matriz[2][0] >= matriz[0][0] && matriz[2][0] <= matriz[1][0] && matriz[2][1] >= matriz[0][1] && matriz[2][1] <= matriz[1][1]) return 1;
  return 0;
}

int main() {
  int pos[3][2];
  for (int linhas = 0; linhas < 3; linhas++) {
    printf("Digite o par ordenado do %d� ponto: ", linhas + 1);
    scanf("%d %d", &pos[linhas][0], &pos[linhas][1]);
  }
  if (pares(pos)) printf("O 3� ponto est� dentro do ret�ngulo.");
  else
    printf("O 3� ponto n�o est� dentro do ret�ngulo.");
}
