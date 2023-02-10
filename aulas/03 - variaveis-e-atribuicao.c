#include <stdio.h>

#define texto "Definição de uma constante."
#define numero 10

int main() {
  printf("Constante texto: %s\n", texto);
  printf("Constante número: %d\n\n", numero);

  int idade = 0;
  float altura = 0.0;
  char nome[50] = ""; // no tipo char, entre [] vai o número de caracteres que aquela string terá, se não houver [] especificando, a variável só aceitará um caractere

  printf("Digite a idade: ");
  scanf("%d", &idade);

  printf("Digite a altura: ");
  scanf("%f", &altura);

  printf("Digite o nome: ");
  scanf("%s", &nome);

  printf("\nDados informados:\n");
  printf("- idade: %d\n", idade);
  printf("- altura: %.2f\n", altura);
  printf("- nome: %s\n", nome);
}
