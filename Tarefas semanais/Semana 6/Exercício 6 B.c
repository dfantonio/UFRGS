/**
Fa�a um programa para simular a corrida de 5 cavalos.

No inicio do programa pe�a para o usuario informar os nomes de cada cavalo. O programa tamb�m deve ler um valor inteiro D, referente ao comprimento da pista; e um valor inteiro DMP, referente � dist�ncia m�xima do passo de um cavalo.

A posi��o de cada cavalo na pista � dada por uma vari�vel inteira que come�a em 0, sobre a qual ser�o somadas as dist�ncias das passadas em cada instante. (Inclusive voc� pode usar um vetor de 5 inteiros para representar tais posi��es).

A cada passo de repeti��o, deve-se sortear um valor aleat�rio entre 0 e DMP para cada cavalo, que vai indicar o quanto cada cavalo andou naquele passo. Siga atualizando as dist�ncias percorridas por cada cavalo, at� que algum cavalo tenha alcan�ado o fim da pista.

Quando isso acontecer, indique o cavalo vencedor e imprima os nomes e as dist�ncias percorridas por todos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  char nome[5][20];
  int passo, tamanho, pos[5] = {0}, aux, vencedor = 0;
  srand(time(NULL));
  for (aux = 0; aux < 5; aux++) {
    printf("Digite os nomes dos cavalos: ");
    fflush(stdin);
    fgets(nome[aux], 20, stdin);
  }
  printf("Digite o tamanho m�ximo do passo de um cavalo: ");
  scanf("%d", &passo);
  printf("Digite o comprimento da pista: ");
  scanf("%d", &tamanho);

  while (vencedor == 0) {
    for (aux = 0; aux < 5 && !vencedor; aux++) {
      pos[aux] += rand() % (passo + 1);
      if (pos[aux] >= tamanho) {
        vencedor = 1;
        printf("\nCavalo vencedor: %s", nome[aux]);
      }
    }
  }
  for (aux = 0; aux < 5; aux++) {
    printf("\n\nCavalo: %sDist�ncia percorrida: %d", nome[aux], pos[aux]);
  }
}
