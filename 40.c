#include <stdio.h>

const int TAXA_COUVERT = 10;

void main() {
  float valor;
  printf("Digite o valor total: ");
  scanf("%f", &valor);
  const float TAXA_SERVICO = valor / 10;
  valor += TAXA_COUVERT + TAXA_SERVICO;
  printf("Valor final: R$ %.2f\n", valor);
}
