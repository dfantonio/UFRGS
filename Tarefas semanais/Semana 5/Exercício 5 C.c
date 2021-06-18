/**
Leia um determinado n�mero inteiro M. A seguir leia um n�mero indeterminado de valores inteiros at� que o usu�rio digite o valor 0 (zero � sinal de parada de leitura de n�meros). O programa deve exibir o n�mero lido da lista que mais se aproxima do n�mero M dado no in�cio. Note que o n�mero zero, usado para marcar o fim da leitura de valores, n�o deve ser considerado para definir o n�mero mais pr�ximo de M.

Exemplo de execu��o:

Entre com o numero M: 5

Entre com o numero da lista: -1
Entre com o numero da lista: 2
Entre com o numero da lista: -3
Entre com o numero da lista: -4
Entre com o numero da lista: 15
Entre com o numero da lista: 0
Numero mais proximo de 5: 2
*/

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