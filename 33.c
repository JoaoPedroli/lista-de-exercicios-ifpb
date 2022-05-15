#include <stdio.h>

void main() {
  char cand1[100], cand2[100], cand3[100];
  int votos1, votos2, votos3;
  printf("Digite o nome do candidato 1: ");
  scanf("%s", &cand1);
  printf("Qtd. de votos para %s: ", &cand1);
  scanf("%d", &votos1);
  printf("Digite o nome do candidato 2: ");
  scanf("%s", &cand2);
  printf("Qtd. de votos para %s: ", &cand2);
  scanf("%d", &votos2);
  printf("Digite o nome do candidato 3: ");
  scanf("%s", &cand3);
  printf("Qtd. de votos para %s: ", &cand3);
  scanf("%d", &votos3);

  int total = votos1 + votos2 + votos3;
  float perc1 = votos1 * 100.0 / total;
  float perc2 = votos2 * 100.0 / total;
  float perc3 = votos3 * 100.0 / total;

  printf("== Percentual ==\n");
  printf("%.1f %% dos votos para o candidato %s\n", perc1, cand1);
  printf("%.1f %% dos votos para o candidato %s\n", perc2, cand2);
  printf("%.1f %% dos votos para o candidato %s\n", perc3, cand3);
}
