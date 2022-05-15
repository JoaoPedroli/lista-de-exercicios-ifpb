#include <stdio.h>

void main() {
  float atual, antigo;
  printf("Digite o preco atual de uma acao: ");
  scanf("%f", &atual);
  printf("Digite o preco anterior dessa acao: ");
  scanf("%f", &antigo);
  float variacao = atual / antigo * 100 - 100;
  printf("A variacao foi de %.2f %%\n", variacao);
}
