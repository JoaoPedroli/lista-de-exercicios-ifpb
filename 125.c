#include <stdio.h>

void main() {
  int N; scanf("%d", &N);
  int i = 6;
  while(N > 0) {
    if(N == 1) {
      if(i < 33550330) {
        i = 33550330;
      }
    }
    int soma = 0;
    for(int j = 1; j < i; ++j) {
      if(i % j == 0) {
        soma += j;
      }
    }
    if(soma == i) {
      printf("%d ", i);
      N--;
    }
    i++;
  }
  printf("\n");
}
