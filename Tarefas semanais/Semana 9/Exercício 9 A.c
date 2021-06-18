/**
Fa�a uma fun��o que recebe como par�metro tr�s n�meros inteiros, hora, min e seg, representando um dado hor�rio de um dia. A fun��o deve computar e retornar a quantidade total de minutos desde 00:00:00 (em valor decimal). Caso o hor�rio informado seja inv�lido, a fun��o dever� retornar um valor negativo. O programa principal dever� ler os tr�s n�meros inteiros, chamar a fun��o e, caso tenha sido verificado que o hor�rio informado � valido, imprimir o total de horas computado. Caso contr�rio, deve imprimir �Horario invalido�.

Exemplo de execu��o:
Digite hora: 2
Digite min: 30
Digite seg: 25
Total de minutos decorridos: 150,42
Exemplo de execu��o:
Digite hora: 14
Digite min: 85
Digite seg: 10
Horario invalido!

*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

float decimal(int hr, int min, float seg) {
  float res;
  if ((hr >= 0 && min >= 0 && seg >= 0) && (hr < 24 && min < 60 && seg < 60))
    res = (hr * 60) + min + (seg / 60);
  else
    res = -1;

  return (res);
}

int main() {
  int hr, min, seg;
  float res;
  printf("Digite hora: ");
  scanf("%d", &hr);
  printf("Digite min: ");
  scanf("%d", &min);
  printf("Digite seg: ");
  scanf("%d", &seg);
  res = decimal(hr, min, seg);
  if (res == -1) printf("Hor�rio inv�lido", res);
  else
    printf("%.2f", res);
}