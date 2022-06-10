#include <stdio.h>

int ns[11];

int ehprimo(int n) {
  if(n == 1) return 0;
  for(int i = 2; i < n; ++i) {
    if(n % i == 0) return 0;
  }
  return 1;
}

int f(int i) {
  if(i == 10) return 0;
  return ehprimo(ns[i]) + f(i + 1);
}

void main() {
  for(int i = 0; i < 10; ++i) {
    scanf("%d", &ns[i]);
  }
  int N; scanf("%d", &N);
  int primos = f(N-1);
  printf("Existem %d numeros primos a partir da posicao %d do vetor\n", primos, N);
}
