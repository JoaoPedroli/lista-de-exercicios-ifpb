#include <stdio.h>

float matriz[5][5];
int N;

void f(int n) {
  if(n == N) {
    printf("\n");
    return;
  }
  printf("%.1f ", matriz[n][n]);
  f(n + 1);
}

int main() {
  int i = 0, j;
  for(; i < 5; ++i) {
    for(j = 0; j < 5; ++j) {
      printf("Digite o valor do elemento %d %d da matriz: ", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }

  printf("Digite o valor de N (entre 1 e 5): ");
  scanf("%d", &N);

  f(0);

  return 0;
}
