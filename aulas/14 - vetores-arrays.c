#include <stdio.h>

int main() {
  // Exemplo 1
  int a[5];
  float media;

  a[0] = 50;
  a[1] = 40;
  a[2] = 30;
  a[3] = 20;
  a[4] = 10;

  media = (a[0] + a[1] + a[2] + a[3] + a[4]) / 5;

  printf("Média-1: %.2f\n", media);

  // Exemplo 2
  int b[5] = {10, 20, 30, 40, 50};
  int i;
  float soma = 0;

  for(i = 0; i < 5; i++) {
    soma += b[i];
  }

  printf("Média-2: %.2f\n", soma/5);

  // Exemplo 3
  int c[5];
  int j;

  for(j = 0; j < 5; j++) {
    printf("Insira um número: ");
    scanf("%d", &c[j]);
  }

  printf("Números inseridos: ");
  for(j = 0; j < 5; j++) {
    printf("%d ", c[j]);
  }

  printf("\n");
}
