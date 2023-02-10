#include <stdio.h>

int main() {
  int b, c;

  printf("break: ");

  for(b = 1; b <=10; b++) {
    printf("%d ", b);
    
    if(b == 5) {
      break; // encerra o laço no 5
    }
  }

  printf("\n");

  printf("continue: ");

  for(c = 1; c <=10; c++) {
    
    if(c == 5) {
      continue; // pula para a próxima iteração, não imprimindo o 5 na tela
    }

    printf("%d ", c);
  }

  printf("\n");
}
