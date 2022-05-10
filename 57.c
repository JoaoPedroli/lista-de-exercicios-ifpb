#include <stdio.h>

void main() {
  float pass_reais, pass_reais_exemp, pass_milhas_exemp;
  printf("Digite o valor da passagem em reais: ");
  scanf("%f", &pass_reais_exemp);
  printf("Digite o valor da passagem em milhas: ");
  scanf("%f", &pass_milhas_exemp);

  printf("Digite o valor da passagem em reais que Caio deseja comprar: ");
  scanf("%f", &pass_reais);

  // aplica regra de 3
  float pass_milhas = (pass_reais * pass_milhas_exemp) / pass_reais_exemp;
  printf("Caio precisa juntar %.2f milhas para que ele nao precise pagar pela passagem\n", pass_milhas);
}
