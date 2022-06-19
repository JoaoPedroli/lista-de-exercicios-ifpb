#include <stdio.h>

int factorial (int n) {
  if(n < 2) return 1;
  return n * factorial(n-1);
}

void main() {
  int n;
  printf("Digite o valor de N: ");
  scanf("%d", &n);
  printf("%d! = %d\n", n, factorial(n));
}
