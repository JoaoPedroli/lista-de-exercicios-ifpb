#include <stdio.h>

void main() {
  int a, b;
  printf("Digite o valor de A e B: ");
  scanf("%d%d", &a, &b);
  int x = a; a = b, b = x;
  printf("A = %d | B = %d\n", a, b);
}
