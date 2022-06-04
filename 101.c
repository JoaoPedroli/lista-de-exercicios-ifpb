#include <stdio.h>

void main() {
  int N;
  printf("Digite o valor de N: ");
  scanf("%d", &N);
  int i, K = 1;
  for(i = 0; i < N; ++i) {
    printf("%d ", K);
    K += 2;
  }
  printf("\n");
}
