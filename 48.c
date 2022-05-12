#include <stdio.h>

void main() {
  float valor, num_parcelas;
  printf("Digite o valor a ser financiado: ");
  scanf("%f", &valor);
  printf("Digite o numero de parcelas desejadas: ");
  scanf("%f", &num_parcelas);

  const float TAXA = valor * 4 / 100;
  float parcela = (valor / num_parcelas) + TAXA;
  float total = parcela * num_parcelas;

  printf("O valor de cada parcela eh: R$ %.2f\n", parcela);
  printf("O valor total que o cliente pagara pelo emprestimo eh: R$ %.2f\n", total);
}
