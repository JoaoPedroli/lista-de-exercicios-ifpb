#include <stdio.h>

int ns[12];

int f(int n) {
  if(n == 10) return 0;
  return ns[n] + f(n+1);
}

void main() {
  for(int i = 0; i < 10; ++i) {
    scanf("%d", &ns[i]);
  }
  int n;
  scanf("%d", &n);
  printf("Soma de todos os elementos do vetor a partir da posicao %d: %d\n", n, f(n-1));
}
