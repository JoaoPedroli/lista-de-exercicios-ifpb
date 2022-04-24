#include <stdio.h>
#include <math.h>

int main() {
  int a, b;
  printf("Digite o valor do 1º cateto: ");
  scanf("%d", &a);
  printf("Digite o valor do 2º cateto: ");
  scanf("%d", &b);

  printf("O valor da hipotenusa eh: %.1lf", sqrt((a*a) + (b*b)));

  return 0;
}
