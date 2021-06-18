/**
Fa�a um programa que defina uma estrutura jogador contendo nome (string) e pontua��o (int). O programa principal dever� criar um vetor de 5 jogadores e pedir para o usu�rio informar os nomes e pontua��es dos mesmos. Depois dever� chamar uma fun��o que ordena o vetor de jogadores por pontua��o usando o algoritmo Bubblesort. Por fim, imprima na main os nomes e pontua��es dos jogadores (da maior pontua��o para a menor).

Exemplo de execu��o:
Digite nome do jogador 1: Jeff
Digite pontuacao do jogador 1: 60
Digite nome do jogador 2: Bob
Digite pontuacao do jogador 2: 120
Digite nome do jogador 3: George
Digite pontuacao do jogador 3: 105
Digite nome do jogador 4: Tom
Digite pontuacao do jogador 4: 90
Digite nome do jogador 5: Roy
Digite pontuacao do jogador 5: 100
Ordenacao:
Bob - 120
George - 105
Roy - 100
Tom - 90
Jeff - 60

*/

#include <stdio.h>
#include <stdlib.h>
#define PESSOAS 5

typedef struct {
  char nome[30];
  int pontuacao;
} Pessoas;

void bubblesort(Pessoas jogador[PESSOAS]) {
  int true = 1;
  Pessoas temp;
  do {
    true = 0;
    for (int aux = 0; aux < 4; aux++) {
      if (jogador[aux].pontuacao < jogador[aux + 1].pontuacao) {
        temp = jogador[aux];
        jogador[aux] = jogador[aux + 1];
        jogador[aux + 1] = temp;
        true = 1;
      }
    }
  } while (true == 1);
}

int main() {
  Pessoas jogador[PESSOAS];
  for (int aux = 0; aux < PESSOAS; aux++) {
    printf("Digite o nome do jogador %d: ", aux + 1);
    fflush(stdin);
    fgets(jogador[aux].nome, 30, stdin);
    printf("Digite a pontua��o do jogador %d: ", aux + 1);
    scanf("%d", &jogador[aux].pontuacao);
  }
  bubblesort(jogador);
  for (int i = 0; i < PESSOAS; i++) {
    printf("%d - %s", jogador[i].pontuacao, jogador[i].nome);
  }
}
