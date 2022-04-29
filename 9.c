#include <stdio.h>

int main() {
  double km, t;
  printf("Insira a distancia percorrida em km: ");
  scanf("%lf", &km);
  printf("Insira o tempo gasto em horas: ");
  scanf("%lf", &t);
  double velocidade_media = km / t;
  printf("Velocidade Media: %.2lf km\n", velocidade_media);

  return 0;
}
