#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

/*
* Funções da lib <string.h>
* - strcpy(destino, origem) => modificar o conteúdo de uma string, não se altera atribuindo (=) um novo valor
* - strcat(destino, origem) => concatenar strings
* - strlen(var ou "texto") => tamanho da string
* - strcmp(var1, var2) => compara se duas strings são idênticas (retorna 0 se for)
* 
* Função da lib <locale.h>
* - setlocale(LC_ALL, "Portuguese") => permite acentos
*/

int main() {
  setlocale(LC_ALL, "Portuguese");

  // strcpy
  char origem[N] = {"Olá, mundo!"};
  char destino[N];

  printf("Antes do strcpy:\n");
  puts(origem);
  puts(destino);

  strcpy(destino, origem);

  printf("Depois do strcpy:\n");
  puts(origem);
  puts(destino);

  // strcat
  char s1[N] = {"Lógica de"};
  char s2[N] = {" Programação!"};

  printf("------------------------------------");

  printf("\nAntes do strcat:\n");
  printf("str1: %s\n", s1);
  printf("str2: %s\n", s2);

  strcat(s1,s2);

  printf("Depois do strcat:\n");
  puts(s1);

  // strlen
  char s[N];
  int i;

  printf("------------------------------------");

  printf("\nDigite um texto:\n");
  gets(s);
  fflush(stdin);

  i = strlen(s);
  printf("\nTamanho do texto: %d\n\n", i);

  printf("Impressão de posição a posição:\n");
  for(i = 0; i < strlen(s); i++) {
    printf("%c", s[i]);
  }

  // strcmp
  char hardText[N] = {"/exit"};
  char senha_usr[N];
  int ok;

  printf("\n------------------------------------");

  printf("\nDigite um texto:\n");
  gets(senha_usr);
  fflush(stdin);

  ok = strcmp(hardText, senha_usr);

  if(ok == 0)
    printf("\nTextos iguais.\n");
  else 
    printf("\nTextos diferentes.\n");
}
