#include <stdio.h>

void main() {
  double tam, taxa_kbs;
  printf("Digite o tamanho do arquivo em MB: ");
  scanf("%lf", &tam);
  printf("Digite a taxa de transmissao da rede em KB/s: ");
  scanf("%lf", &taxa_kbs);
  double taxa_mbs = taxa_kbs / 1000;
  float fsegundos = tam / (taxa_mbs / 8);
  int segundos = fsegundos, minutos, horas;
  minutos = segundos / 60, segundos %= 60;
  horas = minutos / 60, minutos %= 60;
  printf("Tempo aproximado necessario para a transmissao do arquivo: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);
}
