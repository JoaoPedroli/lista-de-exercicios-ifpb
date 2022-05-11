#include <stdio.h>

void main() {
  int ano, mes, tam_pena_anos, tam_pena_meses;
  printf("Digite o ano e o mes em que o preso comecara a cumprir a sua pena: ");
  scanf("%d%d", &ano, &mes);
  printf("Digite o tamanho da pena, em anos e meses: ");
  scanf("%d%d", &tam_pena_anos, &tam_pena_meses);
  ano += tam_pena_anos + (mes + tam_pena_meses) / 12;
  mes = (mes + tam_pena_meses - 1) % 12 + 1;
  printf("O preso terminara de cumprir a sua pena no mes %d do ano de %d\n", mes, ano);
}
