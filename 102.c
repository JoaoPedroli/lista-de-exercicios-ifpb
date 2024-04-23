#include <stdio.h>

void main() {
  int N;
  printf("Digite o valor de N: ");
  scanf("%d", &N);
  printf("Todos os divisores exatos de N:\n");
  for(int i = 1; i <= N; ++i) {
    if(N % i == 0) printf("%d ", i);
  }
  printf("\n");
}
