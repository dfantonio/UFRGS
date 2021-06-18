/**
Fa�a uma fun��o tipada que recebe como entrada 6 n�meros (3 pares ordenados) como par�metros: x1, y1, x2, y2, x3, y3. Nesta sequ�ncia de par�metros, os primeiros 2 pares ordenados representam coordenadas de 2 pontos (P1 e P2) no plano cartesiano que definem 2 cantos de um ret�ngulo: P1 representa o canto inferior esquerdo e P2 representa o canto superior direito. O �ltimo par ordenado representa um outro ponto P3 arbitr�rio. A fun��o deve verificar se o ponto P3 est� dentro da �rea do ret�ngulo definido pelos 2 primeiros pontos. Caso o ponto esteja dentro do ret�ngulo, a fun��o deve retornar 1, caso contr�rio, deve retornar 0 (zero). Escreva um programa principal que leia 6 n�meros, chame a fun��o desenvolvida e imprima na tela se o ponto P3 est� dentro do ret�ngulo ou n�o.

Exemplo de execu��o:
Entre as coordenadas x e y do ponto 1: 2 2
Entre as coordenadas x e y do ponto 2: 8 6
Entre as coordenadas x e y do ponto 3: 5 4
O ponto 3 esta dentro do ret�ngulo.
Abaixo, veja uma representa��o gr�fica dos dados acima, incluindo tamb�m um quarto ponto (10,4), que n�o estaria dentro do ret�ngulo
*/

#include <stdio.h>
#include <stdlib.h>

int pares(int matriz[3][2]) {
  if (matriz[2][0] >= matriz[0][0] && matriz[2][0] <= matriz[1][0] && matriz[2][1] >= matriz[0][1] && matriz[2][1] <= matriz[1][1]) return 1;
  return 0;
}

int main() {
  int pos[3][2];
  for (int linhas = 0; linhas < 3; linhas++) {
    printf("Digite o par ordenado do %d� ponto: ", linhas + 1);
    scanf("%d %d", &pos[linhas][0], &pos[linhas][1]);
  }
  if (pares(pos)) printf("O 3� ponto est� dentro do ret�ngulo.");
  else
    printf("O 3� ponto n�o est� dentro do ret�ngulo.");
}
