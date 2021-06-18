/**
Considere N cidades (utilize #define N 5). Fa�a um programa que utilize uma matriz para representar as dist�ncias entre essas cidades, de tal modo que a c�lula (i,j) da matriz representa a dist�ncia entre a cidade i e a cidade j. Nesta matriz, dist�ncias menores que zero indicam que n�o h� via direta que conecta duas cidades.

OBS: Para facilitar inicialize a matriz com os valores fixos mostrados no exemplo abaixo (voc� pode alterar os valores da matriz para testar, mas envie o exercicio com estes valores). N�o � para pedir para o usu�rio informar os valores dela (a matriz deve ser inicializada no c�digo).
Imagem de Exemplo
A seguir, o programa deve pedir para o usuario uma sequ�ncia de N valores (cada valor entre 0 e N-1), que indica um trajeto que algu�m gostaria de realizar para visitar um conjunto dessas cidades. O programa deve informar se o trajeto pretendido � poss�vel ou n�o. Um trajeto n�o � poss�vel se ele incluir uma sequ�ncia de cidades que n�o est�o conectadas entre si.

Exemplo de execu��o:
Informe um trajeto:
Cidade 1: 0
Cidade 2: 1
Cidade 3: 2
Cidade 4: 3
Cidade 5: 4
O trajeto � poss�vel

Exemplo de execu��o:
Informe um trajeto:
Cidade 1: 0
Cidade 2: 2
Cidade 3: 3
Cidade 4: 1
Cidade 5: 4
O trajeto n�o � poss�vel
*/

#include <stdio.h>
#include <stdlib.h>
#define N 5

int main() {
  int aux, ordem[N], isValid = 1, pos, oldPos = 0;
  int matriz[N][N] = {
      {0, 33, -1, -1, 15},
      {33, 0, 60, 20, 32},
      {-1, 60, 0, 50, -1},
      {-1, 20, 50, 0, 50},
      {15, 32, -1, 50, 0},
  };

  printf("Informe o trajeto: \n");
  for (aux = 0; aux < N; aux++) {
    do {
      printf("Cidade %d: ", aux + 1);
      scanf("%d", &pos);
      if (pos > (N - 1)) {
        printf("Por favor, coloque um n�mero entre 0 e 4!\n");
      }
    } while (pos > (N - 1));

    if (!aux) oldPos = pos;
    if (matriz[pos][oldPos] < 0) isValid = 0;
    oldPos = pos;
  }

  if (isValid) printf("O caminho � poss�vel.");
  else
    printf("O caminho n�o � poss�vel.");
}