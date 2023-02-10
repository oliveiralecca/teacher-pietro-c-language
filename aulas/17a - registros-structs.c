#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

/*
* Structs
* - cria tipos de dados compostos
* - define novos tipos com "struct"
* - renomeia um identificador com "typedef"
*/

struct tipo_pessoa {
  int idade;
  float peso;
  char nome[TAM];
};

typedef struct tipo_pessoa pessoa; // renomeando "struct tipo_pessoa" para "pessoa"

int main() {
  setlocale(LC_ALL, "Portuguese");

  // criando uma variável com o novo tipo e inicializando
  pessoa person = {0, 0.0, "xxx"};

  printf("Início:\n");
  printf("person.idade: %d\n", person.idade);
  printf("person.peso: %.2f\n", person.peso);
  printf("person.nome: %s\n", person.nome);

  // atribuindo valores aos campos
  person.idade = 30;
  person.peso = 53.2;
  strcpy(person.nome, "Letícia");

  printf("\nAlterando os campos via código:\n");
  printf("person.idade: %d\n", person.idade);
  printf("person.peso: %.2f\n", person.peso);
  printf("person.nome: %s\n", person.nome);

  // solicitando inserções via teclado
  printf("\nInsira a idade (inteiro):\n");
  scanf("%d", &person.idade);
  printf("Insira o peso (real):\n");
  scanf("%f", &person.peso);
  fflush(stdin);
  printf("Insira o nome:\n");
  scanf("%s", &person.nome);

  printf("\nAlterando com dados do usuário:\n");
  printf("person.idade: %d\n", person.idade);
  printf("person.peso: %.2f\n", person.peso);
  printf("person.nome: %s\n", person.nome);
}
