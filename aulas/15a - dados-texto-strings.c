#include <stdio.h>

int main() {
  char string[10]; // na real são 9 caracteres úteis e o último é reservado ao \0 para a máquina saber que o texto se encerra

  printf("Digite algo (scanf convencional): ");
  scanf("%s", string); // no caso de strings não é necessário o & aqui (deixa ultrapassar o limite de caracteres do vetor)
	fflush(stdin); // função importante de ser usada após uma entrada de dados via teclado (após um scanf, por exemplo)

	printf("Resultado: %s\n\n", string);

	printf("Digite algo (scanf aprimorado): ");
	scanf("%9[^\n]s", string); // entre o %s vem o tamanho da string - 1 e [^\n] para ler espaços
	fflush(stdin);

	printf("Resultado: %s\n", string);
}
