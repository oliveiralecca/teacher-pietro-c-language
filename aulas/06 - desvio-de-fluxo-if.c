#include <stdio.h>

int main() {
  float nota;

  printf("Insira a nota: ");
  scanf("%f", &nota);

  if(nota >= 7.0) {
    printf("Aprovado(a)!\n");
  }
}
