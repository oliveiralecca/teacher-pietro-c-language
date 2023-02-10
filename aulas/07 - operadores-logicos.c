#include <stdio.h>

int main() {
  float nota;

  printf("Insira a nota: ");
  scanf("%f", &nota);

  if(nota >= 4.0 && nota < 7.0) {
    printf("Tem direito à recuperação!\n");
  }
}
