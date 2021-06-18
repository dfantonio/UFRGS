/**
Fa�a um programa que l� um arquivo texto informado pelo usu�rio, em que cada linha possui dois n�meros reais separados por ponto-e-v�rgula, que representam as dimens�es de um ret�ngulo. O programa deve imprimir, uma linha por vez, a �rea de cada ret�ngulo representado pelas informa��es lidas. Considere o uso das fun��es strtok e atof.

Arquivo de entrada:
12.45;34.78
20.89;34.87
100.56;200.45

Arquivo de sa�da:
433.011
728.4343
20157.252

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  FILE *arq;

  char nome[50], numeros[50], quebra[2] = ";";
  char *x, *y;
  printf("Digite o nome do arquivo: ");
  fgets(nome, 50, stdin);
  nome[strcspn(nome, "\n")] = 0;
  arq = fopen(nome, "r");
  while (fgets(numeros, 50, arq)) {
    numeros[strcspn(numeros, "\n")] = 0;
    x = strtok(numeros, quebra);
    y = strtok(NULL, quebra);
    printf("%.4f\n", atof(x) * atof(y));
  }
  fclose(arq);
}