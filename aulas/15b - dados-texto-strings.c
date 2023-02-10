#include <stdio.h>

/*
* gets(var) => deixa estourar o limite do vetor
* fgets(var, limite, stdin) => o limite real é dado, o \0 é inserido automaticamente
* puts(var ou "texto") => imprime uma string na tela (não admite variáveis de outros tipos)
*
* fflush(stdin) => é útil para que a próxima entrada via teclado não dê problema, limpa os lixos de memória (float e char)
* stdin => entrada de dados padrão (teclado)
*/

int main() {
  char string[10];

  printf("Digite algo (leitura pelo gets): ");
  gets(string);
  fflush(stdin);

  puts("Resultado (impressão com puts):");
  puts(string);
  puts("");

  printf("Digite algo (leitura pelo fgets): ");
  fgets(string, 10, stdin);
  fflush(stdin);

  puts("Resultado (impressão com puts):");
  puts(string);
}
