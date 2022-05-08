#include <stdio.h>

int main() {
  int N;
  printf("Digite o valor de N: ");
  scanf("%d", &N);
  printf("Todos os divisores exatos de N:\n");
  const int METADE_DE_N = N / 2;
  int i = 1;
  for(; i <= METADE_DE_N; ++i) {
    if(N % i == 0) printf("%d\n", i);
  }

  return 0;
}
