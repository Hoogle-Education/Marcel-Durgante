#include <stdio.h>

void count(int num) {
  printf("estou passando pelo numero %d\n", num);

  if(num == 0) // verificacao
    return;

  printf("%d\n", num);
  count(num - 1); // atualizacao
  printf("estou voltando pelo numero %d\n", num);
}

int main() {
  count(8); // inicializacao
}