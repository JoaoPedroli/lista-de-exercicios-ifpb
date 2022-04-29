#include <stdio.h>

int sum(int m, int n) {
  int maior = (m > n ? m : n), menor = (m < n ? m : n);
  if(maior == menor) return menor;
  return maior + sum(maior-1, menor);
}

int main() {
  printf("A soma de todos os numeros do intervalo [M, N] eh: %d\n", sum(5, 1));

  return 0;
}
