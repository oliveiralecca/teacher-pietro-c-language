#include <stdio.h>

// params => vetor genérico sem número de posições, posições
void imprime1(int v[], int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
}

// param => vetor já com o número de posições explícito
void imprime2(int v[5]) {
  int i;
  for(i = 0; i < 5; i++) {
    printf("%d ", v[i]);
  }
}

// params => vetor sem posições (int *v == int v[]), posições
void imprime3(int *v, int n) {
  int i;
  for(i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
}

int main() {
  int vetor[5] = {1, 2, 3, 4, 5};

  puts("Primeiro imprime:");
  imprime1(vetor, 5);

  puts("\nSegundo imprime:");
  imprime2(vetor);

  puts("\nTerceiro imprime:");
  imprime3(vetor, 5);

  printf("\n");
}
