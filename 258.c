#include <stdio.h>

void bin(int n) {
  if(n == 1) {
    printf("1");
    return;
  }
  bin(n / 2);
  printf("%d", n % 2);
}

void main() {
  int n;
  scanf("%d", &n);
  printf("Valor correspondente em binario: ");
  bin(n);
  printf("\n");
}
