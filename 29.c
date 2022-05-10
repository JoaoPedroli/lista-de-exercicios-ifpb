#include <stdio.h>

void main() {
  int total, acertos;
  printf("Digite o numero total de questoes existentes em uma prova: ");
  scanf("%d", &total);
  printf("Digite o numero de questoes que o candidato acertou: ");
  scanf("%d", &acertos);
  float percentual_acertos = acertos * 100 / total;
  float percentual_erros = 100 - percentual_acertos;
  printf("Percentual de acertos: %.1f %%\n", percentual_acertos);
  printf("Percentual de erros: %.1f %%\n", percentual_erros);
}
