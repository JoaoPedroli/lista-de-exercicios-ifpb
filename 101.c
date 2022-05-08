#include <stdio.h>

int main() {
  int N;
  printf("Digite o valor de N: ");
  scanf("%d", &N);
  int i = 2;
  for(; i <= N; ++i) {
    if(i % 2 == 1) printf("%d\n", i);
  }

  return 0;
}
