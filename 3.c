#include <stdio.h>

int main() {
  double lado;
  printf("Digite o valor do lado de um quadrado: ");
  scanf("%lf", &lado);
  printf("Area do quadrado: %.2lf\n", lado * lado);
  printf("Perimetro do quadrado: %.2lf\n", 4 * lado);

  return 0;
}

