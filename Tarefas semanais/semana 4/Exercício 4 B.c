/**
Escreva um programa que leia do teclado dois valores inteiros. Seu programa deve, como resultado, exibir a soma dos n�meros pares (considere que um n�mero inteiro � par se o resto da divis�o por 2 � zero) entre eles, incluindo os extremos do intervalo. A ordem dos n�meros de entrada pode ser tanto crescente quanto decrescente. Ou seja, voc� n�o pode assumir que o primeiro n�mero informado � menor que o segundo.

Exemplo de execu��o:

Entre com dois valores: 10  -7

Soma dos valores pares entre estes dois numeros: 18



// a conta feita foi 10 + 8 + 6 + 4 + 2 + 0 + -2 + -4 + -6 = 18
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
  int a, b, c, soma = 0, aux = 0;

  printf("Digite o primeiro n�mero: ");
  scanf("%d", &a);
  printf("Digite o segundo n�mero: ");
  scanf("%d", &b);

  if (b > a) {
    c = a;
    a = b;
    b = c;
  }

  for (aux = a; b <= aux; aux--) {
    if ((aux % 2) == 0) {
      soma = soma + aux;
    }
  }
  printf("%d\n", soma);
}