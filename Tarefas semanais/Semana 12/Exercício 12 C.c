#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CARTAS 52
#define NAIPES 4 // 1 = Copas, 2 = Ouros, 3 = Paus, 4 = Espadas
#define VALOR  13

FILE *arq;

typedef struct carta {
  int numero;
  int naipe;
} Carta;

typedef struct arquivo {
  int quantidade;
  Carta cartas[CARTAS];
} Arquivo;

void inicializa_baralho(Carta baralho[CARTAS]) {
  for (int aux = 0; aux < CARTAS; aux++) {
    baralho[aux].numero = (aux % VALOR) + 1;
    baralho[aux].naipe = ((aux) / VALOR) + 1;
  }
}

void imprime_baralho(Arquivo payload, int quant) {
  printf("Cartas: \n");
  for (int i = 0; i < quant; i++) {
    printf("\n%d ", payload.cartas[i].naipe);
    switch (payload.cartas[i].numero) {
    case 1:
      printf("de Copas");
      break;
    case 2:
      printf("de Ouros");
      break;
    case 3:
      printf("de Paus");
      break;
    case 4:
      printf("de Espadas");
      break;
    }
  }
}

int carrega_estado(Arquivo payload, int quant) {
  char nome[50];
  int lidos;
  printf("Digite o nome do arquivo: ");
  fgets(nome, 50, stdin);
  nome[strcspn(nome, "\n")] = 0;
  arq = fopen(nome, "rb");
  if (arq == NULL) {
    return (-1);
  } else {
    fread(&lidos, sizeof(lidos), 1, arq);
    fread(&payload, sizeof(Arquivo), 1, arq);
    return (lidos);
  }
}

int main() {
  srand(time(NULL));
  system("cls");
  Arquivo payload;
  int quant, true;
  quant = CARTAS;
  true = carrega_estado(payload, quant);
  if (true == -1) {
    printf("Erro, arquivo corrompido ou com erro.");
  } else {
    imprime_baralho(payload, quant);
  }
}