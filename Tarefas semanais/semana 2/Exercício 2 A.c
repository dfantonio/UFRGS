// Fa�a um algoritmo que l� o peso (em kg) e a altura (em m) de uma pessoa e determina (e escreve) o imc (�ndice de massa corporal), que � dado pela f�rmula: IMC = peso/(altura�)

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  float altura, peso, imc;

  printf("Programa para calcular seu IMC\n");
  printf("Qual sua altura (em metros): ");
  scanf("%f", &altura);
  printf("Qual seu peso (em kg): ");
  scanf("%f", &peso);

  imc = peso / pow(altura, 2);

  printf("Seu imc � %.2f", imc);
}