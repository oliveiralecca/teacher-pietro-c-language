#include <stdio.h>

int main() {
  // Exemplo 1
  int matA[3][3]; // 3 linhas e 3 colunas

  matA[0][0] = 1;
  matA[0][1] = 2;
  matA[0][2] = 3;

  matA[1][0] = 4;
  matA[1][1] = 5;
  matA[1][2] = 6;

  matA[2][0] = 7;
  matA[2][1] = 8;
  matA[2][2] = 9;

  printf("Imprimindo a primeira linha:\n");
  printf("%d %d %d\n", matA[0][0], matA[0][1], matA[0][2]);

  // Exemplo 2
  int matB[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  int i, j;

  printf("------------------------------------");

  printf("\nImprimindo a primeira linha:\n");
  for(i = 0; i < 3; i++) {
    printf("%d ", matB[0][i]);
  }

  printf("\nImprimindo a primeira coluna:\n");
  for(j = 0; j < 3; j++) {
    printf("%d ", matB[j][0]);
  }

  printf("\nImprimindo a matriz inteira:\n");
  for(i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("%d  ", matB[i][j]);
    }
    printf("\n");
  }
}
