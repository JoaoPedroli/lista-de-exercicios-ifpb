#include <stdio.h>

void main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  int a = num % 10;
  int b = num % 100 / 10;
  int c = num % 1000 / 100;
  int d = num / 1000;
  int rev = (a * 1000) + (b * 100) + (c * 10) + d;
  printf("O inverso do numero eh: %d\n", rev);
}
