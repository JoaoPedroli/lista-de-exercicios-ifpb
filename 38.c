#include <stdio.h>

int main() {
  int segundos;
  printf("Digite um valor em segundos: ");
  scanf("%d", &segundos);

  printf("%d segundo(s) equivale(m) a: ", segundos);
  int horas = segundos / 3600;
  segundos %= 3600;
  int minutos = segundos / 60;
  segundos %= 60;

  printf("%d hora(s) %d minuto(s) %d segundo(s)\n", horas, minutos, segundos);

  return 0;
}
