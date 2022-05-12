#include <stdio.h>

void main() {
  int num;
  printf("Digite um numero entre 1 e 9999: ");
  scanf("%d", &num);
  
  int milhar = num / 1000.0;
  int centena = num % 1000 / 100.0;
  int dezena = num % 100 / 10.0;
  int unidade = num % 10;
  
  printf("Unidade de Milhar: %d\n", milhar);
  printf("Centena: %d\n", centena);
  printf("Dezena: %d\n", dezena);
  printf("Unidade: %d\n", unidade);
}
