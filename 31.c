#include <stdio.h>

void main() {
  int acertos, erros, null;
  printf("Digite o num de questoes que o candidato acertou: ");
  scanf("%d", &acertos);
  printf("Digite o num de questoes que o candidato errou: ");
  scanf("%d", &erros);
  printf("Digite o num de questoes que o candidato deixou em branco: ");
  scanf("%d", &null);

  int total = acertos * 5 - erros * 3;
  printf("Pontuacao final do candidato: %d\n", total);
}
