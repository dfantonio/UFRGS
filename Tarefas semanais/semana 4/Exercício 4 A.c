/**
O card�pio de uma lancheria � o seguinte:

Especifica��o         C�digo   Pre�o

Dog                       100        13,00
Dog especial         101        17,00
X Salada               104        18,00
X Lombinho          105         21,00
Bauru                    110         24,00
Refrigerante lata   120           4,00
Escrever um programa que leia o c�digo do item pedido, a quantidade e calcule o valor a ser pago por aquele lanche. O programa deve avisar caso o c�digo seja inv�lido. Considere que a cada execu��o somente ser� calculado um item.
*/

#include <stdio.h>
#include <stdlib.h>

void main() {
  int cod, quant;

  printf("Produto\t\tC�digo\tValor\n");
  printf("Dog\t\t100\tR$ 13,00\n");
  printf("Dog Especial\t101\tR$ 17,00\n");
  printf("X Salada\t104\tR$ 18,00\n");
  printf("X Lombinho\t105\tR$ 21,00\n");
  printf("Bauru\t\t110\tR$ 24,00\n");
  printf("Refri lata\t120\tR$ 4,00\n");
  printf("Digite o c�digo do item: ");
  scanf("%d", &cod);
  printf("Digite quantos itens voc� quer: ");
  scanf("%d", &quant);

  switch (cod) {
  case 100:
    printf("Valor total a se pagar: R$ %d", quant * 13);
    break;
  case 101:
    printf("Valor total a se pagar: R$ %d", quant * 17);
    break;
  case 104:
    printf("Valor total a se pagar: R$ %d", quant * 18);
    break;
  case 105:
    printf("Valor total a se pagar: R$ %d", quant * 21);
    break;
  case 110:
    printf("Valor total a se pagar: R$ %d", quant * 24);
    break;
  case 120:
    printf("Valor total a se pagar: R$ %d", quant * 4);
    break;

  default:
    printf("C�digo de produto inv�lido");
    break;
  }
}