#include <stdio.h>

int main() {
  int A, B, soma, subtr, mult, divis;

  printf("Digite o primeiro valor inteiro: ");
  scanf("%d", &A);
  printf("Digite o segundo valor inteiro: ");
  scanf("%d", &B);

  soma = A + B;
  subtr = A - B;
  mult = A * B;
  divis = A / B;

  printf("\n==============\n");
  printf("  Resultados");
  printf("\n==============\n");
  printf("Soma =  %d\n", soma);
  printf("Subtração = %d\n", subtr);
  printf("Multiplicação = %d\n", mult);
  printf("Divisão = %d\n", divis);
}
