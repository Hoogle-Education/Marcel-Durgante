#include <stdio.h>

int main() {
  int estoque = 11;

  // TODO: explicar porque sempre da certo para qualquer valor
  while(estoque != 0) {
    if(estoque > 0) {
      printf("estou vendendo... estoque atual: %d\n", estoque);
      estoque -= 3;
    } else if (estoque < 0) {
      printf("estou comprando... estoque atual: %d\n", estoque);
      estoque += 10;
    }
  }
}