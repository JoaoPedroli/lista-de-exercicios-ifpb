#include <stdio.h>

int ns[12];

int f(int n) {
  if(n == 11) return 0;
  return ns[n] + f(n+1);
}

void main() {
  for(int i = 1; i <= 10; scanf("%d", ns+i), ++i);
  int n;
  scanf("%d", &n);
  printf("Soma de todos os elementos do vetor a partir da posicao %d: %d\n", n, f(n));
}
