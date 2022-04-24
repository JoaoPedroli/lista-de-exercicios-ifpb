#include <stdio.h>

int main() {
  double km, t;
  printf("Insira a distancia percorrida em km: ");
  scanf("%lf", &km);
  printf("Insira o tempo gasto em horas: ");
  scanf("%lf", &t);
  printf("Velocidade Media: %.2lf km\n", km / t);

  return 0;
}
