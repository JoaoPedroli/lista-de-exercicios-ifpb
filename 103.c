#include <stdio.h>

void main() {
  int n, i;
  scanf("%d", &n);
  int ehprimo = 1;
  if(n == 1) ehprimo = 0;
  for(i = 2; i < n; i++) {
    if(n % i == 0) {
      ehprimo = 0;
      i = n;
    }
  }
  if(ehprimo == 1) {
    printf("%d eh primo :)\n", n);
  } else {
    printf("%d nao eh primo :(\n", n);
  }
}
