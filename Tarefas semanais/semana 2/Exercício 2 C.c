#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "");

  int quant, latas;
  float altura, largura, custo, area, tamanho, preco;

  printf("Quantas chapas ser�o pintadas: ");
  scanf("%d", &quant);
  printf("Qual a altura das chapas: ");
  scanf("%f", &altura);
  printf("Qual a largura das chapas: ");
  scanf("%f", &largura);
  printf("Qual o custo das latas de tintas: ");
  scanf("%f", &custo);
  printf("Quantos metros quadrados podem ser pintados com uma lata: ");
  scanf("%f", &area);

  tamanho = (largura * altura) * quant;
  latas = ceil(tamanho / area);
  preco = latas * custo;

  printf("Pre�o final: R$%.2f\n", preco);
  printf("A quantidade de latas: %d", latas);
}