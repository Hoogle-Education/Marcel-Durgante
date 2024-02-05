// 0, 1, , , , ,  ?(6), 
#include <stdio.h>

int fib_recursivo(int n) { // top down
  if(n == 0)
    return 0;

  if(n == 1)
    return 1;

  return fib_recursivo(n-1) + fib_recursivo(n-2);
} // 2^60

int fib_em_vetor(int n) { // bottom up
  int fib[100000];

  fib[0] = 0;
  fib[1] = 1;

  for(int i = 2; i <= n; i ++) {
    fib[i] = fib[i-1] + fib[i-2];
  }

  return fib[n];
}// 60

int main() {

  // printf("recursivo: %d\n", fib_recursivo(60));
  printf("iterativo: %d\n", fib_em_vetor(60));

}