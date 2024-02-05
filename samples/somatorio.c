#include <stdio.h>
#define MAXN 100000

typedef unsigned long long ull;

// 1 2 3 4 5 6
ull soma_iterativa(int vetor[], int size) {
  ull soma = 0;

  for(int i = 0; i < size; i++) {
    soma += vetor[i];
  }

  return soma;
} // O(n) - linear

ull soma_recursiva(int vetor[], int size) {
  // caso base
  if(size == 0)
    return 0;

  int ultimoElemento = vetor[size - 1];

  // caso recursivo
  return ultimoElemento + soma_recursiva(vetor, size-1);
} // O(n) - linear

// 21 = (6 + 15) -> (5 + 10) -> (4 + 6) -> (3 + 3) -> (2 + 1) -> (1)

int main() {
  int vetor[MAXN];
  
  for(int i = 0; i < MAXN; i++){
    vetor[i] = i;
  }

  //printf("%llu\n", soma_iterativa(vetor, MAXN) );
  printf("%llu\n", soma_recursiva(vetor, MAXN) );
}

// n < 1000
// 10^8 = 100,000,000
// 10^3 = 1,000