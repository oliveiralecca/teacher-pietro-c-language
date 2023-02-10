#include <stdio.h>

int main() {
  int idade = 0;
  float peso = 0.0;

  printf("Valor inicial da idade: %d\n", idade);

  printf("Digite uma idade: ");
  scanf("%d", &idade);

  printf("Digite um peso: ");
  scanf("%f", &peso);

  // printf("Digite uma idade e um peso: ");
  // scanf("%d %f", &idade, &peso);

  printf("Idade informada: %d\n", idade);
  printf("Peso informado: %.1f\n", peso);
}
