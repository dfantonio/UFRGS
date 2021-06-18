// Fa�a um programa no qual o usu�rio informa o nome de um arquivo texto e uma palavra, e imprima todas as linhas do arquivo que cont�m a palavra informada (indicando na frente o n�mero da linha).

// Dicas: O comando fgets (para ler uma linha de texto) retorna NULL quando o arquivo de onde ele est� lendo se encerra. O comando strstr pode ser usado para buscar uma string em outra string (ele retorna um ponteiro para a primeira ocorr�ncia encontrada, ou NULL caso n�o encontre.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  FILE *arq;

  char nome[50], palavra[50], resultado[50], *x;
  int linha = 1, contador = 0;
  printf("Digite o nome do arquivo: ");
  fgets(nome, 50, stdin);
  nome[strcspn(nome, "\n")] = 0;
  printf("Digite a palavra que deseja procurar no arquivo: ");
  fgets(palavra, 50, stdin);
  palavra[strcspn(palavra, "\n")] = 0;
  arq = fopen(nome, "r");
  while (fgets(resultado, 50, arq)) {
    x = strstr(resultado, palavra);
    if (x != NULL) {
      x[strlen(palavra)] = NULL;
      printf("%d %s\n", linha, x);
      contador++;
    }
    linha++;
  }
  if (contador == 0) {
    printf("N�o tem nenhuma ocorr�ncia.");
  }
  fclose(arq);
}
