#include <stdio.h>

int arr1[11], arr2[11];

int f(int N) {
  if(N == 10) return 1;
  return (arr1[N] == arr2[N] && f(N+1));
}

void main() {
  for(int i = 0; i < 10; ++i) {
    scanf("%d", &arr1[i]);
  }
  for(int i = 0; i < 10; ++i) {
    scanf("%d", &arr2[i]);
  }
  int N; scanf("%d", &N);

  if(f(N)) printf("Os dois vetores sao identicos a partir da posicao %d\n", N);
  else printf("Os dois vetores nao sao identicos a partir da posicao %d\n", N);
}
