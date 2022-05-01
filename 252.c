#include <stdio.h>

#define max(a, b) (a > b ? a : b)
#define min(a, b) (a < b ? a : b)

int sum(int m, int n) {
  int maior = max(m, n), menor = min(m, n);
  if(maior == menor) return menor;
  return maior + sum(maior-1, menor);
}

int main() {
  printf("A soma de todos os numeros do intervalo [M, N] eh: %d\n", sum(6, 1));

  return 0;
}
