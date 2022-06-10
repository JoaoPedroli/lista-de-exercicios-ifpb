#include <stdio.h>

int ns[11];

int f(int i) {
  if(i == 10) return 0;
  int ehpar = (ns[i] % 2 == 0);
  return ehpar + f(i + 1);
}

void main() {
  for(int i = 0; i < 10; ++i) {
    scanf("%d", &ns[i]);
  }
  int N; scanf("%d", &N);
  int pares = f(N-1);
  printf("Existem %d numeros pares a partir da posicao %d do vetor\n", pares, N);
}
