#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void main() {
  int ref, closest, closestDelta = 2147483647, temp, delta;
  printf("Digite o valor de refer�ncia: ");
  scanf("%d", &ref);

  do {
    printf("Digite algum valor inteiro: ");
    scanf("%d", &temp);

    delta = abs(ref - temp);
    if (temp != 0 && (delta < closestDelta)) {
      closestDelta = delta;
      closest = temp;
    }

  } while (temp != 0);

  printf("O valor mais pr�ximo de %d � %d", ref, closest);
}