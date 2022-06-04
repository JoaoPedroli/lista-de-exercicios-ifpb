#include <stdio.h>

void main() {
  int N;
  printf("Digite o valor de N: ");
  scanf("%d", &N);
  printf("Todos os divisores exatos de N:\n");
  const int METADE_DE_N = N / 2;
  for(int i = 1; i <= METADE_DE_N; ++i) {
    if(N % i == 0) printf("%d ", i);
  }
  printf("\n");
}
