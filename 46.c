#include <stdio.h>

void main() {
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  int a = num % 10;
  int b = num % 100 / 10;
  int c = num % 1000 / 100;
  int rev = (a * 100) + (b * 10) + c;
  printf("O reverso do numero eh: %d\n", rev);
}
