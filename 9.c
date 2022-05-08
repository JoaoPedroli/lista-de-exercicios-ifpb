#include <stdio.h>

int main() {
  double km, horas;
  printf("Insira a distancia percorrida em km: ");
  scanf("%lf", &km);
  printf("Insira o tempo gasto em horas: ");
  scanf("%lf", &horas);
  double metros = km * 1000;
  double segundos = horas * 3600;
  double velocidade_media = metros / segundos;
  printf("Velocidade Media: %.2lf m/s\n", velocidade_media);

  return 0;
}
