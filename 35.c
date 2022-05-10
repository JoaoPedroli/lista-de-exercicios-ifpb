#include <stdio.h>

void main() {
  double metros;
  printf("Digite a distancia em metros: ");
  scanf("%lf", &metros);
  printf("%lf corresponde a:\n", metros);
  printf("quilometros: %lf\n", metros / 1000);
  printf("hectometros: %lf\n", metros / 100);
  printf("decametros: %lf\n", metros / 10);
  printf("decimetros: %lf\n", metros * 10);
  printf("centimetros: %lf\n", metros * 100);
  printf("milimetros: %lf\n", metros * 1000);
}
