#include <stdio.h>

int a, b, c;

int menorDivisor(int x) {
  if(a % x == 0 || b % x == 0 || c % x == 0) return x;
  return menorDivisor(x + 1);
}

void main() {
  scanf("%d%d%d", &a, &b, &c);
  printf("O MMC destes 3 numeros eh: %d\n", menorDivisor(2));
}
