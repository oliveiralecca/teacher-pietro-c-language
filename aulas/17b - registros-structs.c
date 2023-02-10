#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct tipo_pessoa {
  int idade;
  float peso;
  char nome[50];
};

typedef struct tipo_pessoa pessoa;

int main() {
  setlocale(LC_ALL, "Portuguese");

  pessoa lista[TAM];
  int i;

  for(i = 0; i < TAM; i++) {
    if(i != 0) {
      printf("\n");
    }

    printf("Insira os dados (pessoa %d):\n", i + 1);

    printf("Nome: ");
    scanf("%49[^\n]s", &lista[i].nome);
    fflush(stdin);

    printf("Idade: ");
    scanf("%d", &lista[i].idade);

    printf("Peso: ");
    scanf("%f", &lista[i].peso);
    fflush(stdin);
  }

  // system("cls"); => limpa a tela em sistemas Windows

  puts("\nSeus dados:");
  for(i = 0; i < TAM; i++) {
    printf("------------ Pessoa %d ------------\n", i + 1);
    printf("\tNome: %s\n", lista[i].nome);
    printf("\tIdade: %d\n", lista[i].idade);
    printf("\tPeso: %.2f\n", lista[i].peso);
    printf("----------------------------------\n");
  }
}
